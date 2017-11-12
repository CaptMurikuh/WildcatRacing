#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "GPIOClass.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QTime *t;
    void startSeq();

    //Registering GPIO
    GPIOClass* gpioPreStage = new GPIOClass("6");
    GPIOClass* gpioStage = new GPIOClass("13");
    GPIOClass* gpioAmber1 = new GPIOClass("19");
    GPIOClass* gpioAmber2 = new GPIOClass("16");
    GPIOClass* gpioAmber3 = new GPIOClass("26");
    GPIOClass* gpioGo = new GPIOClass("20");
    GPIOClass* gpioFalseStart = new GPIOClass("21");


public slots:
    void updatePosition(int position);
    void startClock();
    void stopClock();
    void resetClock();
    void moveFwd();
    void moveAft();
    void exit();

private:
    Ui::MainWindow *ui;
};

class Sleeper : public QThread
{
public:
    static void usleep(unsigned long usecs){QThread::usleep(usecs);}
    static void msleep(unsigned long msecs){QThread::msleep(msecs);}
    static void sleep(unsigned long secs){QThread::sleep(secs);}
};


#endif // MAINWINDOW_H
