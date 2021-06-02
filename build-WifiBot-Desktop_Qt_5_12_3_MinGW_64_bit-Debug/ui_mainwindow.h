/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
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
    QPushButton *boutonHaut;
    QPushButton *boutonBas;
    QPushButton *boutonGauche;
    QPushButton *boutonDroite;
    QFrame *capteurIr;
    QPushButton *Voiture;
    QProgressBar *IndicDevantGauche;
    QProgressBar *IndicDevantDroite;
    QProgressBar *IndicDerriereDroite;
    QProgressBar *IndicDerriereGauche;
    QFrame *odometrie;
    QFrame *FrameVitesse;
    QGridLayout *gridLayout_3;
    QTextBrowser *kmParH;
    QLCDNumber *Vitesse;
    QSpacerItem *horizontalSpacer;
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
        Frame_connexion->setGeometry(QRect(10, 10, 301, 51));
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Sans Serif"));
        font1.setPointSize(10);
        progressBar->setFont(font1);
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);

        camera = new QFrame(centralWidget);
        camera->setObjectName(QString::fromUtf8("camera"));
        camera->setGeometry(QRect(30, 80, 651, 431));
        camera->setFrameShape(QFrame::Box);
        camera->setFrameShadow(QFrame::Sunken);
        commandes = new QFrame(centralWidget);
        commandes->setObjectName(QString::fromUtf8("commandes"));
        commandes->setGeometry(QRect(720, 130, 211, 201));
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

        gridLayout->addWidget(boutonStop, 1, 1, 1, 1);

        boutonHaut = new QPushButton(commandes);
        boutonHaut->setObjectName(QString::fromUtf8("boutonHaut"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Image/Fleche haut.png"), QSize(), QIcon::Normal, QIcon::Off);
        boutonHaut->setIcon(icon2);
        boutonHaut->setIconSize(QSize(50, 50));
        boutonHaut->setAutoDefault(false);
        boutonHaut->setFlat(true);

        gridLayout->addWidget(boutonHaut, 0, 1, 1, 1);

        boutonBas = new QPushButton(commandes);
        boutonBas->setObjectName(QString::fromUtf8("boutonBas"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Image/Fleche bas.png"), QSize(), QIcon::Normal, QIcon::Off);
        boutonBas->setIcon(icon3);
        boutonBas->setIconSize(QSize(50, 50));
        boutonBas->setAutoDefault(false);
        boutonBas->setFlat(true);

        gridLayout->addWidget(boutonBas, 2, 1, 1, 1);

        boutonGauche = new QPushButton(commandes);
        boutonGauche->setObjectName(QString::fromUtf8("boutonGauche"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Image/Fleche gauche.png"), QSize(), QIcon::Normal, QIcon::Off);
        boutonGauche->setIcon(icon4);
        boutonGauche->setIconSize(QSize(50, 50));
        boutonGauche->setAutoDefault(false);
        boutonGauche->setFlat(true);

        gridLayout->addWidget(boutonGauche, 1, 0, 1, 1);

        boutonDroite = new QPushButton(commandes);
        boutonDroite->setObjectName(QString::fromUtf8("boutonDroite"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Image/Fleche droite.png"), QSize(), QIcon::Normal, QIcon::Off);
        boutonDroite->setIcon(icon5);
        boutonDroite->setIconSize(QSize(50, 50));
        boutonDroite->setAutoDefault(false);
        boutonDroite->setFlat(true);

        gridLayout->addWidget(boutonDroite, 1, 2, 1, 1);

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
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Image/voiture.png"), QSize(), QIcon::Normal, QIcon::Off);
        Voiture->setIcon(icon6);
        Voiture->setIconSize(QSize(150, 150));
#ifndef QT_NO_SHORTCUT
        Voiture->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        Voiture->setCheckable(false);
        Voiture->setAutoDefault(false);
        Voiture->setFlat(true);
        IndicDevantGauche = new QProgressBar(capteurIr);
        IndicDevantGauche->setObjectName(QString::fromUtf8("IndicDevantGauche"));
        IndicDevantGauche->setGeometry(QRect(80, 20, 20, 30));
        IndicDevantGauche->setValue(50);
        IndicDevantGauche->setTextVisible(false);
        IndicDevantGauche->setOrientation(Qt::Vertical);
        IndicDevantGauche->setTextDirection(QProgressBar::BottomToTop);
        IndicDevantDroite = new QProgressBar(capteurIr);
        IndicDevantDroite->setObjectName(QString::fromUtf8("IndicDevantDroite"));
        IndicDevantDroite->setGeometry(QRect(180, 20, 20, 30));
        IndicDevantDroite->setValue(50);
        IndicDevantDroite->setTextVisible(false);
        IndicDevantDroite->setOrientation(Qt::Vertical);
        IndicDevantDroite->setTextDirection(QProgressBar::BottomToTop);
        IndicDerriereDroite = new QProgressBar(capteurIr);
        IndicDerriereDroite->setObjectName(QString::fromUtf8("IndicDerriereDroite"));
        IndicDerriereDroite->setGeometry(QRect(180, 170, 20, 30));
        IndicDerriereDroite->setValue(50);
        IndicDerriereDroite->setTextVisible(false);
        IndicDerriereDroite->setOrientation(Qt::Vertical);
        IndicDerriereDroite->setInvertedAppearance(true);
        IndicDerriereDroite->setTextDirection(QProgressBar::BottomToTop);
        IndicDerriereGauche = new QProgressBar(capteurIr);
        IndicDerriereGauche->setObjectName(QString::fromUtf8("IndicDerriereGauche"));
        IndicDerriereGauche->setGeometry(QRect(80, 170, 20, 30));
        IndicDerriereGauche->setValue(50);
        IndicDerriereGauche->setTextVisible(false);
        IndicDerriereGauche->setOrientation(Qt::Vertical);
        IndicDerriereGauche->setInvertedAppearance(true);
        IndicDerriereGauche->setTextDirection(QProgressBar::BottomToTop);
        odometrie = new QFrame(centralWidget);
        odometrie->setObjectName(QString::fromUtf8("odometrie"));
        odometrie->setGeometry(QRect(30, 520, 651, 61));
        odometrie->setFrameShape(QFrame::Box);
        odometrie->setFrameShadow(QFrame::Sunken);
        FrameVitesse = new QFrame(centralWidget);
        FrameVitesse->setObjectName(QString::fromUtf8("FrameVitesse"));
        FrameVitesse->setGeometry(QRect(710, 30, 220, 85));
        FrameVitesse->setFrameShape(QFrame::Box);
        FrameVitesse->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(FrameVitesse);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        kmParH = new QTextBrowser(FrameVitesse);
        kmParH->setObjectName(QString::fromUtf8("kmParH"));
        kmParH->setEnabled(true);
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Sans Serif"));
        font2.setPointSize(12);
        font2.setKerning(false);
        kmParH->setFont(font2);
        kmParH->setAutoFillBackground(false);
        kmParH->setFrameShape(QFrame::NoFrame);
        kmParH->setFrameShadow(QFrame::Plain);

        gridLayout_3->addWidget(kmParH, 1, 1, 1, 1);

        Vitesse = new QLCDNumber(FrameVitesse);
        Vitesse->setObjectName(QString::fromUtf8("Vitesse"));
        Vitesse->setEnabled(true);
        Vitesse->setFont(font1);
        Vitesse->setFrameShape(QFrame::Box);
        Vitesse->setFrameShadow(QFrame::Plain);
        Vitesse->setSmallDecimalPoint(false);
        Vitesse->setSegmentStyle(QLCDNumber::Filled);
        Vitesse->setProperty("intValue", QVariant(5));

        gridLayout_3->addWidget(Vitesse, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 2, 1, 1);

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
        QObject::connect(vitesse, SIGNAL(sliderMoved(int)), Vitesse, SLOT(display(int)));

        boutonStop->setDefault(false);
        boutonHaut->setDefault(false);
        boutonBas->setDefault(false);
        boutonGauche->setDefault(false);
        boutonDroite->setDefault(false);
        Voiture->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionParametre->setText(QApplication::translate("MainWindow", "Parametre", nullptr));
#ifndef QT_NO_TOOLTIP
        actionParametre->setToolTip(QApplication::translate("MainWindow", "Parem\303\250tre", nullptr));
#endif // QT_NO_TOOLTIP
        boutonConnexion->setText(QApplication::translate("MainWindow", "se connecter", nullptr));
        boutonStop->setText(QString());
#ifndef QT_NO_SHORTCUT
        boutonStop->setShortcut(QApplication::translate("MainWindow", "Space", nullptr));
#endif // QT_NO_SHORTCUT
        boutonHaut->setText(QString());
#ifndef QT_NO_SHORTCUT
        boutonHaut->setShortcut(QApplication::translate("MainWindow", "Z, Up", nullptr));
#endif // QT_NO_SHORTCUT
        boutonBas->setText(QString());
#ifndef QT_NO_SHORTCUT
        boutonBas->setShortcut(QApplication::translate("MainWindow", "Down, S", nullptr));
#endif // QT_NO_SHORTCUT
        boutonGauche->setText(QString());
#ifndef QT_NO_SHORTCUT
        boutonGauche->setShortcut(QApplication::translate("MainWindow", "Left, Q", nullptr));
#endif // QT_NO_SHORTCUT
        boutonDroite->setText(QString());
#ifndef QT_NO_SHORTCUT
        boutonDroite->setShortcut(QApplication::translate("MainWindow", "Right, D", nullptr));
#endif // QT_NO_SHORTCUT
        Voiture->setText(QString());
        IndicDevantGauche->setFormat(QString());
        IndicDevantDroite->setFormat(QString());
        IndicDerriereDroite->setFormat(QString());
        IndicDerriereGauche->setFormat(QString());
        kmParH->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
