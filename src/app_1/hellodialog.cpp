#include "hellodialog.h"
#include "ui_hellodialog.h"
#include <QPushButton>

HelloDialog::HelloDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HelloDialog)
{
    ui->setupUi(this);

    // OK closes the dialog and returns to the main window
    connect(ui->okButton, &QPushButton::clicked, this, &QDialog::accept);
}

HelloDialog::~HelloDialog()
{
    delete ui;
}
