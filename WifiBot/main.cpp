#include "mainwindow.h"
#include "myrobot.h"
#include <QApplication>
#include <windows.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
