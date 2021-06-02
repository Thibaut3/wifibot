#include "mainwindow.h"
#include "myrobot.h"
#include <QApplication>
#include <windows.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //MyRobot myrobot;
    //myrobot.doConnect();
    //myrobot.Avant(150,150);
    //myrobot.Arriere(120,120);
    //myrobot.Droite(120,120);
    //myrobot.Gauche(120,120);
    //myrobot.Stop();
    return a.exec();
}
