#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Désactive tous les boutons
    ui->boutonBas->setEnabled(false);
    ui->boutonHaut->setEnabled(false);
    ui->boutonGauche->setEnabled(false);
    ui->boutonDroite->setEnabled(false);
    ui->boutonStop->setEnabled(false);  

    //Initialiser les valeurs odométriques à 0
    odoG = 0;
    odoD = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_boutonGauche_clicked()
{
    myrobot.Gauche(ui->Vitesse->value(),ui->Vitesse->value()); //Aller à gauche avec la vitesse affichée sur l'UI définie par la slide bar
}

void MainWindow::on_boutonBas_clicked()
{
    myrobot.Arriere(ui->Vitesse->value(),ui->Vitesse->value()); //Aller en arrière avec la vitesse affichée sur l'UI définie par la slide bar
}

void MainWindow::on_boutonDroite_clicked()
{
    myrobot.Droite(ui->Vitesse->value(),ui->Vitesse->value()); //Aller à droite avec la vitesse affichée sur l'UI définie par la slide bar
}

void MainWindow::on_boutonHaut_clicked()
{
    myrobot.Avant(ui->Vitesse->value(),ui->Vitesse->value()); //Aller en avant avec la vitesse affichée sur l'UI définie par la slide bar
}

void MainWindow::on_boutonStop_clicked()
{
    myrobot.Stop(); //S'arrêter
}

void MainWindow::on_boutonPivotG_clicked()
{
    myrobot.PivoterG(ui->Vitesse->value(),ui->Vitesse->value()); //Pivoter Gauche avec la vitesse affichée sur l'UI définie par la slide bar
}

void MainWindow::on_boutonPivotD_clicked()
{
    myrobot.PivoterD(ui->Vitesse->value(),ui->Vitesse->value()); //Pivoter Droit avec la vitesse affichée sur l'UI définie par la slide bar
}

void MainWindow::batLvl(){
    ui->progressBar->setValue(myrobot.getBatteryLevel()); //Récupère la valeur de la batterie et l'affiche sur la barre
}

void MainWindow::vitRobot(){
    ui->vitRobot->display(myrobot.getSpeed()); //Récupère la vitesse et l'affiche
}


void MainWindow::on_vitesse_sliderMoved(int position)
{
    ui->Vitesse->display(position); //Affiche la valeur de la slide barre sur le lecteur LCD
}

void MainWindow::IRdata(){
    ui->IndicDevantDroite->setValue(myrobot.getIR().at(0));   //Récupère et affiche la valeur du capteur IR devant droit
    ui->IndicDevantGauche->setValue(myrobot.getIR().at(1));   //Récupère et affiche la valeur du capteur IR devant gauche
    ui->IndicDerriereDroite->setValue(myrobot.getIR().at(2)); //Récupère et affiche la valeur du capteur IR arrière droit
    ui->IndicDerriereGauche->setValue(myrobot.getIR().at(3)); //Récupère et affiche la valeur du capteur IR arrière gauche
}

void MainWindow::Odo(){
    double odoGFinal = ((myrobot.getOdo().at(0)-odoG)/75)*(10)*(2*M_PI*14);
    double odoDFinal = ((myrobot.getOdo().at(1)-odoD)/75)*(10)*(2*M_PI*14);

    ui->OdoG->display(qFabs(odoGFinal)); //Affiche la valeur absolue de l'odométrique Gauche
    ui->OdoD->display(qFabs(odoDFinal)); //Affiche la valeur absolue de l'odométrique Droit

    odoG = myrobot.getOdo().at(0);
    odoD = myrobot.getOdo().at(1);
}

void MainWindow::MSGConnexion(){
    ui->IndicConnexion->setText(myrobot.getMSG()); //Récupère et affiche le message de connexion
}

void MainWindow::on_actionParametre_triggered()
{
    nw->show(); //Affiche la fenêtre de connexion
    QObject::connect(nw,SIGNAL(newData()),this,SLOT(connected())); //Lie le bouton "OK" de la fenêtre de connexion à la fonction connected de MainWindow
    QObject::connect(nw,SIGNAL(deco()),this,SLOT(deconnected())); //Lie le bouton "SE DECONNECTER" de la fenêtre de connexion à la fonction deconnected de MainWindow
}

void MainWindow::connected(){
    myrobot.doConnect(nw->getIP(),nw->getPort()); //Se connecte au robot grâce à l'adresse IP et au port saisie dans la fenêtre de connexion

    //nw->getCam();

    if(myrobot.getMSG()=="Vous êtes connecté au WifiBot"){  // Si on est connecté

        //Débloque les boutons de commandes
        ui->boutonBas->setEnabled(true);
        ui->boutonHaut->setEnabled(true);
        ui->boutonGauche->setEnabled(true);
        ui->boutonDroite->setEnabled(true);
        ui->boutonStop->setEnabled(true);

        QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(batLvl())); //Lie la valeur de la batterie à chaque update du myrobot
        QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(vitRobot())); //Lie la valeur de la vitesse à chaque update du myrobot
        QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(IRdata())); //Lie les valeurs des capteurs IR à chaque update du myrobot
        QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(Odo())); //Lie les valeurs odométriques à chaque update du myrobot
    }

    MSGConnexion(); //Appelle la fonction MSGConnexion() pour afficher le message connexion
}

void MainWindow::deconnected(){
    myrobot.disConnect(); //Se déconnecte du robot

    ui->IndicConnexion->setText("Vous vous êtes déconnecté"); //Change le texte de connexion

    //Désactive tous les boutons de commandes et met les valeurs à 0
    ui->boutonBas->setEnabled(false);
    ui->boutonHaut->setEnabled(false);
    ui->boutonGauche->setEnabled(false);
    ui->boutonDroite->setEnabled(false);
    ui->boutonStop->setEnabled(false);
    ui->progressBar->setValue(0);
    ui->vitRobot->display(0);
    ui->IndicDevantDroite->setValue(0);
    ui->IndicDevantGauche->setValue(0);
    ui->IndicDerriereDroite->setValue(0);
    ui->IndicDerriereGauche->setValue(0);
    ui->OdoG->display(0);
    ui->OdoD->display(0);
}

