/********************************************************************************
** Form generated from reading UI file 'valikko_credit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIKKO_CREDIT_H
#define UI_VALIKKO_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Valikko_Credit
{
public:
    QPushButton *btnSaldo;
    QPushButton *btnNosto;
    QPushButton *btnTilitapahtumat;
    QPushButton *btnUlos;

    void setupUi(QDialog *Valikko_Credit)
    {
        if (Valikko_Credit->objectName().isEmpty())
            Valikko_Credit->setObjectName(QString::fromUtf8("Valikko_Credit"));
        Valikko_Credit->resize(671, 518);
        btnSaldo = new QPushButton(Valikko_Credit);
        btnSaldo->setObjectName(QString::fromUtf8("btnSaldo"));
        btnSaldo->setGeometry(QRect(60, 330, 241, 91));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSaldo->sizePolicy().hasHeightForWidth());
        btnSaldo->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(22);
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
        btnNosto = new QPushButton(Valikko_Credit);
        btnNosto->setObjectName(QString::fromUtf8("btnNosto"));
        btnNosto->setGeometry(QRect(420, 160, 241, 91));
        sizePolicy.setHeightForWidth(btnNosto->sizePolicy().hasHeightForWidth());
        btnNosto->setSizePolicy(sizePolicy);
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
        btnTilitapahtumat = new QPushButton(Valikko_Credit);
        btnTilitapahtumat->setObjectName(QString::fromUtf8("btnTilitapahtumat"));
        btnTilitapahtumat->setGeometry(QRect(60, 160, 241, 91));
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
        btnUlos = new QPushButton(Valikko_Credit);
        btnUlos->setObjectName(QString::fromUtf8("btnUlos"));
        btnUlos->setGeometry(QRect(420, 330, 241, 91));
        sizePolicy.setHeightForWidth(btnUlos->sizePolicy().hasHeightForWidth());
        btnUlos->setSizePolicy(sizePolicy);
        btnUlos->setFont(font);
        btnUlos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(Valikko_Credit);

        QMetaObject::connectSlotsByName(Valikko_Credit);
    } // setupUi

    void retranslateUi(QDialog *Valikko_Credit)
    {
        Valikko_Credit->setWindowTitle(QCoreApplication::translate("Valikko_Credit", "Dialog", nullptr));
        btnSaldo->setText(QCoreApplication::translate("Valikko_Credit", "Saldo", nullptr));
        btnNosto->setText(QCoreApplication::translate("Valikko_Credit", "Nosto", nullptr));
        btnTilitapahtumat->setText(QCoreApplication::translate("Valikko_Credit", "Tilitapahtumat", nullptr));
        btnUlos->setText(QCoreApplication::translate("Valikko_Credit", "Kirjaudu ulos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Valikko_Credit: public Ui_Valikko_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIKKO_CREDIT_H
