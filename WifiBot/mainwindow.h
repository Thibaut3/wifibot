#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myrobot.h"
#include "connexion.h"
#include "QtMath"

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
    //Slots pour commander le Robot
    void on_boutonGauche_clicked(); //GAUCHE
    void on_boutonDroite_clicked(); //DROITE

    void on_boutonBas_clicked(); //AVANT
    void on_boutonHaut_clicked(); //ARRIERE

    void on_boutonStop_clicked(); //STOP

    void on_boutonPivotG_clicked(); //PIVOT GAUCHE
    void on_boutonPivotD_clicked(); //PIVOT DROIT

    //Slot pour afficher la batterie
    void batLvl();
    //Slot pour afficher la vitesse
    void vitRobot();
    //Slot pour afficher les capteurs IR
    void IRdata();
    //Slot pour afficher l'Odométrie
    void Odo();

    //Slot pour afficher le message de connexion
    void MSGConnexion();

    //Slot pour se connecter grâce à l'autre fenêtre
    void connected();

    //Slot pour se deconnecter depuis l'autre fenêtre
    void deconnected();

private slots:

    void on_vitesse_sliderMoved(int position);

    void on_actionParametre_triggered();

private:
    Ui::MainWindow *ui;
    MyRobot myrobot;

    connexion *nw = new connexion(); //Fenêtre de connexion

    double odoG; //Valeur odométrique Gauche précédente
    double odoD; //Valeur odométrique Droit précédente
};

#endif // MAINWINDOW_H
