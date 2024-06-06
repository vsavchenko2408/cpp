#include "mainwindow.h"
#include "ui_mainwindow.h"
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
    path = QFileDialog::getOpenFileName(this, "Выберите файл", "/home/master");
    ui->label->setText(path);
}


void MainWindow::on_action_clicked()
{





}

