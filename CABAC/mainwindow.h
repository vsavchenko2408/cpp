#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QProgressBar>
#include <QPushButton>

class MainWindow : public QWidget {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private:
    QLineEdit *cdPathEdit;
    QLineEdit *dcPathEdit;
    QProgressBar *cdProgressBar;
    QProgressBar *dcProgressBar;
    QLabel *cdTimeLabel;
    QLabel *dcTimeLabel;
};

#endif // MAINWINDOW_H
