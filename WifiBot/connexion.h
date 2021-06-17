#ifndef CONNEXION_H
#define CONNEXION_H

#include <QDialog>

namespace Ui {
class connexion;
}

class connexion : public QDialog
{
    Q_OBJECT

public:
    explicit connexion(QWidget *parent = nullptr);
    ~connexion();

    QString getIP(); //Retourne l'adresse IP
    QString getPort(); //Retourne le port du robot
    QString getCam(); //Retourne le port de la caméra

signals:
    void newData();
    void deco();

public slots:
    //On appuie sur OK
    void on_buttonBox_accepted();

    //On appuie sur SE DECONNECTER
    void on_btnDeco_clicked();

private:
    Ui::connexion *ui;
    QString IP;
    QString port;
    QString portCam;
};

#endif // CONNEXION_H
