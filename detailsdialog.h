#ifndef DETAILSDIALOG_H
#define DETAILSDIALOG_H

#include <QDialog>
#include "seatsdialog.h"

namespace Ui {
class DetailsDialog;
}

class DetailsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DetailsDialog(QWidget *parent = nullptr);
    ~DetailsDialog();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();



private:
    Ui::DetailsDialog *ui;
    SeatsDialog* sDialog;
    string seatName;
};

#endif // DETAILSDIALOG_H
