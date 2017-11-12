#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mytimer.h"
#include "globals.h"
#include <QDebug>
#include "unistd.h"
#include "../qextserialport-master/src/qextserialport.h"
#include <iostream>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include "GPIOClass.h"
using namespace std;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->resetButton, SIGNAL(clicked(bool)), this, SLOT(resetClock()));
    connect(ui->startButton, SIGNAL(clicked(bool)), this, SLOT(startClock()));
    connect(ui->stopButton, SIGNAL(clicked(bool)), this, SLOT(stopClock()));
    connect(ui->fwdButton, SIGNAL(clicked(bool)), this, SLOT(moveFwd()));
    connect(ui->aftButton, SIGNAL(clicked(bool)), this, SLOT(moveAft()));
    connect(ui->exitButton, SIGNAL(clicked(bool)), this, SLOT(exit()));

    //Export GPIO
    gpioPreStage->export_gpio();
    gpioStage->export_gpio();
    gpioAmber1->export_gpio();
    gpioAmber2->export_gpio();
    gpioAmber3->export_gpio();
    gpioGo->export_gpio();
    gpioFalseStart->export_gpio();

    //Set GPIO pin directions
    gpioPreStage->setdir_gpio("out");
    gpioStage->setdir_gpio("out");
    gpioAmber1->setdir_gpio("out");
    gpioAmber2->setdir_gpio("out");
    gpioAmber2->setdir_gpio("out");
    gpioAmber3->setdir_gpio("out");
    gpioGo->setdir_gpio("out");
    gpioFalseStart->setdir_gpio("out");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updatePosition(int position)
{
    qDebug("Position: %d", position);
    ui->positionText->setText(QString::number(position));

    if(position > -4)
    {
        ui->preStageLight->setStyleSheet("QLabel { background-color : yellow}");
        if(position > -1 && position < 1)
        {
            ui->stageLight->setStyleSheet("QLabel { background-color : yellow}");
            startSeq();
        }
    }
}

void MainWindow::startClock()
{
    t->start();
    qDebug("Timer Started");
}

void MainWindow::stopClock()
{
    //Reaction Time less than 1 second
    qDebug("Time Elapsed: %d ms", t->elapsed());
    if(t->elapsed() < 1000)
    {
        ui->milliTime->setText(QString::number(t->elapsed()));
    }

    //Reaction Time between 1 and 2 seconds
    else if(t->elapsed() > 999 && t->elapsed() < 2000)
    {
        ui->milliTime->setText(QString::number(t->elapsed() % 1000));
        ui->secondTime->setText("01");
    }

    //Reaction Time between 2 and 3 seconds
    else if(t->elapsed() > 1999 && t->elapsed() < 3000)
    {
        ui->milliTime->setText(QString::number(t->elapsed() % 2000));
        ui->secondTime->setText("02");
    }

    //Reaction Time between 3 and 4 seconds
    else if(t->elapsed() > 2999 && t->elapsed() < 4000)
    {
        ui->milliTime->setText(QString::number(t->elapsed() % 3000));
        ui->secondTime->setText("03");
    }

    //Reaction Time between 4 and 5 seconds
    else if(t->elapsed() > 3999 && t->elapsed() < 5000)
    {
        ui->milliTime->setText(QString::number(t->elapsed() % 4000));
        ui->secondTime->setText("04");
    }
    else if(t->elapsed() > 5000){
        ui->milliTime->setText("---");
        ui->secondTime->setText("--");
    }
}

void MainWindow::resetClock()
{
    ui->secondTime->setText("00");
    ui->milliTime->setText("000");
    position = -12;
    ui->positionText->setText(QString::number(position));
    ui->stageLight->setStyleSheet("QLabel { background-color : rgb(255, 255, 220)}");
    ui->preStageLight->setStyleSheet("QLabel { background-color : rgb(255, 255, 220)}");
    ui->amberLight_1->setStyleSheet("QLabel { background-color : rgb(255, 255, 220)}");
    ui->amberLight_2->setStyleSheet("QLabel { background-color : rgb(255, 255, 220)}");
    ui->amberLight_3->setStyleSheet("QLabel { background-color : rgb(255, 255, 220)}");
    ui->goLight->setStyleSheet("QLabel { background-color : rgb(120, 170, 120)}");
    ui->falseStartLight->setStyleSheet("QLabel { background-color: rgb(255, 175, 175)}");
}

void MainWindow::moveFwd()
{
    position++;
    updatePosition(position);
}

void MainWindow::moveAft()
{
    position--;
    updatePosition(position);
    gpioPreStage->setval_gpio("1");
}

void MainWindow::startSeq()
{
    qDebug("StartSeq");
    Sleeper::sleep(1);
    ui->amberLight_1->setStyleSheet("QLabel { background-color : yellow}");
    Sleeper::msleep(500);
    ui->amberLight_2->setStyleSheet("QLabel { background-color : yellow}");
    Sleeper::msleep(500);
    ui->amberLight_3->setStyleSheet("QLabel { background-color : yellow}");
    Sleeper::msleep(500);
    ui->goLight->setStyleSheet("QLabel { background-color : green}");
    startClock();
}

void MainWindow::exit()
{
    //Unallocating GPIO
    gpioPreStage->unexport_gpio();
    gpioStage->unexport_gpio();
    gpioAmber1->unexport_gpio();
    gpioAmber2->unexport_gpio();
    gpioAmber3->unexport_gpio();
    gpioGo->unexport_gpio();
    gpioFalseStart->unexport_gpio();

    delete gpioPreStage;
    gpioPreStage = 0;

    delete gpioStage;
    gpioStage = 0;

    delete gpioAmber1;
    gpioAmber1 = 0;

    delete gpioAmber2;
    gpioAmber2 = 0;

    delete gpioAmber3;
    gpioAmber3 = 0;

    delete gpioGo;
    gpioGo = 0;

    delete gpioFalseStart;
    gpioFalseStart = 0;

    close();

}
