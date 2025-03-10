#include "extrasdialog.h"
#include "ui_extrasdialog.h"
#include "seatsdialog.h"
#include <string>
#include "cinema.h"



ExtrasDialog::ExtrasDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExtrasDialog)

{
    ui->setupUi(this);
    SeatsDialog* parentDialog = dynamic_cast<SeatsDialog*>(parent);
    sDialog = parentDialog;
    QLabel* label;
    Cinema* cinema = Cinema::getInstance();


        for (int i=0 ; i<7 ; i++)
    {
        QLayoutItem* item = ui->ButtonsLayout->itemAt(i);
        QPushButton* button = qobject_cast<QPushButton*>(item->widget());
        connect(button, &QPushButton::clicked, this, &ExtrasDialog::OnBuyButtonClicked );

    }

        for (int k = 0; k < 35; k++) {
            QString seatName = QString::fromStdString(cinema->findSeatNamebyIndex(k));
            ui->comboBox->addItem(seatName);
        }
}

void ExtrasDialog::OnBuyButtonClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());


    if(!clickedButton)
    {
        return;
    }
        string choice = clickedButton->objectName().toStdString();

    if(choice == "SmallPopCorn")
    {
        if(smallCornAmount == 0 )
        {
            ++smallCornAmount;
            QLabel *label = new QLabel(this);
            label->setObjectName("SmallPopCornLabel");
            label->setText( "Küçük Mısır   x" + QString::number(smallCornAmount) );
            ui->BillLayout->addWidget(label);
        }
        else
        {

            smallCornAmount++;
            QLabel *editlabel = this->findChild<QLabel *>("SmallPopCornLabel");
            if (editlabel)
            {
                editlabel->setText("Küçük Mısır   x" + QString::number(smallCornAmount));
            }
            else
            {
                qDebug() << "SmallPopCornLabel not found!";
            }

        }

    }

    else if(choice == "MediumPopCorn")
    {
        if( mediumCornAmount == 0 )
        {
            ++mediumCornAmount;
            QLabel *label = new QLabel(this);
            label->setObjectName("MediumPopCornLabel");
            label->setText( "Orta Mısır   x" + QString::number(mediumCornAmount) );
            ui->BillLayout->addWidget(label);
        }
        else
        {

            mediumCornAmount++;
            QLabel *editlabel = this->findChild<QLabel *>("MediumPopCornLabel");
            if (editlabel)
            {
                editlabel->setText("Orta Mısır   x" + QString::number(mediumCornAmount));
            }
            else
            {
                qDebug() << "MediumPopCornLabel not found!";
            }

        }
    }

    else if(choice == "LargePopCorn")
    {
        if(largeCornAmount == 0 )
        {
            ++largeCornAmount;
            QLabel *label = new QLabel(this);
            label->setObjectName("LargeCornLabel");
            label->setText( "Büyük Mısır   x" + QString::number(largeCornAmount) );
            ui->BillLayout->addWidget(label);
        }
        else
        {

            largeCornAmount++;
            QLabel *editlabel = this->findChild<QLabel *>("LargeCornLabel");
            if (editlabel)
            {
                editlabel->setText("Büyük Mısır   x" + QString::number(largeCornAmount));
            }
            else
            {
                qDebug() << "LargeColaLabel not found!";
            }

        }

    }

    else if(choice == "SmallCola")
    {
        if(smallColaAmount == 0 )
        {
            ++smallColaAmount;
            QLabel *label = new QLabel(this);
            label->setObjectName("SmallColaLabel");
            label->setText( "Küçük kola   x" + QString::number(smallColaAmount) );
            ui->BillLayout->addWidget(label);
        }
        else
        {

            smallColaAmount++;
            QLabel *editlabel = this->findChild<QLabel *>("SmallColaLabel");
            if (editlabel)
            {
                editlabel->setText("Küçük Kola   x" + QString::number(smallColaAmount));
            }
            else
            {
                qDebug() << "SmallColaLabel not found!";
            }

        }
    }

    else if(choice == "MediumCola")
    {
        if( mediumColaAmount == 0 )
        {
            ++mediumColaAmount;
            QLabel *label = new QLabel(this);
            label->setObjectName("MediumColaLabel");
            label->setText( "Orta Kola   x" + QString::number(mediumColaAmount) );
            ui->BillLayout->addWidget(label);
        }
        else
        {

            mediumColaAmount++;
            QLabel *editlabel = this->findChild<QLabel *>("MediumColaLabel");
            if (editlabel)
            {
                editlabel->setText("Orta Kola   x" + QString::number(mediumColaAmount));
            }
            else
            {
                qDebug() << "MediumColaLabel not found!";
            }

        }
    }

    else if(choice == "LargeCola")
    {
        if( largeColaAmount == 0 )
        {
            ++largeColaAmount;
            QLabel *label = new QLabel(this);
            label->setObjectName("LargeColaLabel");
            label->setText( "Büyük Kola   x" + QString::number(largeColaAmount) );
            ui->BillLayout->addWidget(label);
        }
        else
        {

            largeColaAmount++;
            QLabel *editlabel = this->findChild<QLabel *>("LargeColaLabel");
            if (editlabel)
            {
                editlabel->setText("Büyük Kola   x" + QString::number(largeColaAmount));
            }
            else
            {
                qDebug() << "LargeColaLabel not found!";
            }

        }
    }

    else //Frigola seçmiş demektir
    {
        if( AlaskaFrigoAmount == 0 )
        {
            ++AlaskaFrigoAmount;
            QLabel *label = new QLabel(this);
            label->setObjectName("AlaskaFrigoLabel");
            label->setText( "Alaska Frigo   x" + QString::number(AlaskaFrigoAmount) );
            ui->BillLayout->addWidget(label);
        }
        else
        {

            AlaskaFrigoAmount++;
            QLabel *editlabel = this->findChild<QLabel *>("AlaskaFrigoLabel");
            if (editlabel)
            {
                editlabel->setText("AlaskaFrigo   x" + QString::number(AlaskaFrigoAmount));
            }
            else
            {
                qDebug() << "AlaskaFrigo not found!";
            }

        }
    }

    int totalBill = (smallCornAmount*20)+(mediumCornAmount*35)+(largeCornAmount*50)+(smallColaAmount*15)+(mediumColaAmount*25)+(largeColaAmount*35)+(AlaskaFrigoAmount*20);
    ui->BillOutput->setText(QString::number(totalBill));
}

ExtrasDialog::~ExtrasDialog()
{
    delete ui;
}




void ExtrasDialog::on_pushButton_clicked()
{
    Cinema* cinema = Cinema::getInstance();
    Seat* seat = cinema->findSeat(    ui->comboBox->currentText().toStdString()     );
    if(seat->getIsSeatPurchased())
    {
    seat->AddExtras( ui->BillOutput->text().toInt()  );
    }

}





void ExtrasDialog::on_pushButton_2_clicked()
{
    Cinema* cinema = Cinema::getInstance();
    Seat* seat = cinema->findSeat(    ui->comboBox->currentText().toStdString()     );

    if(seat->getIsSeatPurchased())
    {
        if(seat->getIsDisabled())
        {
            seat->setTotalAmount(25);
            seat->SetExtras(0);
        }
        else
        {
            seat->setTotalAmount(50);
            seat->SetExtras(0);
        }
    }
}

