#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <fstream>
#include <vector>
#include <iostream>

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

    std::ifstream inputFile(inputFilePath.toStdString());
    std::ofstream outputFile("encoded_output.txt");
    std::vector<int> inputData;
    int number;
    int totalNumbers = 0;

    while (inputFile >> number) {
        inputData.push_back(number);
        totalNumbers++;
    }

    printStatistics(inputData, "Вхід");

    std::vector<bool> encodedData = encode(inputData);

    for (long unsigned int i =0; i < encodedData.size(); ++i)
    {
        outputFile <<  encodedData[i];
        updateProgressBar((i+1)*100/encodedData.size());
    }

    std::vector<int> encodedDataInt(encodedData.begin(), encodedData.end());
    printStatistics(encodedDataInt, "Вихід");
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

std::vector<bool> MainWindow::encode(const std::vector<int>& data)
{
    std::vector<bool> encodedData;
    for (int num : data) {
        encodedData.push_back(num % 2);
    }
    return encodedData;
}

void MainWindow::updateProgressBar(int value)
{
    ui->progressBar->setValue(value);
}
