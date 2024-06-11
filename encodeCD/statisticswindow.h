//statisticswindow.h
#ifndef STATISTICSWINDOW_H
#define STATISTICSWINDOW_H

#include <QDialog>
#include <vector>
#include <QString>
#include "ui_statisticswindow.h"


namespace Ui {
class StatisticsWindow;
}

class StatisticsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StatisticsWindow(QWidget *parent = nullptr);
    ~StatisticsWindow();
    void displayStatistics(const std::vector<int>& inputData, const QString& inputLabel,
                           const std::vector<int>& outputData, const QString& outputLabel);

private:
    Ui::StatisticsWindow *ui;
};

#endif // STATISTICSWINDOW_H
