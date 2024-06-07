#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVector>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_toolButton_clicked()
{
    QString path;

    path = QFileDialog::getOpenFileName(this, "Выберите файл");
    ui->label->setText(path);
    selectedFile = new QFile(path);
    emit fileSelected(selectedFile);
}


void MainWindow::on_action_clicked()
{
    QVector<int> dataforencode;
    if(selectedFile)
    {
        if(selectedFile->isOpen())
        {
            int count = (selectedFile->size()/sizeof(int));
            int intValue;
            for(int i=0;i<count;i++)
            {
                if (selectedFile->read(reinterpret_cast<char*>(&intValue), sizeof(int)) == sizeof(int))
                {
                    dataforencode.append(intValue);
                }
            }
        }
        else
        {
            qDebug() << "File not open!";
        }
    }
    else
    {
        qDebug() << "File not exist!";
    }

    //debug
    for(int x:dataforencode)
    {
        qDebug() << x;
    }



}

