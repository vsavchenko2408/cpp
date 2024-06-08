#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "statisticswindow.h"
#include "ui_statisticswindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <fstream>
#include <vector>
#include <iostream>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    statisticsWindow = new StatisticsWindow(this);
    executionTimer = new QTimer(this);
    connect(executionTimer, &QTimer::timeout, this, &MainWindow::updateExecutionTime);
    executionTime = QTime(0, 0);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete statisticsWindow;
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
    executionTime = QTime(0, 0);
    executionTimer->start(1000);

    std::ifstream inputFile(inputFilePath.toStdString());
    std::ofstream outputFile("encoded_output.txt", std::ios::binary);
    std::vector<int> inputData;
    int number;

    while (inputFile >> number) {
        inputData.push_back(number);
    }


    std::vector<int> encodedData = encode(inputData);

    writeEncodedDataToFile(encodedData, "encoded_output.txt");

    statisticsWindow->displayStatistics(inputData, "Вхід", encodedData, "Вихід");
    statisticsWindow->exec();
    executionTimer->stop();
    ui->progressBar->setValue(100);

}

void MainWindow::on_cancelButton_clicked()
{
    QApplication::quit();
}

//void MainWindow::printStatistics(const std::vector<int>& data, const QString& label)
//{
//    showStatisticsWindow(data, label);
//}
void MainWindow::updateExecutionTime()
{
    executionTime = executionTime.addSecs(1);
    QString timeText = executionTime.toString("hh:mm:ss");
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

//void MainWindow::showStatisticsWindow(const std::vector<int>& data, const QString& label)
//{
//    statisticsWindow->displayStatistics(data, label);
//    statisticsWindow->exec();
//}
