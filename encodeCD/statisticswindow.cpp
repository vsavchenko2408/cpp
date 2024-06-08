#include "statisticswindow.h"


StatisticsWindow::StatisticsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StatisticsWindow)
{
    ui->setupUi(this);
}

StatisticsWindow::~StatisticsWindow()
{
    delete ui;
}


void StatisticsWindow::displayStatistics(const std::vector<int>& inputData, const QString& inputLabel,
                                         const std::vector<int>& outputData, const QString& outputLabel)
{
    int count1 = 0, count0 = 0;
    for (int num : inputData) {
        if (num == 1) count1++;
        else count0++;
    }
    QString inputStats = inputLabel + ": " + QString::number(inputData.size()) + " шт [1=" + QString::number(count1 * 100 / inputData.size()) + "%; 0=" + QString::number(count0 * 100 / inputData.size()) + "%]\n";
    ui->inputStatisticsTextEdit->setPlainText(inputStats);

    count1 = 0; count0 = 0;
    for (int num : outputData) {
        if (num == 1) count1++;
        else count0++;
    }
    QString outputStats = outputLabel + ": " + QString::number(outputData.size()) + " шт [1=" + QString::number(count1 * 100 / outputData.size()) + "%; 0=" + QString::number(count0 * 100 / outputData.size()) + "%]\n";
    ui->outputStatisticsTextEdit->setPlainText(outputStats);
}
