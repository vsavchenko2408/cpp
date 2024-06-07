#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
    QString inputFilePath;
    void printStatistics(const std::vector<int>& data, const QString& label);
    std::vector<bool> encode(const std::vector<int>& data);
    void updateProgressBar(int value);
};
#endif // MAINWINDOW_H
