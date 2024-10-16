#include "bt_selection.h"
#include <QMessageBox>
//#include <QDebug>

BT_Selection::BT_Selection(QWidget *parent)
	: QWidget(parent)
{

	ui.setupUi(this);
	QString *curItem = new QString();
	
	QWidget::setFixedSize(size());
	//underconstruction portion
	QStatusBar* bar = new QStatusBar(nullptr);
	bar->addPermanentWidget(ui.com_Say);
	ui.verticalLayout->addWidget(bar);
	
	//bt_msg();
	
	//bar->showMessage("hello");
	//bar->showMessage("Hello, I am Alive",5000);
	//connect(ui.Bluetooth_Sl,SIGNAL(clicked()),ui.verticalLayout,SLOT(bt_msg(bar)));
}

BT_Selection::~BT_Selection()
{
}
void BT_Selection::on_Bluetooth_Sl_clicked()
{
	ui.showListItm->clear();
	//delete item4;
	QListWidgetItem* item1 = new QListWidgetItem();
	QListWidgetItem* item2 = new QListWidgetItem();
	QListWidgetItem* item3 = new QListWidgetItem();
	item1->setText("HC-05");
	item2->setText("HC-06");
	item3->setText("HC-08 eXtended");

	ui.showListItm->insertItem(1, item1);
	ui.showListItm->insertItem(2, item2);
	ui.showListItm->insertItem(3, item3);
}
void BT_Selection::on_zigBee_Sl_clicked()
{
	ui.showListItm->clear();
	//delete item1;
	//delete item2;
	//delete item3;
	QListWidgetItem* item4 = new QListWidgetItem();
	item4->setText("XBee Series II");
	ui.showListItm->insertItem(1, item4);
}
void BT_Selection::on_BT_select_Btn_clicked() {
	bool bt=ui.Bluetooth_Sl->isChecked();
	bool zee = ui.zigBee_Sl->isChecked();
	//bool check = ui.showListItm->isItemSelected(item2);
	//qDebug() << check;
	QString curItem="";
	if (bt || zee) {
		curItem = ui.showListItm->currentItem()->text();
	}
	else{
		curItem = "none";
	}
	
	if (curItem == "HC-05") { hide(); HC05_con.show(); ui.com_Say->setText(" "); }
	else if (curItem == "none") { ui.com_Say->setText("Please! select communication"); }
	else {QMessageBox::information(this,"Alert","Not Functioned Yet!"); ui.com_Say->setText(" ");}
}
void BT_Selection::on_WinClose_Btn_clicked() {
	close();
}

//underconstruction
void BT_Selection::bt_msg() {
	bar->showMessage("hello", 5000);
}
void BT_Selection::zb_msg() {
	bar->showMessage("Hello, I am Alive", 5000);
}