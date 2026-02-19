#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "hellodialog.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->helloButton, &QPushButton::clicked, this, [this]() {
        HelloDialog dialog(this);
        dialog.exec(); // modal dialog
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
