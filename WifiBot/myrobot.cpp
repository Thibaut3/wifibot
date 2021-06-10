// myrobot.cpp

#include "myrobot.h"

MyRobot::MyRobot(QObject *parent) : QObject(parent) {
    DataToSend.resize(9);
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = 0x0;
    DataToSend[3] = 0x0;
    DataToSend[4] = 0x0;
    DataToSend[5] = 0x0;
    DataToSend[6] = 0x0;
    DataToSend[7] = 0x0;
    DataToSend[8] = 0x0;
    DataReceived.resize(21);
    TimerEnvoi = new QTimer();
    // setup signal and slot
    connect(TimerEnvoi, SIGNAL(timeout()), this, SLOT(MyTimerSlot())); //Send data to wifibot timer
}


void MyRobot::doConnect(QString IP) {
    socket = new QTcpSocket(this); // socket creation
    connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));
    qDebug() << "connecting..."; // this is not blocking call
    //socket->connectToHost("LOCALHOST", 15020);
    socket->connectToHost(IP, 15020); // connection to wifibot
    // we need to wait...
    if(!socket->waitForConnected(5000)) {
        qDebug() << "Error: " << socket->errorString();
        return;
    }
    TimerEnvoi->start(75);
}

void MyRobot::disConnect() {
    TimerEnvoi->stop();
    socket->close();
}

void MyRobot::connected() {
    qDebug() << "connected..."; // Hey server, tell me about you.
}

void MyRobot::disconnected() {
    qDebug() << "disconnected...";
}

void MyRobot::bytesWritten(qint64 bytes) {
    qDebug() << bytes << " bytes written...";
}

void MyRobot::readyRead() {
    qDebug() << "reading..."; // read the data from the socket
    DataReceived = socket->readAll();
    emit updateUI(DataReceived);
    qDebug() << (unsigned char)DataReceived[0] << (unsigned char)DataReceived[1] << (unsigned char)DataReceived[2];
    qDebug() << getSpeed() ;
}

void MyRobot::MyTimerSlot() {
    qDebug() << "Timer...";
    while(Mutex.tryLock());
    socket->write(DataToSend);
    Mutex.unlock();
}

short MyRobot::Crc16(unsigned char *_Adresse_tab, unsigned char Taille_Max){
    unsigned int Crc = 0xFFFF;
    unsigned int Polynome = 0xA001;
    unsigned int CptOctet = 0;
    unsigned int CptBit = 0;
    unsigned int Parity = 0;

    Crc = 0xFFFF;
    Polynome = 0xA001;
    for (CptOctet=0; CptOctet<Taille_Max;CptOctet++){
        Crc ^= *(_Adresse_tab + CptOctet);

        for(CptBit=0;CptBit<=7;CptBit++){
            Parity = Crc;
            Crc >>=1;
            if(Parity%2 == true) Crc ^= Polynome;
        }
    }
    return (Crc);
}


void MyRobot::Avant(short speed1, short speed2){
    DataToSend.resize(9);
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = (unsigned char) speed1;
    DataToSend[3] = (unsigned char)(speed1 >> 8);
    DataToSend[4] = (unsigned char) speed2;
    DataToSend[5] = (unsigned char)(speed2 >> 8);
    DataToSend[6] = (unsigned char)(80+1);
    short mycrcsend = Crc16((unsigned char *)DataToSend.data()+1,6);
    DataToSend[7] = (unsigned char) mycrcsend;
    DataToSend[8] = (unsigned char) (mycrcsend >> 8);

    connect(TimerEnvoi, SIGNAL(timeout()), this, SLOT(MyTimerSlot()));
}

void MyRobot::Arriere(short speed1, short speed2){
    DataToSend.resize(9);
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = (unsigned char) speed1;
    DataToSend[3] = (unsigned char)(speed1 >> 8);
    DataToSend[4] = (unsigned char) speed2;
    DataToSend[5] = (unsigned char)(speed2 >> 8);
    DataToSend[6] = (unsigned char)(0+1);
    short mycrcsend = Crc16((unsigned char *)DataToSend.data()+1,6);
    DataToSend[7] = (unsigned char) mycrcsend;
    DataToSend[8] = (unsigned char) (mycrcsend >> 8);

    connect(TimerEnvoi, SIGNAL(timeout()), this, SLOT(MyTimerSlot()));
}

void MyRobot::Droite(short speed1, short speed2){
    DataToSend.resize(9);
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = (unsigned char) speed1;
    DataToSend[3] = (unsigned char)(speed1 >> 8);
    DataToSend[4] = (unsigned char) speed2-30;
    DataToSend[5] = (unsigned char)(speed2-30 >> 8);
    DataToSend[6] = (unsigned char)(80+1);
    short mycrcsend = Crc16((unsigned char *)DataToSend.data()+1,6);
    DataToSend[7] = (unsigned char) mycrcsend;
    DataToSend[8] = (unsigned char) (mycrcsend >> 8);

    connect(TimerEnvoi, SIGNAL(timeout()), this, SLOT(MyTimerSlot()));
}

void MyRobot::Gauche(short speed1, short speed2){
    DataToSend.resize(9);
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = (unsigned char) speed1-30;
    DataToSend[3] = (unsigned char)(speed1-30 >> 8);
    DataToSend[4] = (unsigned char) speed2;
    DataToSend[5] = (unsigned char)(speed2 >> 8);
    DataToSend[6] = (unsigned char)(80+1);
    short mycrcsend = Crc16((unsigned char *)DataToSend.data()+1,6);
    DataToSend[7] = (unsigned char) mycrcsend;
    DataToSend[8] = (unsigned char) (mycrcsend >> 8);

    connect(TimerEnvoi, SIGNAL(timeout()), this, SLOT(MyTimerSlot()));
}

void MyRobot::PivoterD(short speed1, short speed2){
    DataToSend.resize(9);
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = (unsigned char) speed1;
    DataToSend[3] = (unsigned char)(speed1 >> 8);
    DataToSend[4] = (unsigned char) speed2;
    DataToSend[5] = (unsigned char)(speed2 >> 8);
    DataToSend[6] = (unsigned char)(64+1);
    short mycrcsend = Crc16((unsigned char *)DataToSend.data()+1,6);
    DataToSend[7] = (unsigned char) mycrcsend;
    DataToSend[8] = (unsigned char) (mycrcsend >> 8);

    connect(TimerEnvoi, SIGNAL(timeout()), this, SLOT(MyTimerSlot()));
}

void MyRobot::PivoterG(short speed1, short speed2){
    DataToSend.resize(9);
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = (unsigned char) speed1;
    DataToSend[3] = (unsigned char)(speed1 >> 8);
    DataToSend[4] = (unsigned char) speed2;
    DataToSend[5] = (unsigned char)(speed2 >> 8);
    DataToSend[6] = (unsigned char)(16+1);
    short mycrcsend = Crc16((unsigned char *)DataToSend.data()+1,6);
    DataToSend[7] = (unsigned char) mycrcsend;
    DataToSend[8] = (unsigned char) (mycrcsend >> 8);

    connect(TimerEnvoi, SIGNAL(timeout()), this, SLOT(MyTimerSlot()));
}
void MyRobot::Stop(){
    DataToSend.resize(9);
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = 0x00;
    DataToSend[3] = 0x00;
    DataToSend[4] = 0x00;
    DataToSend[5] = 0x00;
    DataToSend[6] = 0x00;
    DataToSend[7] = 0x00;
    DataToSend[8] = 0x00;

    connect(TimerEnvoi, SIGNAL(timeout()), this, SLOT(MyTimerSlot()));
}

int MyRobot::getSpeed(){
    unsigned char speed ='0';

    if((int)(unsigned char)DataReceived[0] > (int)(unsigned char)DataReceived[9]){
        speed = (unsigned char)DataReceived[9];
    }else if((int)(unsigned char)DataReceived[0] < (int)(unsigned char)DataReceived[9]){
        speed = (unsigned char)DataReceived[0];
    }else{
        speed = (unsigned char)DataReceived[0];
    }
    return speed;
}

int MyRobot::getBatteryLevel(){
    int batLvl = (unsigned char)DataReceived[2];

    return batLvl;
}

QVector<int> MyRobot::getIR(){
    QVector<int> IR;
    IR.push_back((unsigned char)DataReceived[3]);
    IR.push_back((unsigned char)DataReceived[11]);
    IR.push_back((unsigned char)DataReceived[4]);
    IR.push_back((unsigned char)DataReceived[12]);
    return  IR;
}

QVector<int> MyRobot::getOdo(){
    QVector<int> Odo;
    Odo.push_back((unsigned char)(((((long)DataReceived[8] << 24)) + (((long)DataReceived[7] << 16)) + (((long)DataReceived[6] << 8)) + ((long)DataReceived[5]))));
    Odo.push_back((unsigned char)(((((long)DataReceived[16] << 24)) + (((long)DataReceived[15] << 16)) + (((long)DataReceived[14] << 8)) + ((long)DataReceived[13]))));
    return Odo;
}

QString MyRobot::getMSG(){
    QString msg = socket->errorString();

    if(msg=="Unknown error"){
        msg = "Vous êtes connecté au WifiBot";
    }
    if(msg=="Connection refused"){
        msg = "Connexion refusée";
    }
    if(msg=="Host not found"){
        msg = "Hôte introuvable (Mauvaise IP)";
    }
    if(msg=="Socket operation timed out"){
        msg = "L'hôte ne répond pas";
    }

    return msg;
}

