#include "mainwindow.h"
#include <QApplication>
#include "mytimer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    MyTimer mTimer;

    return a.exec();
}
