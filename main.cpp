#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication calculator(argc, argv);
    MainWindow obj;
    obj.show();
    return calculator.exec();
}
