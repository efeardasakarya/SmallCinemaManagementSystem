#ifndef BILLPAYMOUNTDIALOG_H
#define BILLPAYMOUNTDIALOG_H

#include <QDialog>
#include "seatsdialog.h"

namespace Ui {
class BillPaymountDialog;
}

class BillPaymountDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BillPaymountDialog(QWidget *parent = nullptr);
    ~BillPaymountDialog();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::BillPaymountDialog *ui;
    SeatsDialog* sDialog;
    QString customerName;
};

#endif // BILLPAYMOUNTDIALOG_H
