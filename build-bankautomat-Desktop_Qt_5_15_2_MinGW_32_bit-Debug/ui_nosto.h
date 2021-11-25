/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Nosto
{
public:
    QPushButton *btn20;
    QPushButton *btn40;
    QPushButton *btn60;
    QPushButton *btn100;
    QPushButton *btn200;
    QPushButton *btn500;
    QLineEdit *muuSumma;
    QPushButton *btnNosta;
    QLabel *label;
    QPushButton *btnMenu;
    QLineEdit *Debitdisplay;
    QLabel *lblDebit_nostosumma;
    QLabel *lblkayttaja;
    QLabel *lblkayttaja_2;

    void setupUi(QDialog *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QString::fromUtf8("Nosto"));
        Nosto->resize(895, 483);
        btn20 = new QPushButton(Nosto);
        btn20->setObjectName(QString::fromUtf8("btn20"));
        btn20->setGeometry(QRect(70, 82, 176, 31));
        btn20->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}\342\231\243QPushButton {\n"
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
""
                        "}\342\231\243"));
        btn40 = new QPushButton(Nosto);
        btn40->setObjectName(QString::fromUtf8("btn40"));
        btn40->setGeometry(QRect(70, 130, 176, 31));
        btn40->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}\342\231\243QPushButton {\n"
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
""
                        "}\342\231\243"));
        btn60 = new QPushButton(Nosto);
        btn60->setObjectName(QString::fromUtf8("btn60"));
        btn60->setGeometry(QRect(70, 180, 176, 31));
        btn60->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}\342\231\243QPushButton {\n"
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
""
                        "}\342\231\243"));
        btn100 = new QPushButton(Nosto);
        btn100->setObjectName(QString::fromUtf8("btn100"));
        btn100->setGeometry(QRect(340, 80, 176, 31));
        btn100->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}\342\231\243QPushButton {\n"
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
""
                        "}\342\231\243"));
        btn200 = new QPushButton(Nosto);
        btn200->setObjectName(QString::fromUtf8("btn200"));
        btn200->setGeometry(QRect(340, 130, 176, 31));
        btn200->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}\342\231\243QPushButton {\n"
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
""
                        "}\342\231\243"));
        btn500 = new QPushButton(Nosto);
        btn500->setObjectName(QString::fromUtf8("btn500"));
        btn500->setGeometry(QRect(340, 180, 176, 31));
        btn500->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}\342\231\243QPushButton {\n"
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
""
                        "}\342\231\243"));
        muuSumma = new QLineEdit(Nosto);
        muuSumma->setObjectName(QString::fromUtf8("muuSumma"));
        muuSumma->setGeometry(QRect(40, 360, 161, 31));
        btnNosta = new QPushButton(Nosto);
        btnNosta->setObjectName(QString::fromUtf8("btnNosta"));
        btnNosta->setGeometry(QRect(450, 430, 176, 31));
        btnNosta->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}\342\231\243QPushButton {\n"
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
""
                        "}\342\231\243"));
        label = new QLabel(Nosto);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 320, 151, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        btnMenu = new QPushButton(Nosto);
        btnMenu->setObjectName(QString::fromUtf8("btnMenu"));
        btnMenu->setGeometry(QRect(30, 430, 176, 41));
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
"}\342\231\243QPushButton {\n"
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
""
                        "}\342\231\243"));
        Debitdisplay = new QLineEdit(Nosto);
        Debitdisplay->setObjectName(QString::fromUtf8("Debitdisplay"));
        Debitdisplay->setGeometry(QRect(450, 360, 161, 31));
        Debitdisplay->setFont(font);
        Debitdisplay->setMaxLength(3);
        lblDebit_nostosumma = new QLabel(Nosto);
        lblDebit_nostosumma->setObjectName(QString::fromUtf8("lblDebit_nostosumma"));
        lblDebit_nostosumma->setGeometry(QRect(460, 320, 171, 21));
        lblDebit_nostosumma->setFont(font);
        lblkayttaja = new QLabel(Nosto);
        lblkayttaja->setObjectName(QString::fromUtf8("lblkayttaja"));
        lblkayttaja->setGeometry(QRect(100, 20, 331, 21));
        lblkayttaja->setFont(font);
        lblkayttaja_2 = new QLabel(Nosto);
        lblkayttaja_2->setObjectName(QString::fromUtf8("lblkayttaja_2"));
        lblkayttaja_2->setGeometry(QRect(230, 360, 151, 21));
        lblkayttaja_2->setFont(font);

        retranslateUi(Nosto);

        QMetaObject::connectSlotsByName(Nosto);
    } // setupUi

    void retranslateUi(QDialog *Nosto)
    {
        Nosto->setWindowTitle(QCoreApplication::translate("Nosto", "Dialog", nullptr));
        btn20->setText(QCoreApplication::translate("Nosto", "20", nullptr));
        btn40->setText(QCoreApplication::translate("Nosto", "40", nullptr));
        btn60->setText(QCoreApplication::translate("Nosto", "60", nullptr));
        btn100->setText(QCoreApplication::translate("Nosto", "100", nullptr));
        btn200->setText(QCoreApplication::translate("Nosto", "200", nullptr));
        btn500->setText(QCoreApplication::translate("Nosto", "500", nullptr));
        btnNosta->setText(QCoreApplication::translate("Nosto", "Nosta", nullptr));
        label->setText(QCoreApplication::translate("Nosto", "Muu summa:", nullptr));
        btnMenu->setText(QCoreApplication::translate("Nosto", "Menu", nullptr));
        lblDebit_nostosumma->setText(QCoreApplication::translate("Nosto", "Nostettava summa:", nullptr));
        lblkayttaja->setText(QCoreApplication::translate("Nosto", "TextLabel", nullptr));
        lblkayttaja_2->setText(QCoreApplication::translate("Nosto", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
