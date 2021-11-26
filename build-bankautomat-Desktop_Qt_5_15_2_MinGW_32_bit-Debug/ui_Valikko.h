/********************************************************************************
** Form generated from reading UI file 'Valikko.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIKKO_H
#define UI_VALIKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Valikko
{
public:
    QPushButton *btnNosto;
    QPushButton *btnTilitapahtumat;
    QPushButton *btnPadelCoin;
    QPushButton *btnSaldo;
    QPushButton *btnULos;
    QLabel *lblTervehdys;
    QLabel *lblTervehdys_2;

    void setupUi(QDialog *Valikko)
    {
        if (Valikko->objectName().isEmpty())
            Valikko->setObjectName(QString::fromUtf8("Valikko"));
        Valikko->resize(818, 428);
        btnNosto = new QPushButton(Valikko);
        btnNosto->setObjectName(QString::fromUtf8("btnNosto"));
        btnNosto->setGeometry(QRect(380, 190, 241, 91));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnNosto->sizePolicy().hasHeightForWidth());
        btnNosto->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(22);
        btnNosto->setFont(font);
        btnNosto->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"  background-color:  #C0C0C0;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"	color: black;\n"
"}\342\231\243\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"  background-color:  #808080;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"	color: black;\n"
"}\342\231\243"));
        btnTilitapahtumat = new QPushButton(Valikko);
        btnTilitapahtumat->setObjectName(QString::fromUtf8("btnTilitapahtumat"));
        btnTilitapahtumat->setGeometry(QRect(380, 70, 241, 91));
        sizePolicy.setHeightForWidth(btnTilitapahtumat->sizePolicy().hasHeightForWidth());
        btnTilitapahtumat->setSizePolicy(sizePolicy);
        btnTilitapahtumat->setFont(font);
        btnTilitapahtumat->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"  background-color:  #C0C0C0;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"	color: black;\n"
"}\342\231\243\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"  background-color:  #808080;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"	color: black;\n"
"}\342\231\243"));
        btnPadelCoin = new QPushButton(Valikko);
        btnPadelCoin->setObjectName(QString::fromUtf8("btnPadelCoin"));
        btnPadelCoin->setGeometry(QRect(70, 70, 241, 91));
        sizePolicy.setHeightForWidth(btnPadelCoin->sizePolicy().hasHeightForWidth());
        btnPadelCoin->setSizePolicy(sizePolicy);
        btnPadelCoin->setFont(font);
        btnPadelCoin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"  background-color:  #C0C0C0;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"	color: black;\n"
"}\342\231\243\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"  background-color:  #808080;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"	color: black;\n"
"}\342\231\243"));
        btnSaldo = new QPushButton(Valikko);
        btnSaldo->setObjectName(QString::fromUtf8("btnSaldo"));
        btnSaldo->setGeometry(QRect(70, 190, 241, 91));
        sizePolicy.setHeightForWidth(btnSaldo->sizePolicy().hasHeightForWidth());
        btnSaldo->setSizePolicy(sizePolicy);
        btnSaldo->setFont(font);
        btnSaldo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"  background-color:  #C0C0C0;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"	color: black;\n"
"}\342\231\243\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"  background-color:  #808080;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"	color: black;\n"
"}\342\231\243"));
        btnULos = new QPushButton(Valikko);
        btnULos->setObjectName(QString::fromUtf8("btnULos"));
        btnULos->setGeometry(QRect(220, 310, 241, 91));
        sizePolicy.setHeightForWidth(btnULos->sizePolicy().hasHeightForWidth());
        btnULos->setSizePolicy(sizePolicy);
        btnULos->setFont(font);
        btnULos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"  background-color:  #C0C0C0;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"	color: black;\n"
"}\342\231\243\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"  background-color:  #808080;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"	color: black;\n"
"}\342\231\243"));
        lblTervehdys = new QLabel(Valikko);
        lblTervehdys->setObjectName(QString::fromUtf8("lblTervehdys"));
        lblTervehdys->setGeometry(QRect(110, 10, 301, 31));
        QFont font1;
        font1.setPointSize(12);
        lblTervehdys->setFont(font1);
        lblTervehdys_2 = new QLabel(Valikko);
        lblTervehdys_2->setObjectName(QString::fromUtf8("lblTervehdys_2"));
        lblTervehdys_2->setGeometry(QRect(510, 10, 261, 31));
        lblTervehdys_2->setFont(font1);

        retranslateUi(Valikko);

        QMetaObject::connectSlotsByName(Valikko);
    } // setupUi

    void retranslateUi(QDialog *Valikko)
    {
        Valikko->setWindowTitle(QCoreApplication::translate("Valikko", "Dialog", nullptr));
        btnNosto->setText(QCoreApplication::translate("Valikko", "Nosto", nullptr));
        btnTilitapahtumat->setText(QCoreApplication::translate("Valikko", "Tilitapahtumat", nullptr));
        btnPadelCoin->setText(QCoreApplication::translate("Valikko", "Padelcoin", nullptr));
        btnSaldo->setText(QCoreApplication::translate("Valikko", "Saldo", nullptr));
        btnULos->setText(QCoreApplication::translate("Valikko", "Kirjaudu ulos", nullptr));
        lblTervehdys->setText(QCoreApplication::translate("Valikko", "TextLabel", nullptr));
        lblTervehdys_2->setText(QCoreApplication::translate("Valikko", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Valikko: public Ui_Valikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIKKO_H
