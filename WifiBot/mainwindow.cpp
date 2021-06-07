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
    myrobot.Gauche(ui->vitesse->value(),ui->vitesse->value());
}

void MainWindow::on_boutonBas_clicked()
{
    myrobot.Arriere(ui->vitesse->value(),ui->vitesse->value());
}

void MainWindow::on_boutonDroite_clicked()
{
    myrobot.Droite(ui->vitesse->value(),ui->vitesse->value());
}

void MainWindow::on_boutonHaut_clicked()
{
    myrobot.Avant(ui->vitesse->value(),ui->vitesse->value());
}

void MainWindow::on_boutonStop_clicked()
{
    myrobot.Stop();
}

void MainWindow::on_boutonPivotG_clicked()
{
    myrobot.PivoterG(ui->vitesse->value(),ui->vitesse->value());
}

void MainWindow::on_boutonPivotD_clicked()
{
    myrobot.PivoterD(ui->vitesse->value(),ui->vitesse->value());
}



void MainWindow::on_boutonConnexion_clicked()
{
    myrobot.doConnect();
    ui->boutonBas->setEnabled(true);
    ui->boutonHaut->setEnabled(true);
    ui->boutonGauche->setEnabled(true);
    ui->boutonDroite->setEnabled(true);
    ui->boutonStop->setEnabled(true);

}


void MainWindow::on_IndicConnexion_textChanged()
{

}




