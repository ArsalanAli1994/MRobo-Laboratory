/********************************************************************************
** Form generated from reading UI file 'bt_selection.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BT_SELECTION_H
#define UI_BT_SELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BT_Selection
{
public:
    QRadioButton *Bluetooth_Sl;
    QRadioButton *zigBee_Sl;
    QPushButton *BT_select_Btn;
    QPushButton *WinClose_Btn;
    QListWidget *showListItm;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *com_Say;

    void setupUi(QWidget *BT_Selection)
    {
        if (BT_Selection->objectName().isEmpty())
            BT_Selection->setObjectName(QString::fromUtf8("BT_Selection"));
        BT_Selection->resize(400, 300);
        Bluetooth_Sl = new QRadioButton(BT_Selection);
        Bluetooth_Sl->setObjectName(QString::fromUtf8("Bluetooth_Sl"));
        Bluetooth_Sl->setGeometry(QRect(50, 30, 111, 17));
        zigBee_Sl = new QRadioButton(BT_Selection);
        zigBee_Sl->setObjectName(QString::fromUtf8("zigBee_Sl"));
        zigBee_Sl->setGeometry(QRect(180, 30, 82, 17));
        BT_select_Btn = new QPushButton(BT_Selection);
        BT_select_Btn->setObjectName(QString::fromUtf8("BT_select_Btn"));
        BT_select_Btn->setGeometry(QRect(40, 220, 75, 23));
        WinClose_Btn = new QPushButton(BT_Selection);
        WinClose_Btn->setObjectName(QString::fromUtf8("WinClose_Btn"));
        WinClose_Btn->setGeometry(QRect(140, 220, 75, 23));
        showListItm = new QListWidget(BT_Selection);
        showListItm->setObjectName(QString::fromUtf8("showListItm"));
        showListItm->setGeometry(QRect(30, 70, 341, 121));
        verticalLayoutWidget = new QWidget(BT_Selection);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 280, 401, 21));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        com_Say = new QLabel(verticalLayoutWidget);
        com_Say->setObjectName(QString::fromUtf8("com_Say"));

        verticalLayout->addWidget(com_Say);


        retranslateUi(BT_Selection);

        QMetaObject::connectSlotsByName(BT_Selection);
    } // setupUi

    void retranslateUi(QWidget *BT_Selection)
    {
        BT_Selection->setWindowTitle(QCoreApplication::translate("BT_Selection", "Communication Selection", nullptr));
        Bluetooth_Sl->setText(QCoreApplication::translate("BT_Selection", "Bluetooth Devices", nullptr));
        zigBee_Sl->setText(QCoreApplication::translate("BT_Selection", "ZigBee", nullptr));
        BT_select_Btn->setText(QCoreApplication::translate("BT_Selection", "Select", nullptr));
        WinClose_Btn->setText(QCoreApplication::translate("BT_Selection", "Close", nullptr));
        com_Say->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BT_Selection: public Ui_BT_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BT_SELECTION_H
