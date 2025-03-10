#include "billpaymountdialog.h"
#include "ui_billpaymountdialog.h"
#include "cinema.h"
#include <QString>


BillPaymountDialog::BillPaymountDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BillPaymountDialog)
{
    ui->setupUi(this);

    SeatsDialog* parentDialog = dynamic_cast<SeatsDialog*>(parent);
    sDialog = parentDialog;

    Cinema* cinema = Cinema::getInstance();

    Seat* seat = cinema->findSeat(parentDialog ->getChoosenSeat());


    ui->CustomerNameOutput->setText(QString::fromStdString(seat->getCustomerName()));
    ui->BillAmount->setText(QString::fromStdString(std::to_string(seat->getTotalAmount())));




}

BillPaymountDialog::~BillPaymountDialog()
{
    delete ui;
}

void BillPaymountDialog::on_buttonBox_accepted()
{
    QString customerName = ui->CustomerNameOutput->text();

    Cinema* cinema = Cinema::getInstance();
    Seat* seat = cinema->findSeatbyCustomerName(customerName.toStdString());
    seat->CancelPurchase();

    accept();
}


void BillPaymountDialog::on_buttonBox_rejected()
{
    reject();
}

