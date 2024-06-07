#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVector>
#include <QDebug>
#include <QDataStream>
QVector<int> dataforencode;
 QString path;
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


    path = QFileDialog::getOpenFileName(this, "Выберите файл");
    ui->label->setText(path);
    selectedFile = new QFile(path);
    emit fileSelected(selectedFile);
}


void MainWindow::on_action_clicked()
{
    selectedFile->open(QIODevice::ReadOnly);
    if(selectedFile)
    {
        if(selectedFile->isOpen())
        {
            QDataStream in(selectedFile);

            while (!in.atEnd()) {
                int number;
                in >> number;
                dataforencode.push_back(number);
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
    for(int i=0;i<dataforencode.length();i++)
    {
        qDebug() << dataforencode.at(i);
    }

selectedFile->close();

}

