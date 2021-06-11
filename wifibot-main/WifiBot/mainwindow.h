#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myrobot.h"
#include "connexion.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots :
    void on_boutonGauche_clicked();

    void on_boutonBas_clicked();

    void on_boutonDroite_clicked();


    void on_boutonHaut_clicked();

    void on_boutonStop_clicked();

    //Slot pour afficher la batterie
    void batLvl();
    //Slot pour afficher la vitesse
    void vitRobot();
    //Slots pour afficher les capteurs IR
    void IRFR(); //DEVANT DROIT
    void IRFL(); //DEVANT GAUCHE
    void IRBR(); //DERRIERE DROIT
    void IRBL(); //DERRIERE GAUCHE

    void OdoG();
    void OdoD();

    //Slot pour afficher le message de connexion
    void MSGConnexion();

    //Slot pour se connecter grâce à l'autre fenêtre
    void connected();

private slots:
    void on_boutonPivotG_clicked();

    void on_boutonPivotD_clicked();

    void on_vitesse_sliderMoved(int position);

    void on_actionParametre_triggered();

private:
    Ui::MainWindow *ui;
    MyRobot myrobot;
    connexion *nw = new connexion();
};

#endif // MAINWINDOW_H
