/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *CheckInButton;
    QPushButton *ExtrasButton;
    QLabel *HotelLogo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(998, 652);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        CheckInButton = new QPushButton(frame);
        CheckInButton->setObjectName("CheckInButton");
        sizePolicy1.setHeightForWidth(CheckInButton->sizePolicy().hasHeightForWidth());
        CheckInButton->setSizePolicy(sizePolicy1);
        CheckInButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #32CD32; /* Ye\305\237il renk */\n"
"    border: none; /* Kenar \303\247izgisi yok */\n"
"    border-radius: 10px; /* Yuvarlat\304\261lm\304\261\305\237 kenarlar */\n"
"    color: white; /* Metin rengi beyaz */\n"
"    padding: 10px; /* \304\260\303\247erik bo\305\237lu\304\237u */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2E8B57; /* Hover s\304\261ras\304\261nda koyu ye\305\237il */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #90EE90; /* T\304\261klama s\304\261ras\304\261nda a\303\247\304\261k ye\305\237il */\n"
"}\n"
""));

        verticalLayout->addWidget(CheckInButton);

        ExtrasButton = new QPushButton(frame);
        ExtrasButton->setObjectName("ExtrasButton");
        sizePolicy1.setHeightForWidth(ExtrasButton->sizePolicy().hasHeightForWidth());
        ExtrasButton->setSizePolicy(sizePolicy1);
        ExtrasButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF; /* Mavi renk */\n"
"    border: none; /* Kenar \303\247izgisi yok */\n"
"    border-radius: 10px; /* Yuvarlat\304\261lm\304\261\305\237 kenarlar */\n"
"    color: white; /* Metin rengi beyaz */\n"
"    padding: 10px; /* \304\260\303\247erik bo\305\237lu\304\237u */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1C86EE; /* Hover s\304\261ras\304\261nda koyu mavi */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #87CEFA; /* T\304\261klama s\304\261ras\304\261nda a\303\247\304\261k mavi */\n"
"}\n"
""));

        verticalLayout->addWidget(ExtrasButton);


        horizontalLayout->addWidget(frame);

        HotelLogo = new QLabel(centralwidget);
        HotelLogo->setObjectName("HotelLogo");
        sizePolicy1.setHeightForWidth(HotelLogo->sizePolicy().hasHeightForWidth());
        HotelLogo->setSizePolicy(sizePolicy1);
        HotelLogo->setPixmap(QPixmap(QString::fromUtf8(":/Images/istockphoto-1494642262-612x612.jpg")));
        HotelLogo->setScaledContents(true);

        horizontalLayout->addWidget(HotelLogo);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 998, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Cinema Management", nullptr));
        CheckInButton->setText(QCoreApplication::translate("MainWindow", "Bilet Sat/\303\226deme Al", nullptr));
        ExtrasButton->setText(QCoreApplication::translate("MainWindow", "Extras", nullptr));
        HotelLogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
