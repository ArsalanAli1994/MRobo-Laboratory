#include "mroboticlab.h"
#include <QMessageBox>
#include <QDebug>
#include <QGraphicsOpacityEffect>
#include <Qdatetime>


Mroboticlab::Mroboticlab(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    QWidget::setFixedSize(size());
    //disp_time();
    //QGraphicsOpacityEffect* effect = new QGraphicsOpacityEffect;
    //effect->setOpacity();
    //QString datetime = QDateTime::currentDateTime().toString();
    timer = new QTimer(this);
    
    //qDebug() << date_;
    //qDebug() << nm;

    ui.display_date->setText(QDate::currentDate().toString());
    ui.statusBar->addPermanentWidget(ui.message, 1);
    ui.statusBar->addPermanentWidget(ui.Version_disp, 2);
    ui.statusBar->addPermanentWidget(ui.display_timedate,1);

    QDate Date = QDate::currentDate();
    QString date_ = Date.toString("dd.MM.yyyy");

    QStringList dyMnYr = date_.split(".");
    int dayexp = 1,daycur;
    int Mnexp = 8,Mncur;
    int Yrexp = 2022, Yrcur;

    daycur = dyMnYr[0].toInt();
    Mncur = dyMnYr[1].toInt();
    Yrcur = dyMnYr[2].toInt();

    //qDebug() << daycur;
    //qDebug() << Mncur;
    //qDebug() << Yrcur;
    /*
    QTime Time = QTime::currentTime();
    QString time_ = Time.toString("h:m:s");
    //qDebug() << time_;
    QStringList hrMs = time_.split(":");
    int hrexp=19,hrcur;
    int Mexp = 34, Mcur;
    int sexp = 60, scur;
    hrcur = hrMs[0].toInt();
    Mcur = hrMs[1].toInt();
    scur = hrMs[2].toInt();
    */


    //*----Online Alogrithm for Software Logic for yearly licensing--------*//
    if (Yrcur > Yrexp)
        Mnexp = 0;

    if ((Yrcur>=Yrexp)&&(Mncur>=Mnexp)) {  
            ui.BLC->setDisabled(true);
            ui.HFR->setDisabled(true);
            ui.LFR->setDisabled(true);
            ui.Version_disp->setText("Trail has expired! Please contact administrator");
    }
    //----------------------------------------------------------------------//

    
    ui.pushButton_4->setDisabled(true);
    ui.pushButton_5->setDisabled(true);
    ui.pushButton_6->setDisabled(true);
    connect(timer, SIGNAL(timeout()), this, SLOT(disp_time()));
    timer->start(1000);
}
Mroboticlab::~Mroboticlab() {

}
void Mroboticlab::disp_time()
{
    //qDebug() << "updating";
    QTime time = QTime::currentTime();
    QString time_text = time.toString("h : m : s ap");
    ui.display_time->setText(time_text);
    
}
void Mroboticlab::on_actionABOUT_US_triggered()
{
    QMessageBox::information(this, "Alert", "+923470050466");
}
void Mroboticlab::on_BLC_clicked()
{
    bt_select.show();
    this->showMinimized();
    //QMessageBox::information(this,"Alert","Under Construction");
}
void Mroboticlab::on_HFR_clicked()
{
    QMessageBox::warning(this, "Alert!", "Not Function");
}
void Mroboticlab::on_LFR_clicked()
{
    QMessageBox::warning(this, "Alert!", "Not Function");
}
void Mroboticlab::on_pushButton_4_clicked()
{
    QMessageBox::warning(this, "Cautions", "Not Functioned yet");
}
void Mroboticlab::on_pushButton_5_clicked()
{
    QMessageBox::warning(this, "Cautions", "Not Functioned yet");
}
void Mroboticlab::on_pushButton_6_clicked()
{
    QMessageBox::warning(this, "Cautions", "Not Functioned yet");
}
void Mroboticlab::on_actionStop_Watch_triggered() {
    QMessageBox::warning(this,"Alert","Not Functioned Yet");
}