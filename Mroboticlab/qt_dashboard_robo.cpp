#include "qt_dashboard_robo.h"
#include <QSerialPort>
#include <QSerialPortInfo>
//#include <QDebug>
Qt_Dashboard_Robo::Qt_Dashboard_Robo(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    QWidget::setFixedSize(size());
    QStatusBar *StatusBar = new QStatusBar(this);
    ui.StatusBarLayout->addWidget(StatusBar);
    HC_05_is_available = false;
    HC_05 = new QSerialPort();
    serialData.clear();
    All_Start_up();

    StatusBar->addPermanentWidget(ui.Info, 3);
    StatusBar->addPermanentWidget(ui.Say_Com_Status, 2);
    StatusBar->addPermanentWidget(ui.Batt_info, 1);
    StatusBar->setStyleSheet("background-color: rgb(145, 92, 17);");

    ui.COM_Ports_Sel->addItem("Available Ports");
    foreach(const QSerialPortInfo & serialportinfo, QSerialPortInfo::availablePorts()) {
        ui.COM_Ports_Sel->addItem(serialportinfo.portName());
    }
    
}
Qt_Dashboard_Robo::~Qt_Dashboard_Robo() {
    if (HC_05->isOpen()) {
        HC_05->close();
    }
    HC_05_is_available = false;
}

void Qt_Dashboard_Robo::on_Connect_btn_clicked() {
    HC_05_port_name = ui.COM_Ports_Sel->currentText();
    if (HC_05_port_name == "Available Ports") {
        //qDebug() << "Please Select the port";
    }
    else {
        HC_05->setPortName(HC_05_port_name);
        HC_05->open(QSerialPort::ReadWrite);
        HC_05->setBaudRate(QSerialPort::Baud115200);
        HC_05->setDataBits(QSerialPort::Data8);
        HC_05->setParity(QSerialPort::EvenParity);
        HC_05->setStopBits(QSerialPort::OneStop);
        HC_05->setFlowControl(QSerialPort::NoFlowControl);
        //qDebug() << "Port Connected";
        HC_05_is_available = true;
        ui.COM_Ports_Sel->setDisabled(true);
        ui.Connect_btn->setDisabled(true);
        //ROBO STATUS BAR
        ui.Robo_Status->setText("Online");
        ui.Robo_Status->setStyleSheet("color: rgb(0, 255, 0);");
        ui.Robo_Status_Ind->setStyleSheet("background-color: rgb(0, 255, 0);");
    }
    QObject::connect(HC_05, SIGNAL(readyRead()), this, SLOT(readSerialString()));
}

void Qt_Dashboard_Robo::com_break()
{
    HC_05->close();
    HC_05_is_available = true;
    ui.Connect_btn->setEnabled(true);
    ui.COM_Ports_Sel->setEnabled(true);
    //ROBO STATUS BAR
    ui.Robo_Status->setText("Offline");
    ui.Robo_Status->setStyleSheet("color: red");
    ui.Robo_Status_Ind->setStyleSheet("background-color: red");
    ui.RPM_Guage->setValue(0);
    ui.Robo_RPM_lcd->display(0);
    //Robo Orient Bar
    ui.Robo_Orient->setText("No DATA");

    paint = ui.Robo_RPM_lcd->palette();
    paint.setColor(paint.WindowText, QColor(85, 85, 255));
    ui.Robo_RPM_lcd->setPalette(paint);
}

void Qt_Dashboard_Robo::All_Start_up()
{
    //Speedo Meter Bar
    ui.RPM_Guage->setValue(0);
    ui.Robo_RPM_lcd->display(0);
    //Robo Orient Bar
    ui.Robo_Orient->setText("No DATA");
    //Status Bar
    ui.Info->setText("Press ESC to ABORT the communication!");
    ui.Say_Com_Status->setText("Warning! Battery Signal Dead!");
    ui.Batt_info->setDisabled(true);
    //ROBO STATUS BAR
    ui.Robo_Status->setText("Offline");
    ui.Robo_Status->setStyleSheet("color: red;");
    ui.Robo_Status_Ind->setStyleSheet("background-color: red;");


    paint = ui.Robo_RPM_lcd->palette();
    paint.setColor(paint.WindowText, QColor(85, 85, 255));
    ui.Robo_RPM_lcd->setPalette(paint);

}

//Reading Buffer
void Qt_Dashboard_Robo::readSerialString() {
    //serialData.append()
    if (HC_05_is_available) {
        serialData.append(HC_05->readAll());
        //serialBuffer+= QString::fromStdString(serialData.toStdString());
        if (!serialData.contains("\r\n")) {
            //qDebug() << serialBuffer << endl;
            //serialBuffer = "";
            return;
        }
        int end = serialData.lastIndexOf("\r\n") + 2;
        QStringList cmds = QString(serialData.mid(0, end)).split("\r\n", QString::SkipEmptyParts);
        //serialData.clear();
        serialData = serialData.mid(end);
        //qDebug() <<"$" << cmds;

        foreach(QString cmd, cmds) {
            QStringList str = cmd.split(",");
            //Data ensure filter
            if (str.length() == 2) {
                //qDebug() << str[0] << "," << str[1];
                int str1_Cov = str[1].toInt();
                robo_ori(&str[0]);
                robo_RPM(&str1_Cov);
            }
        }

        serialData.clear();
    }
}

void Qt_Dashboard_Robo::move_forward() {
    //qDebug() << "Forward";
    if (HC_05->isWritable()) {
        HC_05->write("F");
    }
    /*
    else {
        qDebug() << "Couldn't write to serial!";
    }*/
}
void Qt_Dashboard_Robo::move_backward()
{
    //qDebug() << "Backward";
    if (HC_05->isWritable()) {
        HC_05->write("B");
    }/*
    else {
        qDebug() << "Couldn't write to serial!";
    }*/
}
void Qt_Dashboard_Robo::move_right()
{
    //qDebug() << "Right";
    if (HC_05->isWritable()) {
        HC_05->write("R");
    }/*
    else {
        qDebug() << "Couldn't write to serial!";
    }*/
}
void Qt_Dashboard_Robo::move_left()
{
    //qDebug() << "Left";
    if (HC_05->isWritable()) {
        HC_05->write("L");
    }/*
    else {
        qDebug() << "Couldn't write to serial!";
    }*/
}
void Qt_Dashboard_Robo::move_stop() {
    if (HC_05->isWritable()) {
        HC_05->write("S");
    }/*
    else {
        qDebug() << "Couldn't write to serial!";
    }*/
}
void Qt_Dashboard_Robo::move_pvt_right()
{
    if (HC_05->isWritable()) {
        HC_05->write("X");
    }/*
    else {
        qDebug() << "Couldn't write to serial!";
    }*/
}
void Qt_Dashboard_Robo::move_pvt_left()
{
    if (HC_05->isWritable()) {
        HC_05->write("Z");
    }/*
    else {
        qDebug() << "Couldn't write to serial!";
    }*/
}
void Qt_Dashboard_Robo::speed_dec()
{
    if (HC_05->isWritable()) {
        HC_05->write("D");
    }/*
    else {
        qDebug() << "Couldn't write to serial!";
    }*/
}
void Qt_Dashboard_Robo::speed_inc()
{
    if (HC_05->isWritable()) {
        HC_05->write("I");
    }/*
    else {
        qDebug() << "Couldn't write to serial!";
    }*/
}

void Qt_Dashboard_Robo::robo_ori(QString* temp)
{
    ui.Robo_Orient->setText(*temp);
}
void Qt_Dashboard_Robo::robo_RPM(int *temp)
{
    int read = *temp;
    if (read >= 80) {
        paint = ui.Robo_RPM_lcd->palette();
        paint.setColor(paint.WindowText, QColor(255, 0, 0));
        ui.Robo_RPM_lcd->setPalette(paint);
    }else if(read >=50 && read<80){
        paint = ui.Robo_RPM_lcd->palette();
        paint.setColor(paint.WindowText, QColor(0, 221, 0));
        ui.Robo_RPM_lcd->setPalette(paint);
    }
    else {
        paint = ui.Robo_RPM_lcd->palette();
        paint.setColor(paint.WindowText, QColor(255, 255, 0));
        ui.Robo_RPM_lcd->setPalette(paint);
    }
    ui.RPM_Guage->setValue(*temp);
    ui.Robo_RPM_lcd->display(*temp);
}
void Qt_Dashboard_Robo::keyReleaseEvent(QKeyEvent* event)
{
    if (!event->isAutoRepeat()) {
        //qDebug() << "Stopped";
        move_stop();
        //qDebug() << event->isAutoRepeat();
    }
}
void Qt_Dashboard_Robo::keyPressEvent(QKeyEvent* event)
{
    int32_t keycode = event->key();
    switch (keycode)
    {
    case 16777235:
        move_forward();
        break;
    case 16777237:
        move_backward();
        break;
    case 16777236:
        move_right();
        break;
    case 16777234:
        move_left();
        break;

    case 16777238:
        move_pvt_right();
        break;
    case 16777239:
        move_pvt_left();
        break;
    case 45:
        speed_dec();
        break;
    case 43:
        speed_inc();
        break;
    case 16777216:
        com_break();
        break;
    }
}