/********************************************************************************
** Form generated from reading UI file 'hellodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLODIALOG_H
#define UI_HELLODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HelloDialog
{
public:
    QLabel *label;
    QPushButton *okButton;

    void setupUi(QDialog *HelloDialog)
    {
        if (HelloDialog->objectName().isEmpty())
            HelloDialog->setObjectName("HelloDialog");
        HelloDialog->resize(400, 300);
        label = new QLabel(HelloDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 110, 91, 16));
        okButton = new QPushButton(HelloDialog);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(60, 110, 94, 26));

        retranslateUi(HelloDialog);

        QMetaObject::connectSlotsByName(HelloDialog);
    } // setupUi

    void retranslateUi(QDialog *HelloDialog)
    {
        HelloDialog->setWindowTitle(QCoreApplication::translate("HelloDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HelloDialog", "Hello, World", nullptr));
        okButton->setText(QCoreApplication::translate("HelloDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloDialog: public Ui_HelloDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLODIALOG_H
