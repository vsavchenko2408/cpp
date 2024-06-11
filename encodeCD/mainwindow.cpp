#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "statisticswindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <fstream>
#include <vector>
#include <iostream>
#include <QApplication>
#include <QElapsedTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    statisticsWindow = new StatisticsWindow(this);
    executionTimer = new QTimer(this);
    connect(executionTimer, &QTimer::timeout, this, &MainWindow::updateExecutionTime);
    elapsedTimer = new QElapsedTimer();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete statisticsWindow;
    delete elapsedTimer;
}

void MainWindow::on_selectFileButton_clicked()
{
    inputFilePath = QFileDialog::getOpenFileName(this, "Выберите файл", "", "Text Files (*.txt);;All Files (*)");
    if (!inputFilePath.isEmpty()) {
        ui->filePathLabel->setText("Путь к файлу: " + inputFilePath);
    }
}

void MainWindow::on_encodeButton_clicked()
{
    if (inputFilePath.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Сначала выберите файл!");
        return;
    }

    ui->executionTimeLabel->setText("00:00:00");
    ui->progressBar->setValue(0);

    elapsedTimer->start();
    executionTimer->start(1000);

    std::ifstream inputFile(inputFilePath.toStdString());
    std::ofstream outputFile("encoded_output.txt", std::ios::binary);
    std::vector<int> inputData;
    int number;

    while (inputFile >> number) {
        inputData.push_back(number);
    }

    // Установите общее количество шагов для прогрессбара
    int totalSteps = inputData.size();
    int currentStep = 0;

    // Кодирование с обновлением прогрессбара
    std::vector<int> encodedData;
    if (!inputData.empty()) {
        int count = 1;
        for (size_t i = 1; i < inputData.size(); ++i) {
            if (inputData[i] == inputData[i - 1]) {
                ++count;
            } else {
                encodedData.push_back(count);
                count = 1;
            }
            // Обновляем прогрессбар
            currentStep++;
            int progress = static_cast<int>((static_cast<double>(currentStep) / totalSteps) * 100);
            QMetaObject::invokeMethod(this, "updateProgressBar", Qt::QueuedConnection, Q_ARG(int, progress));
        }
        encodedData.push_back(count);
    }

    executionTimer->stop();
    ui->executionTimeLabel->setText(QTime(0, 0).addMSecs(elapsedTimer->elapsed()).toString("hh:mm:ss"));

    writeEncodedDataToFile(encodedData, "encoded_output.txt");

    statisticsWindow->displayStatistics(inputData, "Вхід", encodedData, "Вихід");
    statisticsWindow->exec();

    ui->progressBar->setValue(100);
}

void MainWindow::on_cancelButton_clicked()
{
    QApplication::quit();
}

void MainWindow::updateExecutionTime()
{
    QString timeText = QTime(0, 0).addMSecs(elapsedTimer->elapsed()).toString("hh:mm:ss");
    ui->executionTimeLabel->setText(timeText);
}

void MainWindow::updateProgressBar(int value)
{
    ui->progressBar->setValue(value);
}

std::vector<int> MainWindow::encode(const std::vector<int>& data)
{
    std::vector<int> encodedData;
    if (data.empty()) return encodedData;

    int count = 1;
    for (size_t i = 1; i < data.size(); ++i) {
        if (data[i] == data[i - 1]) {
            ++count;
        } else {
            encodedData.push_back(count);
            count = 1;
        }
    }
    encodedData.push_back(count);

    return encodedData;
}

void MainWindow::writeEncodedDataToFile(const std::vector<int>& encodedData, const QString& filePath)
{
    std::ofstream outputFile(filePath.toStdString(), std::ios::binary);
    for (int count : encodedData) {
        outputFile.write(reinterpret_cast<const char*>(&count), sizeof(count));
    }
}
