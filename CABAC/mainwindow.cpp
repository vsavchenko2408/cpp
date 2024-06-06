#include "mainwindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *mainLayout = new QVBoxLayout;

    QHBoxLayout *cdLayout = new QHBoxLayout;
    cdPathEdit = new QLineEdit;
    QPushButton *cdButton = new QPushButton("Папка CD");
    cdTimeLabel = new QLabel("00.00.00 час/мин/сек");
    cdProgressBar = new QProgressBar;

    cdLayout->addWidget(cdPathEdit);
    cdLayout->addWidget(cdButton);
    cdLayout->addWidget(cdTimeLabel);
    cdLayout->addWidget(cdProgressBar);

    QHBoxLayout *dcLayout = new QHBoxLayout;
    dcPathEdit = new QLineEdit;
    QPushButton *dcButton = new QPushButton("Папка DC");
    dcTimeLabel = new QLabel("00.00.00 час/мин/сек");
    dcProgressBar = new QProgressBar;

    dcLayout->addWidget(dcPathEdit);
    dcLayout->addWidget(dcButton);
    dcLayout->addWidget(dcTimeLabel);
    dcLayout->addWidget(dcProgressBar);

    QHBoxLayout *buttonsLayout = new QHBoxLayout;
    QPushButton *executeButton = new QPushButton("Выполнить");
    QPushButton *cancelButton = new QPushButton("Отменить");

    buttonsLayout->addWidget(executeButton);
    buttonsLayout->addWidget(cancelButton);

    mainLayout->addLayout(cdLayout);
    mainLayout->addLayout(dcLayout);
    mainLayout->addLayout(buttonsLayout);

    setLayout(mainLayout);
    setWindowTitle("CABAC Encoder/Decoder");
}
