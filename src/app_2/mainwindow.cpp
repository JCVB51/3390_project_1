#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QRandomGenerator>
#include <QPushButton> // for &QPushButton::clicked

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 2) Add button listener (now includes weight + model)
    connect(ui->addButton, &QPushButton::clicked, this, [this]() {
        const QString text = ui->optionInput->text().trimmed();

        // 2a) Check if input field has a value
        if (text.isEmpty()) {
            ui->optionInput->setFocus();
            return;
        }

        // 5) Weight feature: read the user's weight
        const int weight = ui->weightSpin->value();

        // Store in model (separate from view)
        choices.push_back(Choice{ text, weight });

        // Update the view (list) — show weight so the user can see it
        ui->choicesList->addItem(QString("%1 (w=%2)").arg(text).arg(weight));

        // 2b) Clear input field
        ui->optionInput->clear();
        ui->optionInput->setFocus();
    });

    // 3) Remove button listener (remove from model + view)
    connect(ui->removeButton, &QPushButton::clicked, this, [this]() {
        const int row = ui->choicesList->currentRow();

        // 3a) Check if an item is selected
        if (row < 0) {
            QMessageBox::information(this, "Remove", "Please select an item to remove.");
            return;
        }

        // 3b) Remove from model
        choices.erase(choices.begin() + row);

        // Remove from view
        delete ui->choicesList->takeItem(row);
    });

    // 4) Decide button listener (weighted random selection)
    connect(ui->decideButton, &QPushButton::clicked, this, [this]() {
        if (choices.empty()) {
            QMessageBox::information(this, "Decide", "Add some choices first.");
            return;
        }

        // 5) Weighted selection: total weights
        int totalWeight = 0;
        for (const auto &c : choices) {
            totalWeight += c.weight;
        }

        // Pick random number in [1..totalWeight]
        int r = QRandomGenerator::global()->bounded(totalWeight) + 1;

        QString selectedText;
        for (const auto &c : choices) {
            r -= c.weight;
            if (r <= 0) {
                selectedText = c.text;
                break;
            }
        }

        // 4b) Show alert with the decision
        QMessageBox::information(this, "Decision", "You should choose:\n\n" + selectedText);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
