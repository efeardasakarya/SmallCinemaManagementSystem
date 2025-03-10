#ifndef EXTRASDIALOG_H
#define EXTRASDIALOG_H

#include <QDialog>
#include "seatsdialog.h"


namespace Ui {
class ExtrasDialog;
}

class ExtrasDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExtrasDialog(QWidget *parent = nullptr);
    ~ExtrasDialog();

private slots:


    void on_pushButton_clicked();



    void on_pushButton_2_clicked();

private:
    Ui::ExtrasDialog *ui;
   SeatsDialog* sDialog;
    void OnBuyButtonClicked();

    int smallCornAmount=0;
    int mediumCornAmount=0;
    int largeCornAmount=0;

    int smallColaAmount=0;
    int mediumColaAmount=0;
    int largeColaAmount=0;

    int AlaskaFrigoAmount=0;
};

#endif // EXTRASDIALOG_H
