#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myrobot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void actu();
public slots :
    void on_boutonGauche_clicked();

    void on_boutonBas_clicked();

    void on_boutonDroite_clicked();



    void on_boutonHaut_clicked();

    void on_boutonStop_clicked();

    void on_boutonConnexion_clicked();

    void on_IndicConnexion_textChanged();

private slots:
    void on_boutonPivotG_clicked();

    void on_boutonPivotD_clicked();

    void on_vitesseSlider_sliderMoved(int position);

private:
    Ui::MainWindow *ui;
    MyRobot myrobot; //*
};

#endif // MAINWINDOW_H
