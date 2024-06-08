#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "statisticswindow.h"
#include <QTimer>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_selectFileButton_clicked();
    void on_encodeButton_clicked();
    void on_cancelButton_clicked();
    void updateExecutionTime();
   // void showStatisticsWindow(const std::vector<int>& data, const QString& label);


private:
    Ui::MainWindow *ui;
    QString inputFilePath;
    std::vector<int> encode(const std::vector<int> &data);
    QTimer *executionTimer;
    QTime executionTime;
    void writeEncodedDataToFile(const std::vector<int>& encodedData, const QString& filePath);
    //void printStatistics(const std::vector<int>& data, const QString& label);
    void updateProgressBar(int value);
    StatisticsWindow *statisticsWindow;
};
#endif // MAINWINDOW_H
