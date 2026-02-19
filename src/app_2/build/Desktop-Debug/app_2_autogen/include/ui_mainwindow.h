/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *choicesLabel;
    QListWidget *choicesList;
    QLabel *optionLabel;
    QLineEdit *optionInput;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *decideButton;
    QLabel *weightLabel;
    QSpinBox *weightSpin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(910, 469);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        choicesLabel = new QLabel(centralwidget);
        choicesLabel->setObjectName("choicesLabel");
        choicesLabel->setGeometry(QRect(40, 80, 71, 21));
        choicesList = new QListWidget(centralwidget);
        choicesList->setObjectName("choicesList");
        choicesList->setGeometry(QRect(30, 110, 841, 261));
        optionLabel = new QLabel(centralwidget);
        optionLabel->setObjectName("optionLabel");
        optionLabel->setGeometry(QRect(90, 380, 61, 31));
        optionInput = new QLineEdit(centralwidget);
        optionInput->setObjectName("optionInput");
        optionInput->setGeometry(QRect(160, 380, 301, 31));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(620, 380, 91, 31));
        removeButton = new QPushButton(centralwidget);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(730, 380, 91, 31));
        decideButton = new QPushButton(centralwidget);
        decideButton->setObjectName("decideButton");
        decideButton->setGeometry(QRect(290, 10, 341, 71));
        weightLabel = new QLabel(centralwidget);
        weightLabel->setObjectName("weightLabel");
        weightLabel->setGeometry(QRect(480, 380, 61, 31));
        weightSpin = new QSpinBox(centralwidget);
        weightSpin->setObjectName("weightSpin");
        weightSpin->setGeometry(QRect(550, 380, 51, 31));
        weightSpin->setMinimum(1);
        weightSpin->setMaximum(10);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 910, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        choicesLabel->setText(QCoreApplication::translate("MainWindow", "Choices", nullptr));
        optionLabel->setText(QCoreApplication::translate("MainWindow", "Option:", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        decideButton->setText(QCoreApplication::translate("MainWindow", "MAKE A CHOICE!", nullptr));
        weightLabel->setText(QCoreApplication::translate("MainWindow", "Weight:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
