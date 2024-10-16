#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mroboticlab.h"
#include "bt_selection.h"
#include <QTimer>
class Mroboticlab : public QMainWindow
{
    Q_OBJECT

public:
    Mroboticlab(QWidget *parent = Q_NULLPTR);
    ~Mroboticlab();

private:
    Ui::MroboticlabClass ui;
    BT_Selection bt_select;
    QTimer* timer;
    
private slots:
    void disp_time();
    void on_actionStop_Watch_triggered();
    void on_actionABOUT_US_triggered();
    void on_BLC_clicked();
    void on_HFR_clicked();
    void on_LFR_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
   
};
