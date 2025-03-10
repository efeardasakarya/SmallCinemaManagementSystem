#include "mainwindow.h"
#include "cinema.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    int result = a.exec();

    //Program sonlanmadan önce cinema nesnesini sil
    delete Cinema::getInstance();


    return result;

}
