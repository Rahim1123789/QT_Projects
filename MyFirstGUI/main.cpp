#include "mainwindow.h"
#include <QApplication>
#include<QDebug>
#include <stdlib.h>
#include <QProcess>
#include<gobver.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}
