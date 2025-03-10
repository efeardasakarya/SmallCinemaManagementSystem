#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "seatsdialog.h"
#include "extrasdialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CheckInButton_released()
{
    SeatsDialog* seatDialog =  new SeatsDialog(this);
    auto ret = seatDialog->exec();

    if(ret==QDialog::Accepted)
    {
        qDebug() << "İşlem tamam";

    }
    else
    {
        qDebug() << "İptal edildi";
    }
    seatDialog->deleteLater();
}









void MainWindow::on_ExtrasButton_released()
{
    ExtrasDialog* extraDialog = new ExtrasDialog (this);
    auto ret = extraDialog->exec();

    if(ret==QDialog::Accepted)
    {
        qDebug() << "İşlem tamam";

    }
    else
    {
        qDebug() << "İptal edildi";
    }
    extraDialog->deleteLater();
}

