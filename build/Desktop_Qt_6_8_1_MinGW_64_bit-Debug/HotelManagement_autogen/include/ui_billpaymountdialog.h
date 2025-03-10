/********************************************************************************
** Form generated from reading UI file 'billpaymountdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLPAYMOUNTDIALOG_H
#define UI_BILLPAYMOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_BillPaymountDialog
{
public:
    QLabel *label;
    QLabel *CustomerNameOutput;
    QLabel *label_2;
    QLabel *BillAmount;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BillPaymountDialog)
    {
        if (BillPaymountDialog->objectName().isEmpty())
            BillPaymountDialog->setObjectName("BillPaymountDialog");
        BillPaymountDialog->resize(646, 439);
        label = new QLabel(BillPaymountDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 70, 91, 61));
        CustomerNameOutput = new QLabel(BillPaymountDialog);
        CustomerNameOutput->setObjectName("CustomerNameOutput");
        CustomerNameOutput->setGeometry(QRect(200, 60, 361, 91));
        label_2 = new QLabel(BillPaymountDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 190, 111, 61));
        BillAmount = new QLabel(BillPaymountDialog);
        BillAmount->setObjectName("BillAmount");
        BillAmount->setGeometry(QRect(230, 190, 301, 61));
        buttonBox = new QDialogButtonBox(BillPaymountDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(460, 390, 167, 29));
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(BillPaymountDialog);

        QMetaObject::connectSlotsByName(BillPaymountDialog);
    } // setupUi

    void retranslateUi(QDialog *BillPaymountDialog)
    {
        BillPaymountDialog->setWindowTitle(QCoreApplication::translate("BillPaymountDialog", "Checkout \303\226deme", nullptr));
        label->setText(QCoreApplication::translate("BillPaymountDialog", "M\303\274\305\237teri Ad\304\261 : ", nullptr));
        CustomerNameOutput->setText(QString());
        label_2->setText(QCoreApplication::translate("BillPaymountDialog", "Toplam Odeme :", nullptr));
        BillAmount->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BillPaymountDialog: public Ui_BillPaymountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLPAYMOUNTDIALOG_H
