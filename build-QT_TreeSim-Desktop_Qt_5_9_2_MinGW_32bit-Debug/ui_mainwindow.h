/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *resetButton;
    QPushButton *exitButton;
    QPushButton *fwdButton;
    QPushButton *aftButton;
    QLabel *milliTime;
    QLabel *secondTime;
    QLabel *period;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *reactionTimeText;
    QLabel *positionTextHeader;
    QLabel *positionTextNote;
    QLabel *positionText;
    QLabel *positionTextUnits;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *preStageLight;
    QLabel *stageLight;
    QLabel *amberLight_1;
    QLabel *amberLight_2;
    QLabel *amberLight_3;
    QLabel *goLight;
    QLabel *falseStartLight;
    QMenuBar *menuBar;
    QMenu *menuWildcat_Racing_Reaction_Timer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(819, 494);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(10, 10, 141, 61));
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(190, 10, 131, 61));
        fwdButton = new QPushButton(centralWidget);
        fwdButton->setObjectName(QStringLiteral("fwdButton"));
        fwdButton->setGeometry(QRect(10, 90, 141, 61));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 255, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 212, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 113, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(127, 212, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        fwdButton->setPalette(palette);
        aftButton = new QPushButton(centralWidget);
        aftButton->setObjectName(QStringLiteral("aftButton"));
        aftButton->setGeometry(QRect(190, 90, 131, 61));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(255, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(255, 127, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(255, 63, 63, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(127, 0, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(170, 0, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        aftButton->setPalette(palette1);
        milliTime = new QLabel(centralWidget);
        milliTime->setObjectName(QStringLiteral("milliTime"));
        milliTime->setGeometry(QRect(420, 170, 201, 101));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        milliTime->setFont(font);
        secondTime = new QLabel(centralWidget);
        secondTime->setObjectName(QStringLiteral("secondTime"));
        secondTime->setGeometry(QRect(330, 170, 71, 101));
        secondTime->setFont(font);
        period = new QLabel(centralWidget);
        period->setObjectName(QStringLiteral("period"));
        period->setGeometry(QRect(400, 170, 21, 101));
        period->setFont(font);
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(370, 10, 111, 91));
        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setGeometry(QRect(500, 10, 111, 91));
        reactionTimeText = new QLabel(centralWidget);
        reactionTimeText->setObjectName(QStringLiteral("reactionTimeText"));
        reactionTimeText->setGeometry(QRect(10, 180, 331, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        reactionTimeText->setFont(font1);
        positionTextHeader = new QLabel(centralWidget);
        positionTextHeader->setObjectName(QStringLiteral("positionTextHeader"));
        positionTextHeader->setGeometry(QRect(10, 250, 191, 71));
        positionTextHeader->setFont(font1);
        positionTextNote = new QLabel(centralWidget);
        positionTextNote->setObjectName(QStringLiteral("positionTextNote"));
        positionTextNote->setGeometry(QRect(10, 300, 241, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Sans"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        positionTextNote->setFont(font2);
        positionText = new QLabel(centralWidget);
        positionText->setObjectName(QStringLiteral("positionText"));
        positionText->setGeometry(QRect(200, 260, 111, 51));
        positionText->setFont(font);
        positionTextUnits = new QLabel(centralWidget);
        positionTextUnits->setObjectName(QStringLiteral("positionTextUnits"));
        positionTextUnits->setGeometry(QRect(310, 260, 111, 51));
        positionTextUnits->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(640, 110, 131, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        preStageLight = new QLabel(layoutWidget);
        preStageLight->setObjectName(QStringLiteral("preStageLight"));
        preStageLight->setAutoFillBackground(false);
        preStageLight->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 220);"));
        preStageLight->setFrameShape(QFrame::Box);
        preStageLight->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(preStageLight);

        stageLight = new QLabel(layoutWidget);
        stageLight->setObjectName(QStringLiteral("stageLight"));
        stageLight->setAutoFillBackground(false);
        stageLight->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 220);"));
        stageLight->setFrameShape(QFrame::Box);
        stageLight->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(stageLight);

        amberLight_1 = new QLabel(layoutWidget);
        amberLight_1->setObjectName(QStringLiteral("amberLight_1"));
        amberLight_1->setAutoFillBackground(false);
        amberLight_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 220);"));
        amberLight_1->setFrameShape(QFrame::Box);
        amberLight_1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(amberLight_1);

        amberLight_2 = new QLabel(layoutWidget);
        amberLight_2->setObjectName(QStringLiteral("amberLight_2"));
        amberLight_2->setAutoFillBackground(false);
        amberLight_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 220);"));
        amberLight_2->setFrameShape(QFrame::Box);
        amberLight_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(amberLight_2);

        amberLight_3 = new QLabel(layoutWidget);
        amberLight_3->setObjectName(QStringLiteral("amberLight_3"));
        amberLight_3->setAutoFillBackground(false);
        amberLight_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 220);"));
        amberLight_3->setFrameShape(QFrame::Box);
        amberLight_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(amberLight_3);

        goLight = new QLabel(layoutWidget);
        goLight->setObjectName(QStringLiteral("goLight"));
        goLight->setAutoFillBackground(false);
        goLight->setStyleSheet(QStringLiteral("background-color: rgb(120, 170, 120)"));
        goLight->setFrameShape(QFrame::Box);
        goLight->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(goLight);

        falseStartLight = new QLabel(layoutWidget);
        falseStartLight->setObjectName(QStringLiteral("falseStartLight"));
        falseStartLight->setAutoFillBackground(false);
        falseStartLight->setStyleSheet(QStringLiteral("background-color: rgb(255, 175, 175);"));
        falseStartLight->setFrameShape(QFrame::Box);
        falseStartLight->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(falseStartLight);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 819, 21));
        menuWildcat_Racing_Reaction_Timer = new QMenu(menuBar);
        menuWildcat_Racing_Reaction_Timer->setObjectName(QStringLiteral("menuWildcat_Racing_Reaction_Timer"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuWildcat_Racing_Reaction_Timer->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        resetButton->setText(QApplication::translate("MainWindow", "RESET", Q_NULLPTR));
        exitButton->setText(QApplication::translate("MainWindow", "EXIT", Q_NULLPTR));
        fwdButton->setText(QApplication::translate("MainWindow", "FORWARD", Q_NULLPTR));
        aftButton->setText(QApplication::translate("MainWindow", "REVERSE", Q_NULLPTR));
        milliTime->setText(QApplication::translate("MainWindow", "000", Q_NULLPTR));
        secondTime->setText(QApplication::translate("MainWindow", "00", Q_NULLPTR));
        period->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        startButton->setText(QApplication::translate("MainWindow", "START", Q_NULLPTR));
        stopButton->setText(QApplication::translate("MainWindow", "STOP", Q_NULLPTR));
        reactionTimeText->setText(QApplication::translate("MainWindow", "Reaction Time: ", Q_NULLPTR));
        positionTextHeader->setText(QApplication::translate("MainWindow", "Position:", Q_NULLPTR));
        positionTextNote->setText(QApplication::translate("MainWindow", "+ is Forward. - is Aft.", Q_NULLPTR));
        positionText->setText(QApplication::translate("MainWindow", "-12", Q_NULLPTR));
        positionTextUnits->setText(QApplication::translate("MainWindow", "\"", Q_NULLPTR));
        preStageLight->setText(QApplication::translate("MainWindow", "PRE-STAGE", Q_NULLPTR));
        stageLight->setText(QApplication::translate("MainWindow", "STAGE", Q_NULLPTR));
        amberLight_1->setText(QApplication::translate("MainWindow", "AMBER 1", Q_NULLPTR));
        amberLight_2->setText(QApplication::translate("MainWindow", "AMBER 2", Q_NULLPTR));
        amberLight_3->setText(QApplication::translate("MainWindow", "AMBER 3", Q_NULLPTR));
        goLight->setText(QApplication::translate("MainWindow", "GO", Q_NULLPTR));
        falseStartLight->setText(QApplication::translate("MainWindow", "FALSE START", Q_NULLPTR));
        menuWildcat_Racing_Reaction_Timer->setTitle(QApplication::translate("MainWindow", "Wildcat Racing Reaction Timer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
