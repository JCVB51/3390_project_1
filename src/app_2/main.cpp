#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile f(":/style.qss");
    if (f.open(QFile::ReadOnly | QFile::Text)) {
        a.setStyleSheet(QString::fromUtf8(f.readAll()));
        f.close();
    }

    MainWindow w;
    w.show();
    return a.exec();
}
