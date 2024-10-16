/********************************************************************************
** Form generated from reading UI file 'mroboticlab.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MROBOTICLAB_H
#define UI_MROBOTICLAB_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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

class Ui_MroboticlabClass
{
public:
    QAction *actionStop_Watch;
    QAction *actionABOUT_US;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *BLC;
    QPushButton *LFR;
    QPushButton *HFR;
    QLabel *Version_disp;
    QWidget *display_timedate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *display_time;
    QLabel *display_date;
    QLabel *message;
    QMenuBar *menuBar;
    QMenu *menuWin;
    QMenu *menuABOUT;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MroboticlabClass)
    {
        if (MroboticlabClass->objectName().isEmpty())
            MroboticlabClass->setObjectName(QString::fromUtf8("MroboticlabClass"));
        MroboticlabClass->resize(800, 620);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MroboticlabClass->sizePolicy().hasHeightForWidth());
        MroboticlabClass->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        MroboticlabClass->setFont(font);
        MroboticlabClass->setWindowOpacity(1.000000000000000);
        MroboticlabClass->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.863636 rgba(85, 86, 90, 235), stop:1 rgba(255, 255, 255, 255));\n"
"font: 75 11pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"label{\n"
" opacity: 0.8;\n"
"}\n"
"frame{\n"
" opacity: 0.8;\n"
"}\n"
"BLC{\n"
"opacity: 0.5;\n"
"}"));
        actionStop_Watch = new QAction(MroboticlabClass);
        actionStop_Watch->setObjectName(QString::fromUtf8("actionStop_Watch"));
        actionStop_Watch->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Mroboticlab/stopWatch.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop_Watch->setIcon(icon);
        actionABOUT_US = new QAction(MroboticlabClass);
        actionABOUT_US->setObjectName(QString::fromUtf8("actionABOUT_US"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Mroboticlab/png-clipart-about-us-logo-business-logo-company-brand-service-icon-about-us-hd-miscellaneous-blue_dark.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionABOUT_US->setIcon(icon1);
        centralWidget = new QWidget(MroboticlabClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/Mroboticlab/Comsats logo_2.jpg) no-repeat center fixed;\n"
"background-size: cover;\n"
"opacity:0.8;"));

        horizontalLayout_4->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/Mroboticlab/Robotic_software_logo.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setFont(font);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setMouseTracking(true);
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.477273 rgba(0, 0, 56, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Mroboticlab/dumy.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(230, 130));
        pushButton_5->setAutoRepeat(false);
        pushButton_5->setAutoExclusive(false);

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setMouseTracking(true);
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.477273 rgba(0, 0, 56, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(230, 130));
        pushButton_4->setAutoRepeat(false);
        pushButton_4->setAutoExclusive(false);

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setFont(font);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setMouseTracking(true);
        pushButton_6->setAutoFillBackground(false);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.477273 rgba(0, 0, 56, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton_6->setIcon(icon2);
        pushButton_6->setIconSize(QSize(230, 130));
        pushButton_6->setAutoRepeat(false);
        pushButton_6->setAutoExclusive(false);

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        BLC = new QPushButton(centralWidget);
        BLC->setObjectName(QString::fromUtf8("BLC"));
        sizePolicy1.setHeightForWidth(BLC->sizePolicy().hasHeightForWidth());
        BLC->setSizePolicy(sizePolicy1);
        BLC->setFont(font);
        BLC->setCursor(QCursor(Qt::PointingHandCursor));
        BLC->setMouseTracking(true);
        BLC->setAutoFillBackground(false);
        BLC->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.477273 rgba(0, 0, 56, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Mroboticlab/Remote.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        BLC->setIcon(icon3);
        BLC->setIconSize(QSize(230, 130));
        BLC->setAutoRepeat(false);
        BLC->setAutoExclusive(false);

        gridLayout->addWidget(BLC, 0, 0, 1, 1);

        LFR = new QPushButton(centralWidget);
        LFR->setObjectName(QString::fromUtf8("LFR"));
        sizePolicy1.setHeightForWidth(LFR->sizePolicy().hasHeightForWidth());
        LFR->setSizePolicy(sizePolicy1);
        LFR->setFont(font);
        LFR->setCursor(QCursor(Qt::PointingHandCursor));
        LFR->setMouseTracking(true);
        LFR->setAutoFillBackground(false);
        LFR->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.477273 rgba(0, 0, 56, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Mroboticlab/LRN.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        LFR->setIcon(icon4);
        LFR->setIconSize(QSize(230, 130));
        LFR->setAutoRepeat(false);
        LFR->setAutoExclusive(false);

        gridLayout->addWidget(LFR, 0, 2, 1, 1);

        HFR = new QPushButton(centralWidget);
        HFR->setObjectName(QString::fromUtf8("HFR"));
        sizePolicy1.setHeightForWidth(HFR->sizePolicy().hasHeightForWidth());
        HFR->setSizePolicy(sizePolicy1);
        HFR->setFont(font);
        HFR->setCursor(QCursor(Qt::PointingHandCursor));
        HFR->setMouseTracking(true);
        HFR->setAutoFillBackground(false);
        HFR->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.477273 rgba(0, 0, 56, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Mroboticlab/maxresdefault.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        HFR->setIcon(icon5);
        HFR->setIconSize(QSize(232, 130));
        HFR->setAutoRepeat(false);
        HFR->setAutoExclusive(false);

        gridLayout->addWidget(HFR, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        Version_disp = new QLabel(centralWidget);
        Version_disp->setObjectName(QString::fromUtf8("Version_disp"));

        verticalLayout->addWidget(Version_disp);

        display_timedate = new QWidget(centralWidget);
        display_timedate->setObjectName(QString::fromUtf8("display_timedate"));
        horizontalLayout_3 = new QHBoxLayout(display_timedate);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        display_time = new QLabel(display_timedate);
        display_time->setObjectName(QString::fromUtf8("display_time"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(display_time->sizePolicy().hasHeightForWidth());
        display_time->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(display_time);

        display_date = new QLabel(display_timedate);
        display_date->setObjectName(QString::fromUtf8("display_date"));
        sizePolicy2.setHeightForWidth(display_date->sizePolicy().hasHeightForWidth());
        display_date->setSizePolicy(sizePolicy2);
        display_date->setFont(font);

        horizontalLayout_3->addWidget(display_date);


        verticalLayout->addWidget(display_timedate);

        message = new QLabel(centralWidget);
        message->setObjectName(QString::fromUtf8("message"));
        message->setFont(font);

        verticalLayout->addWidget(message);

        MroboticlabClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MroboticlabClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 24));
        menuBar->setAutoFillBackground(false);
        menuBar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(58, 58, 58);"));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        menuWin = new QMenu(menuBar);
        menuWin->setObjectName(QString::fromUtf8("menuWin"));
        menuWin->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);"));
        menuABOUT = new QMenu(menuBar);
        menuABOUT->setObjectName(QString::fromUtf8("menuABOUT"));
        MroboticlabClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MroboticlabClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 68, 68);"));
        mainToolBar->setOrientation(Qt::Vertical);
        MroboticlabClass->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MroboticlabClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 58, 58);\n"
"color: rgb(203, 203, 203);"));
        statusBar->setSizeGripEnabled(false);
        MroboticlabClass->setStatusBar(statusBar);

        menuBar->addAction(menuWin->menuAction());
        menuBar->addAction(menuABOUT->menuAction());
        menuWin->addAction(actionStop_Watch);
        menuABOUT->addAction(actionABOUT_US);
        mainToolBar->addAction(actionStop_Watch);
        mainToolBar->addAction(actionABOUT_US);

        retranslateUi(MroboticlabClass);

        QMetaObject::connectSlotsByName(MroboticlabClass);
    } // setupUi

    void retranslateUi(QMainWindow *MroboticlabClass)
    {
        MroboticlabClass->setWindowTitle(QCoreApplication::translate("MroboticlabClass", "MINI ROBO FACTORY", nullptr));
        actionStop_Watch->setText(QCoreApplication::translate("MroboticlabClass", "Stop Watch", nullptr));
        actionABOUT_US->setText(QCoreApplication::translate("MroboticlabClass", "ABOUT US", nullptr));
        label->setText(QString());
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        pushButton_6->setText(QString());
        BLC->setText(QString());
        LFR->setText(QString());
        HFR->setText(QString());
        Version_disp->setText(QCoreApplication::translate("MroboticlabClass", "Ver 0.1", nullptr));
        display_time->setText(QString());
        display_date->setText(QString());
        message->setText(QCoreApplication::translate("MroboticlabClass", "Engineered By Arsalan Ali", nullptr));
        menuWin->setTitle(QCoreApplication::translate("MroboticlabClass", "WINDOW", nullptr));
        menuABOUT->setTitle(QCoreApplication::translate("MroboticlabClass", "ABOUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MroboticlabClass: public Ui_MroboticlabClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MROBOTICLAB_H
