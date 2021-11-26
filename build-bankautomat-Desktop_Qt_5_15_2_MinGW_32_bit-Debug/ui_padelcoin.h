/********************************************************************************
** Form generated from reading UI file 'padelcoin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PADELCOIN_H
#define UI_PADELCOIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Padelcoin
{
public:
    QLineEdit *Display;
    QLabel *label;
    QPushButton *btnMenu;

    void setupUi(QDialog *Padelcoin)
    {
        if (Padelcoin->objectName().isEmpty())
            Padelcoin->setObjectName(QString::fromUtf8("Padelcoin"));
        Padelcoin->resize(776, 435);
        Display = new QLineEdit(Padelcoin);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(120, 80, 461, 171));
        label = new QLabel(Padelcoin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 30, 251, 20));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        btnMenu = new QPushButton(Padelcoin);
        btnMenu->setObjectName(QString::fromUtf8("btnMenu"));
        btnMenu->setGeometry(QRect(250, 310, 191, 41));
        btnMenu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(Padelcoin);

        QMetaObject::connectSlotsByName(Padelcoin);
    } // setupUi

    void retranslateUi(QDialog *Padelcoin)
    {
        Padelcoin->setWindowTitle(QCoreApplication::translate("Padelcoin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Padelcoin", "Padelcoin", nullptr));
        btnMenu->setText(QCoreApplication::translate("Padelcoin", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Padelcoin: public Ui_Padelcoin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PADELCOIN_H
