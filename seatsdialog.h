#ifndef SEATSDIALOG_H
#define SEATSDIALOG_H
#include <QDialog>

using namespace std;

namespace Ui {
class SeatsDialog;
}

class SeatsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SeatsDialog(QWidget *parent = nullptr);
    ~SeatsDialog();

    string getChoosenSeat() const;
    void setChoosenSeat(string newChoosenSeat);

    QString getCustomerName() const;
    void setCustomerName(const QString &newCustomerName);


private slots:

    void onSeatButtonClicked();




private:
    Ui::SeatsDialog *ui;
    string choosenSeat;
    QString customerName;

};

#endif // SEATSDIALOG_H
