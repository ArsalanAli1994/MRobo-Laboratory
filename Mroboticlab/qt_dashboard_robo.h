#pragma once

#include <QtWidgets/QWidget>
#include "ui_qt_dashboard_robo.h"
#include <QPalette>
#include <QStatusBar>
#include <QKeyEvent>
#include <QEvent>

class QSerialPort;

class Qt_Dashboard_Robo : public QWidget
{
    Q_OBJECT

public:
    Qt_Dashboard_Robo(QWidget *parent = Q_NULLPTR);
    ~Qt_Dashboard_Robo();
    
    
private:
    Ui::Qt_Dashboard_RoboClass ui;
    QStatusBar* Statusbar;
    QPalette paint;
    QString HC_05_port_name;
    QSerialPort* HC_05;
    QByteArray serialData;
    bool HC_05_is_available;
    void All_Start_up();

protected:
    void keyReleaseEvent(QKeyEvent* event) override;
    void keyPressEvent(QKeyEvent* event) override;
    void move_forward();
    void move_backward();
    void move_right();
    void move_left();
    void move_stop();
    void move_pvt_right();
    void move_pvt_left();
    void speed_dec();
    void speed_inc();
    void com_break();

private slots:
    void on_Connect_btn_clicked();
    void readSerialString();
    void robo_ori(QString*);
    void robo_RPM(int*);
};
