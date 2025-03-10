#include "seatsdialog.h"
#include "ui_seatsdialog.h"
#include "cinema.h"
#include "detailsdialog.h"
#include "billpaymountdialog.h"
using namespace std;



SeatsDialog::SeatsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SeatsDialog)

{
    ui->setupUi(this);

    Cinema* cinema = Cinema::getInstance();

    for(int i=0; i<5 ; i++ )
    {
        for (int j=0 ; j<7 ; j++ )
        {
            QLayoutItem* item = ui->SeatGrid->itemAtPosition(i,j);
            QPushButton* button = qobject_cast<QPushButton*>(item->widget());

            connect(button, &QPushButton::clicked, this, &SeatsDialog::onSeatButtonClicked);

            QString seatName = QString::fromStdString(cinema->findSeatNamebyIndex((i * 7) + j));
            Seat* seat = cinema->findSeat(seatName.toStdString());
            button->setText(seatName);

            if(seat->getIsDisabled())
            {
                if(seat->getIsSeatPurchased())
                {
                button->setStyleSheet(
                    "QPushButton {background-color:red; color:black; font-weight:bold;"
                    "border-radius: 10px; font-size: 18px;}"

                    "QPushButton:hover {background-color:darkred; color:black; font-weight:bold;"
                    "border-radius: 10px; font-size: 18px;}"


                    );
                }
                else
                {
                    button->setStyleSheet(
                        "QPushButton {background-color:blue; color:black; font-weight:bold;"
                        "border-radius: 10px; font-size: 18px;}"

                        "QPushButton:hover {background-color:darkblue; color:black; font-weight:bold;"
                        "border-radius: 10px; font-size: 18px;}"


                        );
                }
            }
            else
            {
                if(seat->getIsSeatPurchased())
                {
                    button->setStyleSheet(
                        "QPushButton {background-color:red; color:black; font-weight:bold;"
                        "border-radius: 10px; font-size: 18px;}"

                        "QPushButton:hover {background-color:darkred; color:black; font-weight:bold;"
                        "border-radius: 10px; font-size: 18px;}"


                        );
                }
                else
                {
                    button->setStyleSheet(
                        "QPushButton {background-color:grey; color:black; font-weight:bold;"
                        "border-radius: 10px; font-size: 18px;}"

                        "QPushButton:hover {background-color:darkgrey; color:black; font-weight:bold;"
                        "border-radius: 10px; font-size: 18px;}"


                        );
                }
            }







        }
    }




}



void ColorSeats(QPushButton* clickedbutton , string choosenseat)
{
    Cinema* cinema = Cinema::getInstance();
    Seat* seat = cinema->findSeat(choosenseat);


    if(seat->getIsDisabled())
    {
        if(seat->getIsSeatPurchased())
        {
            clickedbutton->setStyleSheet(
                "QPushButton {background-color:red; color:black; font-weight:bold;"
                "border-radius: 10px; font-size: 18px;}"

                "QPushButton:hover {background-color:darkred; color:black; font-weight:bold;"
                "border-radius: 10px; font-size: 18px;}"


                );
        }
        else
        {
            clickedbutton->setStyleSheet(
                "QPushButton {background-color:blue; color:black; font-weight:bold;"
                "border-radius: 10px; font-size: 18px;}"

                "QPushButton:hover {background-color:darkblue; color:black; font-weight:bold;"
                "border-radius: 10px; font-size: 18px;}"


                );
        }
    }
    else
    {
        if(seat->getIsSeatPurchased())
        {
            clickedbutton->setStyleSheet(
                "QPushButton {background-color:red; color:black; font-weight:bold;"
                "border-radius: 10px; font-size: 18px;}"

                "QPushButton:hover {background-color:darkred; color:black; font-weight:bold;"
                "border-radius: 10px; font-size: 18px;}"


                );
        }
        else
        {
            clickedbutton->setStyleSheet(
                "QPushButton {background-color:grey; color:black; font-weight:bold;"
                "border-radius: 10px; font-size: 18px;}"

                "QPushButton:hover {background-color:darkgrey; color:black; font-weight:bold;"
                "border-radius: 10px; font-size: 18px;}"


                );
        }
    }


}


SeatsDialog::~SeatsDialog()
{
    delete ui;
}









QString SeatsDialog::getCustomerName() const
{
    return customerName;
}

void SeatsDialog::setCustomerName(const QString &newCustomerName)
{
    customerName = newCustomerName;
}





string SeatsDialog::getChoosenSeat() const
{
    return choosenSeat;
}

void SeatsDialog::setChoosenSeat(string newChoosenSeat)
{
    choosenSeat = newChoosenSeat;
}



void SeatsDialog::onSeatButtonClicked() {
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());

    if (clickedButton) {
        this->setChoosenSeat(clickedButton->text().toStdString());
        Cinema* cinema = Cinema::getInstance();
        Seat* seat = cinema->findSeat(clickedButton->text().toStdString());

        if(!seat->getIsSeatPurchased())
        {
            // Müşteri girişi ekranını açar
            DetailsDialog* detailDialog =  new DetailsDialog(this);
            auto ret = detailDialog->exec();

            if(ret==QDialog::Accepted)
            {
                qDebug() << "İşlem tamam";
                ColorSeats(clickedButton , clickedButton->text().toStdString() );

            }
            else
            {
                qDebug() << "İptal edildi";
            }
            detailDialog->deleteLater();
        }
        else
        {
            // müşteri çıkış ekranını açar
            BillPaymountDialog* paymountdialog =  new BillPaymountDialog(this);
            auto ret = paymountdialog->exec();

            if(ret==QDialog::Accepted)
            {
                qDebug() << "İşlem tamam";
                ColorSeats(clickedButton , clickedButton->text().toStdString() );

            }
            else
            {
                qDebug() << "İptal edildi";
            }
            paymountdialog->deleteLater();



        }
    }
}





