#include "detailsdialog.h"
#include "ui_detailsdialog.h"
#include "seatsdialog.h"
#include "cinema.h"
using namespace std;

DetailsDialog::DetailsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DetailsDialog)
{
    ui->setupUi(this);

    SeatsDialog* parentDialog = dynamic_cast<SeatsDialog*>(parent);
    sDialog = parentDialog;
    seatName = parentDialog->getChoosenSeat();
    ui->SeatName->setText(QString::fromStdString(seatName));

}

DetailsDialog::~DetailsDialog()
{
    delete ui;
}

void DetailsDialog::on_okButton_clicked()
{
    QString name = ui->nameInput->text();

    // ok butonuna basıldığında isim yazıyorsa işlemi yap. Yazmıyorsa yapma
    if(!name.isEmpty())
    {
        Cinema* cinema = Cinema::getInstance();
        Seat* seat = cinema->findSeat(seatName);
        seat->PurchaseSeat(name.toStdString());
        seat->getIsDisabled();

        accept();
    }
    else
    {
        reject();
    }
}

// cancel butonuna basıldığında işlemi yapma
void DetailsDialog::on_cancelButton_clicked()
{
    reject();
}



