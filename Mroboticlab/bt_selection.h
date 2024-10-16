#pragma once

#include <QWidget>
#include "ui_bt_selection.h"
#include "qt_dashboard_robo.h"
#include <QStatusBar>
#include <QListWidgetItem>

class BT_Selection : public QWidget
{
	Q_OBJECT

public:
	BT_Selection(QWidget *parent = Q_NULLPTR);
	~BT_Selection();
	
private:
	Ui::BT_Selection ui;
	Qt_Dashboard_Robo HC05_con;
	QStatusBar* bar;
	void bt_msg();
	void zb_msg();
	
	QListWidgetItem* item1;
	QListWidgetItem* item2;
	QListWidgetItem* item3;
	QListWidgetItem* item4;
private slots:
	void on_BT_select_Btn_clicked();
	void on_WinClose_Btn_clicked();
	void on_Bluetooth_Sl_clicked();
	void on_zigBee_Sl_clicked();
};
