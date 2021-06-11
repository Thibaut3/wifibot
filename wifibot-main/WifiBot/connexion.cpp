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
    emit newIP();
}

QString connexion::getIP(){
    return this->IP;
}




