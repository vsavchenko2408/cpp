#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->ChooseFileButton, &QPushButton::clicked, this, &MainWindow::on_ChooseFileButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ChooseFileButton_clicked()
{
    selectedFile = QFileDialog::getOpenFileName(this, "Choose File", "", "ALl Files(*.*);; Text Files(*,txt)");
    if(!selectedFile.isEmpty())
    {
        QMessageBox::information(this, "File Choosed", "File is: " + selectedFile);
    }
}

