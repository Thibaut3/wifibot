/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionParametre;
    QWidget *centralWidget;
    QFrame *Frame_connexion;
    QGridLayout *gridLayout_2;
    QPushButton *boutonConnexion;
    QTextBrowser *IndicConnexion;
    QFrame *batterie;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QFrame *camera;
    QFrame *commandes;
    QGridLayout *gridLayout;
    QPushButton *boutonStop;
    QPushButton *boutonGauche;
    QPushButton *boutonHaut;
    QPushButton *boutonDroite;
    QPushButton *boutonBas;
    QPushButton *boutonPivotG;
    QPushButton *boutonPivotD;
    QFrame *capteurIr;
    QPushButton *Voiture;
    QProgressBar *IndicDevantGauche;
    QProgressBar *IndicDevantDroite;
    QProgressBar *IndicDerriereDroite;
    QProgressBar *IndicDerriereGauche;
    QFrame *odometrie;
    QLCDNumber *vitesseRobot;
    QTextBrowser *textBrowser;
    QFrame *FrameVitesse;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QLCDNumber *Vitesse;
    QTextBrowser *kmParH;
    QSlider *vitesse;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1001, 669);
        actionParametre = new QAction(MainWindow);
        actionParametre->setObjectName(QString::fromUtf8("actionParametre"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Image/pngegg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionParametre->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Frame_connexion = new QFrame(centralWidget);
        Frame_connexion->setObjectName(QString::fromUtf8("Frame_connexion"));
        Frame_connexion->setGeometry(QRect(30, 10, 301, 51));
        Frame_connexion->setFrameShape(QFrame::Box);
        Frame_connexion->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(Frame_connexion);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        boutonConnexion = new QPushButton(Frame_connexion);
        boutonConnexion->setObjectName(QString::fromUtf8("boutonConnexion"));

        gridLayout_2->addWidget(boutonConnexion, 0, 0, 1, 1);

        IndicConnexion = new QTextBrowser(Frame_connexion);
        IndicConnexion->setObjectName(QString::fromUtf8("IndicConnexion"));
        IndicConnexion->setMinimumSize(QSize(0, 31));
        QFont font;
        font.setKerning(true);
        IndicConnexion->setFont(font);

        gridLayout_2->addWidget(IndicConnexion, 0, 1, 1, 1);

        batterie = new QFrame(centralWidget);
        batterie->setObjectName(QString::fromUtf8("batterie"));
        batterie->setGeometry(QRect(340, 10, 251, 51));
        batterie->setFrameShape(QFrame::Box);
        batterie->setFrameShadow(QFrame::Sunken);
        horizontalLayout = new QHBoxLayout(batterie);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        progressBar = new QProgressBar(batterie);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(255);
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);

        camera = new QFrame(centralWidget);
        camera->setObjectName(QString::fromUtf8("camera"));
        camera->setGeometry(QRect(30, 80, 651, 431));
        camera->setFrameShape(QFrame::Box);
        camera->setFrameShadow(QFrame::Sunken);
        commandes = new QFrame(centralWidget);
        commandes->setObjectName(QString::fromUtf8("commandes"));
        commandes->setGeometry(QRect(730, 130, 201, 201));
        commandes->setFrameShape(QFrame::Box);
        commandes->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(commandes);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        boutonStop = new QPushButton(commandes);
        boutonStop->setObjectName(QString::fromUtf8("boutonStop"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Image/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        boutonStop->setIcon(icon1);
        boutonStop->setIconSize(QSize(50, 50));
        boutonStop->setAutoDefault(false);
        boutonStop->setFlat(true);

        gridLayout->addWidget(boutonStop, 2, 1, 1, 1);

        boutonGauche = new QPushButton(commandes);
        boutonGauche->setObjectName(QString::fromUtf8("boutonGauche"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Image/Fleche gauche.png"), QSize(), QIcon::Normal, QIcon::Off);
        boutonGauche->setIcon(icon2);
        boutonGauche->setIconSize(QSize(50, 50));
        boutonGauche->setAutoDefault(false);
        boutonGauche->setFlat(true);

        gridLayout->addWidget(boutonGauche, 2, 0, 1, 1);

        boutonHaut = new QPushButton(commandes);
        boutonHaut->setObjectName(QString::fromUtf8("boutonHaut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Image/Fleche haut.png"), QSize(), QIcon::Normal, QIcon::Off);
        boutonHaut->setIcon(icon3);
        boutonHaut->setIconSize(QSize(50, 50));
        boutonHaut->setAutoDefault(false);
        boutonHaut->setFlat(true);

        gridLayout->addWidget(boutonHaut, 0, 1, 1, 1);

        boutonDroite = new QPushButton(commandes);
        boutonDroite->setObjectName(QString::fromUtf8("boutonDroite"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Image/Fleche droite.png"), QSize(), QIcon::Normal, QIcon::Off);
        boutonDroite->setIcon(icon4);
        boutonDroite->setIconSize(QSize(50, 50));
        boutonDroite->setAutoDefault(false);
        boutonDroite->setFlat(true);

        gridLayout->addWidget(boutonDroite, 2, 2, 1, 1);

        boutonBas = new QPushButton(commandes);
        boutonBas->setObjectName(QString::fromUtf8("boutonBas"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Image/Fleche bas.png"), QSize(), QIcon::Normal, QIcon::Off);
        boutonBas->setIcon(icon5);
        boutonBas->setIconSize(QSize(50, 50));
        boutonBas->setAutoDefault(false);
        boutonBas->setFlat(true);

        gridLayout->addWidget(boutonBas, 3, 1, 1, 1);

        boutonPivotG = new QPushButton(commandes);
        boutonPivotG->setObjectName(QString::fromUtf8("boutonPivotG"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Image/PivotGauche.png"), QSize(), QIcon::Normal, QIcon::Off);
        boutonPivotG->setIcon(icon6);
        boutonPivotG->setIconSize(QSize(50, 50));
        boutonPivotG->setFlat(true);

        gridLayout->addWidget(boutonPivotG, 0, 0, 1, 1);

        boutonPivotD = new QPushButton(commandes);
        boutonPivotD->setObjectName(QString::fromUtf8("boutonPivotD"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Image/PivotDroite.png"), QSize(), QIcon::Normal, QIcon::Off);
        boutonPivotD->setIcon(icon7);
        boutonPivotD->setIconSize(QSize(50, 50));
        boutonPivotD->setFlat(true);

        gridLayout->addWidget(boutonPivotD, 0, 2, 1, 1);

        capteurIr = new QFrame(centralWidget);
        capteurIr->setObjectName(QString::fromUtf8("capteurIr"));
        capteurIr->setGeometry(QRect(700, 350, 261, 231));
        capteurIr->setFrameShape(QFrame::Box);
        capteurIr->setFrameShadow(QFrame::Sunken);
        Voiture = new QPushButton(capteurIr);
        Voiture->setObjectName(QString::fromUtf8("Voiture"));
        Voiture->setEnabled(false);
        Voiture->setGeometry(QRect(90, 40, 91, 151));
        Voiture->setFont(font);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Image/voiture.png"), QSize(), QIcon::Normal, QIcon::Off);
        Voiture->setIcon(icon8);
        Voiture->setIconSize(QSize(150, 150));
#if QT_CONFIG(shortcut)
        Voiture->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        Voiture->setCheckable(false);
        Voiture->setAutoDefault(false);
        Voiture->setFlat(true);
        IndicDevantGauche = new QProgressBar(capteurIr);
        IndicDevantGauche->setObjectName(QString::fromUtf8("IndicDevantGauche"));
        IndicDevantGauche->setGeometry(QRect(80, 20, 20, 30));
        IndicDevantGauche->setMaximum(255);
        IndicDevantGauche->setValue(0);
        IndicDevantGauche->setTextVisible(false);
        IndicDevantGauche->setOrientation(Qt::Vertical);
        IndicDevantGauche->setTextDirection(QProgressBar::BottomToTop);
        IndicDevantDroite = new QProgressBar(capteurIr);
        IndicDevantDroite->setObjectName(QString::fromUtf8("IndicDevantDroite"));
        IndicDevantDroite->setGeometry(QRect(180, 20, 20, 30));
        IndicDevantDroite->setMaximum(255);
        IndicDevantDroite->setValue(0);
        IndicDevantDroite->setTextVisible(false);
        IndicDevantDroite->setOrientation(Qt::Vertical);
        IndicDevantDroite->setTextDirection(QProgressBar::BottomToTop);
        IndicDerriereDroite = new QProgressBar(capteurIr);
        IndicDerriereDroite->setObjectName(QString::fromUtf8("IndicDerriereDroite"));
        IndicDerriereDroite->setGeometry(QRect(180, 170, 20, 30));
        IndicDerriereDroite->setMaximum(255);
        IndicDerriereDroite->setValue(0);
        IndicDerriereDroite->setTextVisible(false);
        IndicDerriereDroite->setOrientation(Qt::Vertical);
        IndicDerriereDroite->setInvertedAppearance(true);
        IndicDerriereDroite->setTextDirection(QProgressBar::BottomToTop);
        IndicDerriereGauche = new QProgressBar(capteurIr);
        IndicDerriereGauche->setObjectName(QString::fromUtf8("IndicDerriereGauche"));
        IndicDerriereGauche->setGeometry(QRect(80, 170, 20, 30));
        IndicDerriereGauche->setMaximum(255);
        IndicDerriereGauche->setValue(0);
        IndicDerriereGauche->setTextVisible(false);
        IndicDerriereGauche->setOrientation(Qt::Vertical);
        IndicDerriereGauche->setInvertedAppearance(true);
        IndicDerriereGauche->setTextDirection(QProgressBar::BottomToTop);
        odometrie = new QFrame(centralWidget);
        odometrie->setObjectName(QString::fromUtf8("odometrie"));
        odometrie->setGeometry(QRect(30, 520, 651, 61));
        odometrie->setFrameShape(QFrame::Box);
        odometrie->setFrameShadow(QFrame::Sunken);
        vitesseRobot = new QLCDNumber(odometrie);
        vitesseRobot->setObjectName(QString::fromUtf8("vitesseRobot"));
        vitesseRobot->setGeometry(QRect(120, 10, 91, 41));
        textBrowser = new QTextBrowser(odometrie);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 101, 41));
        FrameVitesse = new QFrame(centralWidget);
        FrameVitesse->setObjectName(QString::fromUtf8("FrameVitesse"));
        FrameVitesse->setGeometry(QRect(710, 30, 220, 85));
        FrameVitesse->setFrameShape(QFrame::Box);
        FrameVitesse->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(FrameVitesse);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 2, 1, 1);

        Vitesse = new QLCDNumber(FrameVitesse);
        Vitesse->setObjectName(QString::fromUtf8("Vitesse"));
        Vitesse->setEnabled(true);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS Sans Serif")});
        font1.setPointSize(10);
        Vitesse->setFont(font1);
        Vitesse->setFrameShape(QFrame::Box);
        Vitesse->setFrameShadow(QFrame::Plain);
        Vitesse->setSmallDecimalPoint(false);
        Vitesse->setDigitCount(5);
        Vitesse->setMode(QLCDNumber::Dec);
        Vitesse->setSegmentStyle(QLCDNumber::Filled);
        Vitesse->setProperty("value", QVariant(120.000000000000000));
        Vitesse->setProperty("intValue", QVariant(120));

        gridLayout_3->addWidget(Vitesse, 1, 0, 1, 1);

        kmParH = new QTextBrowser(FrameVitesse);
        kmParH->setObjectName(QString::fromUtf8("kmParH"));
        kmParH->setEnabled(true);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS Sans Serif")});
        font2.setPointSize(12);
        font2.setKerning(false);
        kmParH->setFont(font2);
        kmParH->setAutoFillBackground(false);
        kmParH->setFrameShape(QFrame::NoFrame);
        kmParH->setFrameShadow(QFrame::Plain);

        gridLayout_3->addWidget(kmParH, 1, 1, 1, 1);

        vitesse = new QSlider(FrameVitesse);
        vitesse->setObjectName(QString::fromUtf8("vitesse"));
        vitesse->setMinimum(120);
        vitesse->setMaximum(240);
        vitesse->setTracking(true);
        vitesse->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(vitesse, 2, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setIconSize(QSize(36, 36));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(boutonConnexion, IndicConnexion);
        QWidget::setTabOrder(IndicConnexion, vitesse);
        QWidget::setTabOrder(vitesse, kmParH);
        QWidget::setTabOrder(kmParH, boutonGauche);
        QWidget::setTabOrder(boutonGauche, boutonBas);
        QWidget::setTabOrder(boutonBas, boutonDroite);
        QWidget::setTabOrder(boutonDroite, boutonHaut);
        QWidget::setTabOrder(boutonHaut, boutonStop);
        QWidget::setTabOrder(boutonStop, Voiture);

        mainToolBar->addAction(actionParametre);

        retranslateUi(MainWindow);

        boutonStop->setDefault(false);
        boutonGauche->setDefault(false);
        boutonHaut->setDefault(false);
        boutonDroite->setDefault(false);
        boutonBas->setDefault(false);
        Voiture->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionParametre->setText(QCoreApplication::translate("MainWindow", "Parametre", nullptr));
#if QT_CONFIG(tooltip)
        actionParametre->setToolTip(QCoreApplication::translate("MainWindow", "Parem\303\250tre", nullptr));
#endif // QT_CONFIG(tooltip)
        boutonConnexion->setText(QCoreApplication::translate("MainWindow", "se connecter", nullptr));
        boutonStop->setText(QString());
#if QT_CONFIG(shortcut)
        boutonStop->setShortcut(QCoreApplication::translate("MainWindow", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        boutonGauche->setText(QString());
#if QT_CONFIG(shortcut)
        boutonGauche->setShortcut(QCoreApplication::translate("MainWindow", "Left, Q", nullptr));
#endif // QT_CONFIG(shortcut)
        boutonHaut->setText(QString());
#if QT_CONFIG(shortcut)
        boutonHaut->setShortcut(QCoreApplication::translate("MainWindow", "Z, Up", nullptr));
#endif // QT_CONFIG(shortcut)
        boutonDroite->setText(QString());
#if QT_CONFIG(shortcut)
        boutonDroite->setShortcut(QCoreApplication::translate("MainWindow", "Right, D", nullptr));
#endif // QT_CONFIG(shortcut)
        boutonBas->setText(QString());
#if QT_CONFIG(shortcut)
        boutonBas->setShortcut(QCoreApplication::translate("MainWindow", "Down, S", nullptr));
#endif // QT_CONFIG(shortcut)
        boutonPivotG->setText(QString());
#if QT_CONFIG(shortcut)
        boutonPivotG->setShortcut(QCoreApplication::translate("MainWindow", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        boutonPivotD->setText(QString());
#if QT_CONFIG(shortcut)
        boutonPivotD->setShortcut(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        Voiture->setText(QString());
        IndicDevantGauche->setFormat(QString());
        IndicDevantDroite->setFormat(QString());
        IndicDerriereDroite->setFormat(QString());
        IndicDerriereGauche->setFormat(QString());
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Vitesse du robot : </p></body></html>", nullptr));
        kmParH->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Sans Serif'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">m/s</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
