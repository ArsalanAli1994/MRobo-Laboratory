/********************************************************************************
** Form generated from reading UI file 'hc05_control_robo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HC05_CONTROL_ROBO_H
#define UI_HC05_CONTROL_ROBO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HC05_control_Robo
{
public:

    void setupUi(QWidget *HC05_control_Robo)
    {
        if (HC05_control_Robo->objectName().isEmpty())
            HC05_control_Robo->setObjectName(QString::fromUtf8("HC05_control_Robo"));
        HC05_control_Robo->resize(400, 300);

        retranslateUi(HC05_control_Robo);

        QMetaObject::connectSlotsByName(HC05_control_Robo);
    } // setupUi

    void retranslateUi(QWidget *HC05_control_Robo)
    {
        HC05_control_Robo->setWindowTitle(QCoreApplication::translate("HC05_control_Robo", "HC05_control_Robo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HC05_control_Robo: public Ui_HC05_control_Robo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HC05_CONTROL_ROBO_H
