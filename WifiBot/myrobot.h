#ifndef MYROBOT_H
#define MYROBOT_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDebug>
#include <QTimer>
#include <QMutex>

class MyRobot : public QObject {
    Q_OBJECT
public:
    explicit MyRobot(QObject *parent = 0);
    void doConnect(QString IP);
    void disConnect();
    QByteArray DataToSend;
    QByteArray DataReceived;
    QMutex Mutex;

signals:
    void updateUI(const QByteArray Data);
public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void MyTimerSlot();

    //COMMANDES DU ROBOT
    void Avant(short speed1, short speed2);
    void Arriere(short speed1, short speed2);
    void Gauche(short speed1, short speed2);
    void Droite(short speed1, short speed2);
    void PivoterG(short speed1,short speed2);
    void PivoterD(short speed1, short speed2);
    void Stop();

    short Crc16(unsigned char *_Adresse_tab, unsigned char Taille_Max);

    //RECUPERER LES DONNEES RECUES
    int getSpeed();
    int getBatteryLevel();
    QVector<int> getIR();
    QVector<int> getOdo();

    //RECUPERER LE MESSAGE DE CONNEXION
    QString getMSG();

private:
    QTcpSocket *socket;
    QTimer *TimerEnvoi;
};

#endif // MYROBOT_H
