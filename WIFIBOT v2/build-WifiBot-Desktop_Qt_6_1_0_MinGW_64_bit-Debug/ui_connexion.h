/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_connexion
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *IPAdresse;
    QLabel *label;

    void setupUi(QDialog *connexion)
    {
        if (connexion->objectName().isEmpty())
            connexion->setObjectName(QString::fromUtf8("connexion"));
        connexion->resize(240, 320);
        buttonBox = new QDialogButtonBox(connexion);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        IPAdresse = new QTextEdit(connexion);
        IPAdresse->setObjectName(QString::fromUtf8("IPAdresse"));
        IPAdresse->setGeometry(QRect(80, 70, 141, 31));
        label = new QLabel(connexion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 81, 31));

        retranslateUi(connexion);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, connexion, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, connexion, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(connexion);
    } // setupUi

    void retranslateUi(QDialog *connexion)
    {
        connexion->setWindowTitle(QCoreApplication::translate("connexion", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("connexion", "IP du Robot :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class connexion: public Ui_connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
