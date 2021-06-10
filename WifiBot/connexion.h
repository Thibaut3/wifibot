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

    QString getIP();

signals:
    void newIP();

public slots:
    //On appuie sur OK
    void on_buttonBox_accepted();

private:
    Ui::connexion *ui;
    QString IP;
};

#endif // CONNEXION_H
