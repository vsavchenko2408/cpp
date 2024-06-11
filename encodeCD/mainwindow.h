#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "statisticswindow.h"
#include <QTimer>
#include <QElapsedTimer>

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

private:
    Ui::MainWindow *ui;
    QString inputFilePath;
    std::vector<int> encode(const std::vector<int> &data);
    QTimer *executionTimer;
    QElapsedTimer *elapsedTimer;
    void writeEncodedDataToFile(const std::vector<int>& encodedData, const QString& filePath);
    void updateProgressBar(int value);
    StatisticsWindow *statisticsWindow;
};

#endif // MAINWINDOW_H
