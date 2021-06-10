#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->boutonBas->setEnabled(false);
    ui->boutonHaut->setEnabled(false);
    ui->boutonGauche->setEnabled(false);
    ui->boutonDroite->setEnabled(false);
    ui->boutonStop->setEnabled(false);  
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
    ui->progressBar->setValue(myrobot.getBatteryLevel());
}

void MainWindow::vitRobot(){
    ui->vitRobot->display(myrobot.getSpeed());
}


void MainWindow::on_vitesse_sliderMoved(int position)
{
    ui->Vitesse->display(position);
}

void MainWindow::IRFR(){
    ui->IndicDevantDroite->setValue(myrobot.getIR().at(0));
}

void MainWindow::IRFL(){
    ui->IndicDevantGauche->setValue(myrobot.getIR().at(1));
}

void MainWindow::IRBR(){
    ui->IndicDerriereDroite->setValue(myrobot.getIR().at(2));
}

void MainWindow::IRBL(){
    ui->IndicDerriereGauche->setValue(myrobot.getIR().at(3));
}

void MainWindow::OdoG(){
    ui->OdoG->display(myrobot.getOdo().at(0));
}

void MainWindow::OdoD(){
    ui->OdoD->display(myrobot.getOdo().at(1));
}

void MainWindow::MSGConnexion(){
    ui->IndicConnexion->setText(myrobot.getMSG());
}

void MainWindow::on_actionParametre_triggered()
{
    nw->show();
    QObject::connect(nw,SIGNAL(newIP()),this,SLOT(connected()));
}

void MainWindow::connected(){
    myrobot.doConnect(nw->getIP());
    this->ui->boutonBas->setEnabled(true);
    ui->boutonHaut->setEnabled(true);
    ui->boutonGauche->setEnabled(true);
    ui->boutonDroite->setEnabled(true);
    ui->boutonStop->setEnabled(true);
    QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(batLvl()));
    QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(vitRobot()));
    QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(IRFR()));
    QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(IRFL()));
    QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(IRBR()));
    QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(IRBL()));
    QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(OdoG()));
    QObject::connect(&myrobot,SIGNAL(updateUI(QByteArray)),this,SLOT(OdoD()));
    MSGConnexion();
}

