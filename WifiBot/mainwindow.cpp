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
    myrobot.Gauche(ui->Vitesse->value(),ui->Vitesse->value());
}

void MainWindow::on_boutonBas_clicked()
{
    myrobot.Arriere(ui->Vitesse->value(),ui->Vitesse->value());
}

void MainWindow::on_boutonDroite_clicked()
{
    myrobot.Droite(ui->Vitesse->value(),ui->Vitesse->value());
}

void MainWindow::on_boutonHaut_clicked()
{
    myrobot.Avant(ui->Vitesse->value(),ui->Vitesse->value());
}

void MainWindow::on_boutonStop_clicked()
{
    myrobot.Stop();
}

void MainWindow::on_boutonPivotG_clicked()
{
    myrobot.PivoterG(ui->Vitesse->value(),ui->Vitesse->value());
}

void MainWindow::on_boutonPivotD_clicked()
{
    myrobot.PivoterD(ui->Vitesse->value(),ui->Vitesse->value());
}



void MainWindow::on_boutonConnexion_clicked()
{
    myrobot.doConnect();
    this->ui->boutonBas->setEnabled(true);
    ui->boutonHaut->setEnabled(true);
    ui->boutonGauche->setEnabled(true);
    ui->boutonDroite->setEnabled(true);
    ui->boutonStop->setEnabled(true);
    //QObject::connect(myrobot,SIGNAL(updateUi(QByteArray)),this,SLOT(actu()));
    ui->progressBar->setValue(myrobot.getBatteryLevel());

}


void MainWindow::on_IndicConnexion_textChanged()
{

}

void MainWindow::actu(){
    this->ui->progressBar->setValue(myrobot.getBatteryLevel());
}



void MainWindow::on_vitesseSlider_sliderMoved(int position)
{
    this->ui->Vitesse->display(position);
}

