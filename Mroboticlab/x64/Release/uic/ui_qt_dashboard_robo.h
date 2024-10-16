/********************************************************************************
** Form generated from reading UI file 'qt_dashboard_robo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_DASHBOARD_ROBO_H
#define UI_QT_DASHBOARD_ROBO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt_Dashboard_RoboClass
{
public:
    QFrame *Robo_Mon_dashboard;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QProgressBar *RPM_Guage;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLCDNumber *Robo_RPM_lcd;
    QSpacerItem *horizontalSpacer_2;
    QFrame *Robo_CON_panel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QFrame *frame_3;
    QLabel *Robo_Orient;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QFrame *frame_4;
    QLabel *Robo_Status;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *COM_Ports_Sel;
    QPushButton *Connect_btn;
    QLabel *Robo_Status_Ind;
    QWidget *widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *StatusBarLayout;
    QLabel *Say_Com_Status;
    QLabel *Info;
    QWidget *Batt_info;
    QHBoxLayout *horizontalLayout_4;
    QLabel *BAT_logo;
    QProgressBar *Batt_Status;

    void setupUi(QWidget *Qt_Dashboard_RoboClass)
    {
        if (Qt_Dashboard_RoboClass->objectName().isEmpty())
            Qt_Dashboard_RoboClass->setObjectName(QString::fromUtf8("Qt_Dashboard_RoboClass"));
        Qt_Dashboard_RoboClass->resize(600, 470);
        Qt_Dashboard_RoboClass->setStyleSheet(QString::fromUtf8("#StatusBarLayout{\n"
"	color: rgb(255, 170, 0);\n"
"}\n"
"#Robo_Mon_dashboard{	\n"
"background-color: rgb(76, 76, 76);\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius: 20;\n"
"border-style: groove;\n"
"border-color: rgb(159, 159, 159);\n"
"gridline-color: rgb(116, 116, 116);\n"
"}\n"
"#Robo_CON_panel{\n"
"background-color: rgb(76, 76, 76);\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius: 20;\n"
"border-style: groove;\n"
"border-color: rgb(159, 159, 159);\n"
"gridline-color: rgb(116, 116, 116);\n"
"}\n"
"#frame_4{\n"
"background-color: rgb(76, 76, 76);\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius: 10;\n"
"border-style: groove;\n"
"border-color: rgb(159, 159, 159);\n"
"gridline-color: rgb(116, 116, 116);\n"
"}\n"
"#Robo_RPM_lcd{\n"
"background:rgba(0,0,0,0.8);\n"
"}\n"
"#Robo_Status_Ind{\n"
"background-color: rgb(0, 255, 0);\n"
"border-radius: 15px;\n"
"}"));
        Robo_Mon_dashboard = new QFrame(Qt_Dashboard_RoboClass);
        Robo_Mon_dashboard->setObjectName(QString::fromUtf8("Robo_Mon_dashboard"));
        Robo_Mon_dashboard->setGeometry(QRect(10, 70, 581, 171));
        Robo_Mon_dashboard->setStyleSheet(QString::fromUtf8(""));
        Robo_Mon_dashboard->setFrameShape(QFrame::StyledPanel);
        Robo_Mon_dashboard->setFrameShadow(QFrame::Raised);
        label = new QLabel(Robo_Mon_dashboard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 10, 211, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Simplified Arabic Fixed"));
        font.setPointSize(22);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));
        layoutWidget = new QWidget(Robo_Mon_dashboard);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 561, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        RPM_Guage = new QProgressBar(layoutWidget);
        RPM_Guage->setObjectName(QString::fromUtf8("RPM_Guage"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RPM_Guage->sizePolicy().hasHeightForWidth());
        RPM_Guage->setSizePolicy(sizePolicy);
        RPM_Guage->setAutoFillBackground(false);
        RPM_Guage->setStyleSheet(QString::fromUtf8(""));
        RPM_Guage->setValue(100);
        RPM_Guage->setTextVisible(false);
        RPM_Guage->setInvertedAppearance(false);

        verticalLayout->addWidget(RPM_Guage);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Robo_RPM_lcd = new QLCDNumber(layoutWidget);
        Robo_RPM_lcd->setObjectName(QString::fromUtf8("Robo_RPM_lcd"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Robo_RPM_lcd->sizePolicy().hasHeightForWidth());
        Robo_RPM_lcd->setSizePolicy(sizePolicy1);
        Robo_RPM_lcd->setStyleSheet(QString::fromUtf8(""));
        Robo_RPM_lcd->setFrameShape(QFrame::Panel);
        Robo_RPM_lcd->setSegmentStyle(QLCDNumber::Filled);

        horizontalLayout->addWidget(Robo_RPM_lcd);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        Robo_CON_panel = new QFrame(Qt_Dashboard_RoboClass);
        Robo_CON_panel->setObjectName(QString::fromUtf8("Robo_CON_panel"));
        Robo_CON_panel->setGeometry(QRect(10, 250, 581, 171));
        Robo_CON_panel->setFrameShape(QFrame::StyledPanel);
        Robo_CON_panel->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(Robo_CON_panel);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 561, 158));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        verticalLayout_2->addWidget(label_2);

        frame_3 = new QFrame(layoutWidget1);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        Robo_Orient = new QLabel(frame_3);
        Robo_Orient->setObjectName(QString::fromUtf8("Robo_Orient"));
        Robo_Orient->setGeometry(QRect(10, 0, 261, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cambria"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        Robo_Orient->setFont(font1);
        Robo_Orient->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 191);\n"
"background-color: rgb(170, 170, 127);\n"
""));
        Robo_Orient->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(frame_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        verticalLayout_3->addWidget(label_11);


        horizontalLayout_2->addLayout(verticalLayout_3);

        frame_4 = new QFrame(Qt_Dashboard_RoboClass);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(10, 10, 581, 51));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        Robo_Status = new QLabel(frame_4);
        Robo_Status->setObjectName(QString::fromUtf8("Robo_Status"));
        Robo_Status->setGeometry(QRect(460, 10, 71, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Simplified Arabic Fixed"));
        font3.setPointSize(11);
        Robo_Status->setFont(font3);
        Robo_Status->setStyleSheet(QString::fromUtf8("color: rgb(244, 81, 0);"));
        layoutWidget2 = new QWidget(frame_4);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 251, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        COM_Ports_Sel = new QComboBox(layoutWidget2);
        COM_Ports_Sel->setObjectName(QString::fromUtf8("COM_Ports_Sel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(COM_Ports_Sel->sizePolicy().hasHeightForWidth());
        COM_Ports_Sel->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(COM_Ports_Sel);

        Connect_btn = new QPushButton(layoutWidget2);
        Connect_btn->setObjectName(QString::fromUtf8("Connect_btn"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Connect_btn->sizePolicy().hasHeightForWidth());
        Connect_btn->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(Connect_btn);

        Robo_Status_Ind = new QLabel(frame_4);
        Robo_Status_Ind->setObjectName(QString::fromUtf8("Robo_Status_Ind"));
        Robo_Status_Ind->setGeometry(QRect(540, 10, 31, 31));
        widget = new QWidget(Qt_Dashboard_RoboClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 601, 431));
        QFont font4;
        font4.setPointSize(9);
        widget->setFont(font4);
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/Qt_Dashboard_Robo/bg-rb_600x450.jpg);"));
        horizontalLayoutWidget = new QWidget(Qt_Dashboard_RoboClass);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 430, 601, 41));
        StatusBarLayout = new QHBoxLayout(horizontalLayoutWidget);
        StatusBarLayout->setSpacing(6);
        StatusBarLayout->setContentsMargins(11, 11, 11, 11);
        StatusBarLayout->setObjectName(QString::fromUtf8("StatusBarLayout"));
        StatusBarLayout->setContentsMargins(0, 0, 0, 0);
        Say_Com_Status = new QLabel(horizontalLayoutWidget);
        Say_Com_Status->setObjectName(QString::fromUtf8("Say_Com_Status"));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        Say_Com_Status->setFont(font5);
        Say_Com_Status->setStyleSheet(QString::fromUtf8("color: rgb(252, 168, 0);"));

        StatusBarLayout->addWidget(Say_Com_Status);

        Info = new QLabel(horizontalLayoutWidget);
        Info->setObjectName(QString::fromUtf8("Info"));
        Info->setFont(font5);
        Info->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));

        StatusBarLayout->addWidget(Info);

        Batt_info = new QWidget(horizontalLayoutWidget);
        Batt_info->setObjectName(QString::fromUtf8("Batt_info"));
        horizontalLayout_4 = new QHBoxLayout(Batt_info);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        BAT_logo = new QLabel(Batt_info);
        BAT_logo->setObjectName(QString::fromUtf8("BAT_logo"));
        sizePolicy3.setHeightForWidth(BAT_logo->sizePolicy().hasHeightForWidth());
        BAT_logo->setSizePolicy(sizePolicy3);
        BAT_logo->setFont(font5);
        BAT_logo->setStyleSheet(QString::fromUtf8("color: rgb(252, 168, 0);"));

        horizontalLayout_4->addWidget(BAT_logo);

        Batt_Status = new QProgressBar(Batt_info);
        Batt_Status->setObjectName(QString::fromUtf8("Batt_Status"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Batt_Status->sizePolicy().hasHeightForWidth());
        Batt_Status->setSizePolicy(sizePolicy4);
        Batt_Status->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));
        Batt_Status->setValue(0);

        horizontalLayout_4->addWidget(Batt_Status);


        StatusBarLayout->addWidget(Batt_info);

        widget->raise();
        Robo_Mon_dashboard->raise();
        Robo_CON_panel->raise();
        frame_4->raise();
        horizontalLayoutWidget->raise();

        retranslateUi(Qt_Dashboard_RoboClass);

        QMetaObject::connectSlotsByName(Qt_Dashboard_RoboClass);
    } // setupUi

    void retranslateUi(QWidget *Qt_Dashboard_RoboClass)
    {
        Qt_Dashboard_RoboClass->setWindowTitle(QCoreApplication::translate("Qt_Dashboard_RoboClass", "Robo DashBoard", nullptr));
        label->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "SPEEDO METER", nullptr));
        label_2->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "Robot Orientation", nullptr));
        Robo_Orient->setText(QString());
        label_4->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "1) Press UpArrow to move Forward", nullptr));
        label_5->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "2) Press DownArrow to move Backward", nullptr));
        label_6->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "3) Press RightArrow to move Right", nullptr));
        label_7->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "4) Press LeftArrow to move left", nullptr));
        label_8->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "5) Press PgUP to move Pivot Right", nullptr));
        label_9->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "6) Press PgDown to move Pivot Left", nullptr));
        label_10->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "7) Press + key to Iincrease RPM speed", nullptr));
        label_11->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "8) Press - key to Decrease RPM speed", nullptr));
        Robo_Status->setText(QString());
        Connect_btn->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "Connect", nullptr));
        Robo_Status_Ind->setText(QString());
        Say_Com_Status->setText(QString());
        Info->setText(QString());
        BAT_logo->setText(QCoreApplication::translate("Qt_Dashboard_RoboClass", "BAT: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qt_Dashboard_RoboClass: public Ui_Qt_Dashboard_RoboClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_DASHBOARD_ROBO_H
