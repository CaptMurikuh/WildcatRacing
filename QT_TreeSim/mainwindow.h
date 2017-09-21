#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>

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



public slots:
    void updatePosition(int position);
    void startClock();
    void stopClock();
    void resetClock();
    void moveFwd();
    void moveAft();

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
