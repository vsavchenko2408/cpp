#include "mainwindow.h"
#include "ui_mainwindow.h"
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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_selectFileButton_clicked()
{
    inputFilePath = QFileDialog::getOpenFileName(this, "Виберіть файл", "", "Text Files (*.txt);;All Files (*)");
    if (!inputFilePath.isEmpty()) {
        ui->filePathLabel->setText("Шлях до файлу: " + inputFilePath);
    }
}

void MainWindow::on_encodeButton_clicked()
{
    if (inputFilePath.isEmpty()) {
        QMessageBox::warning(this, "Помилка", "Спочатку виберіть файл!");
        return;
    }

    std::ifstream inputFile(inputFilePath.toStdString());
    std::ofstream outputFile("encoded_output.txt", std::ios::binary);
    std::vector<int> inputData;
    int number;

    while (inputFile >> number) {
        inputData.push_back(number);
    }

    printStatistics(inputData, "Вхід");

    std::vector<int> encodedData = encode(inputData);

    writeEncodedDataToFile(encodedData, "encoded_output.txt");

    printStatistics(encodedData, "Вихід");

    ui->progressBar->setValue(100);  // Завершение прогресса
}

void MainWindow::on_cancelButton_clicked()
{
    QApplication::quit();
}

void MainWindow::printStatistics(const std::vector<int>& data, const QString& label)
{
    int count1 = 0, count0 = 0;
    for (int num : data) {
        if (num == 1) count1++;
        else count0++;
    }
    QString stats = label + ": " + QString::number(data.size()) + " шт [1=" + QString::number(count1 * 100 / data.size()) + "%; 0=" + QString::number(count0 * 100 / data.size()) + "%]\n";
    ui->statisticsTextEdit->append(stats);
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
