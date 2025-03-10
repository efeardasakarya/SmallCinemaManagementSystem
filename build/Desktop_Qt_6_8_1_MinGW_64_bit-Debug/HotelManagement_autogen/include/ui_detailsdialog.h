/********************************************************************************
** Form generated from reading UI file 'detailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSDIALOG_H
#define UI_DETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DetailsDialog
{
public:
    QLabel *customerLabel;
    QLabel *seatLabel;
    QLabel *SeatName;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLineEdit *nameInput;

    void setupUi(QDialog *DetailsDialog)
    {
        if (DetailsDialog->objectName().isEmpty())
            DetailsDialog->setObjectName("DetailsDialog");
        DetailsDialog->resize(595, 270);
        customerLabel = new QLabel(DetailsDialog);
        customerLabel->setObjectName("customerLabel");
        customerLabel->setGeometry(QRect(50, 20, 91, 41));
        seatLabel = new QLabel(DetailsDialog);
        seatLabel->setObjectName("seatLabel");
        seatLabel->setGeometry(QRect(50, 100, 71, 20));
        SeatName = new QLabel(DetailsDialog);
        SeatName->setObjectName("SeatName");
        SeatName->setGeometry(QRect(150, 100, 71, 20));
        okButton = new QPushButton(DetailsDialog);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(380, 210, 83, 29));
        cancelButton = new QPushButton(DetailsDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(480, 210, 83, 29));
        nameInput = new QLineEdit(DetailsDialog);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(160, 30, 401, 28));

        retranslateUi(DetailsDialog);

        QMetaObject::connectSlotsByName(DetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *DetailsDialog)
    {
        DetailsDialog->setWindowTitle(QCoreApplication::translate("DetailsDialog", "Koltuk Sat\304\261n Al\304\261m", nullptr));
        customerLabel->setText(QCoreApplication::translate("DetailsDialog", "M\303\274\305\237teri \304\260smi", nullptr));
        seatLabel->setText(QCoreApplication::translate("DetailsDialog", "Koltuk No:", nullptr));
        SeatName->setText(QString());
        okButton->setText(QCoreApplication::translate("DetailsDialog", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("DetailsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailsDialog: public Ui_DetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILSDIALOG_H
