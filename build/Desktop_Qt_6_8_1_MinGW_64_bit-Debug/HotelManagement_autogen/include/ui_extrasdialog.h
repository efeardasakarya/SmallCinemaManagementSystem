/********************************************************************************
** Form generated from reading UI file 'extrasdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRASDIALOG_H
#define UI_EXTRASDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExtrasDialog
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *ButtonsLayout;
    QPushButton *SmallPopCorn;
    QPushButton *MediumPopCorn;
    QPushButton *LargePopCorn;
    QPushButton *SmallCola;
    QPushButton *MediumCola;
    QPushButton *LargeCola;
    QPushButton *Frigo;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *BillLayout;
    QLabel *label_2;
    QLabel *BillOutput;
    QLabel *label_4;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ExtrasDialog)
    {
        if (ExtrasDialog->objectName().isEmpty())
            ExtrasDialog->setObjectName("ExtrasDialog");
        ExtrasDialog->resize(971, 612);
        label = new QLabel(ExtrasDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 221, 81));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setStrikeOut(false);
        font.setKerning(true);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(ExtrasDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 80, 301, 491));
        ButtonsLayout = new QVBoxLayout(verticalLayoutWidget);
        ButtonsLayout->setObjectName("ButtonsLayout");
        ButtonsLayout->setContentsMargins(0, 0, 0, 0);
        SmallPopCorn = new QPushButton(verticalLayoutWidget);
        SmallPopCorn->setObjectName("SmallPopCorn");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SmallPopCorn->sizePolicy().hasHeightForWidth());
        SmallPopCorn->setSizePolicy(sizePolicy);

        ButtonsLayout->addWidget(SmallPopCorn);

        MediumPopCorn = new QPushButton(verticalLayoutWidget);
        MediumPopCorn->setObjectName("MediumPopCorn");
        sizePolicy.setHeightForWidth(MediumPopCorn->sizePolicy().hasHeightForWidth());
        MediumPopCorn->setSizePolicy(sizePolicy);

        ButtonsLayout->addWidget(MediumPopCorn);

        LargePopCorn = new QPushButton(verticalLayoutWidget);
        LargePopCorn->setObjectName("LargePopCorn");
        sizePolicy.setHeightForWidth(LargePopCorn->sizePolicy().hasHeightForWidth());
        LargePopCorn->setSizePolicy(sizePolicy);

        ButtonsLayout->addWidget(LargePopCorn);

        SmallCola = new QPushButton(verticalLayoutWidget);
        SmallCola->setObjectName("SmallCola");
        sizePolicy.setHeightForWidth(SmallCola->sizePolicy().hasHeightForWidth());
        SmallCola->setSizePolicy(sizePolicy);

        ButtonsLayout->addWidget(SmallCola);

        MediumCola = new QPushButton(verticalLayoutWidget);
        MediumCola->setObjectName("MediumCola");
        sizePolicy.setHeightForWidth(MediumCola->sizePolicy().hasHeightForWidth());
        MediumCola->setSizePolicy(sizePolicy);

        ButtonsLayout->addWidget(MediumCola);

        LargeCola = new QPushButton(verticalLayoutWidget);
        LargeCola->setObjectName("LargeCola");
        sizePolicy.setHeightForWidth(LargeCola->sizePolicy().hasHeightForWidth());
        LargeCola->setSizePolicy(sizePolicy);

        ButtonsLayout->addWidget(LargeCola);

        Frigo = new QPushButton(verticalLayoutWidget);
        Frigo->setObjectName("Frigo");
        sizePolicy.setHeightForWidth(Frigo->sizePolicy().hasHeightForWidth());
        Frigo->setSizePolicy(sizePolicy);

        ButtonsLayout->addWidget(Frigo);

        verticalLayoutWidget_2 = new QWidget(ExtrasDialog);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(360, 80, 341, 411));
        BillLayout = new QVBoxLayout(verticalLayoutWidget_2);
        BillLayout->setObjectName("BillLayout");
        BillLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(ExtrasDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(360, 510, 71, 61));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        BillOutput = new QLabel(ExtrasDialog);
        BillOutput->setObjectName("BillOutput");
        BillOutput->setGeometry(QRect(450, 510, 211, 61));
        BillOutput->setFont(font1);
        label_4 = new QLabel(ExtrasDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(740, 70, 181, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        label_4->setFont(font2);
        comboBox = new QComboBox(ExtrasDialog);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(730, 110, 221, 31));
        pushButton = new QPushButton(ExtrasDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(730, 160, 221, 171));
        pushButton_2 = new QPushButton(ExtrasDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(730, 340, 221, 171));

        retranslateUi(ExtrasDialog);

        QMetaObject::connectSlotsByName(ExtrasDialog);
    } // setupUi

    void retranslateUi(QDialog *ExtrasDialog)
    {
        ExtrasDialog->setWindowTitle(QCoreApplication::translate("ExtrasDialog", "Ekstralar", nullptr));
        label->setText(QCoreApplication::translate("ExtrasDialog", "Ekstralar", nullptr));
        SmallPopCorn->setText(QCoreApplication::translate("ExtrasDialog", "M\304\261s\304\261r K\303\274\303\247\303\274k", nullptr));
        MediumPopCorn->setText(QCoreApplication::translate("ExtrasDialog", "M\304\261s\304\261r Orta", nullptr));
        LargePopCorn->setText(QCoreApplication::translate("ExtrasDialog", "M\304\261s\304\261r B\303\274y\303\274k", nullptr));
        SmallCola->setText(QCoreApplication::translate("ExtrasDialog", "Kola K\303\274\303\247\303\274k", nullptr));
        MediumCola->setText(QCoreApplication::translate("ExtrasDialog", "Kola Orta", nullptr));
        LargeCola->setText(QCoreApplication::translate("ExtrasDialog", "Kola B\303\274y\303\274k", nullptr));
        Frigo->setText(QCoreApplication::translate("ExtrasDialog", "Alaska Frigo", nullptr));
        label_2->setText(QCoreApplication::translate("ExtrasDialog", "Tutar : ", nullptr));
        BillOutput->setText(QString());
        label_4->setText(QCoreApplication::translate("ExtrasDialog", "M\303\274\305\237teri Koltuk No:", nullptr));
        pushButton->setText(QCoreApplication::translate("ExtrasDialog", "Hesaba Ekle", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ExtrasDialog", "Ekelemyi Geri Al", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExtrasDialog: public Ui_ExtrasDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRASDIALOG_H
