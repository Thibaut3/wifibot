#include "connexion.h"
#include "ui_connexion.h"

connexion::connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::connexion)
{
    ui->setupUi(this);
}

connexion::~connexion()
{
    delete ui;
}

void connexion::on_buttonBox_accepted()
{
    IP = ui->IPAdresse->toPlainText(); //Recupérer l'adresse IP saisie
    port = ui->PortRobot->toPlainText(); //Récupérer le port saisie
    emit newData(); //émet un signal
}

QString connexion::getIP(){
    return this->IP; //Retourne l'IP saisie
}

QString connexion::getPort(){
    return this->port; //Retourne le port saisie
}

void connexion::on_btnDeco_clicked()
{
    emit deco(); //émet un signal
    this->close(); //ferme la fenêtre
}

