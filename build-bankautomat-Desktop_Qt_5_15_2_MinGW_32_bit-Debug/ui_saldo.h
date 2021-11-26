/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Saldo
{
public:
    QLabel *label;
    QPushButton *btnMenu;
    QTextEdit *txtSaldo;

    void setupUi(QDialog *Saldo)
    {
        if (Saldo->objectName().isEmpty())
            Saldo->setObjectName(QString::fromUtf8("Saldo"));
        Saldo->resize(1001, 504);
        QFont font;
        font.setPointSize(14);
        Saldo->setFont(font);
        label = new QLabel(Saldo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 40, 221, 16));
        label->setFont(font);
        btnMenu = new QPushButton(Saldo);
        btnMenu->setObjectName(QString::fromUtf8("btnMenu"));
        btnMenu->setGeometry(QRect(320, 320, 261, 51));
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
        txtSaldo = new QTextEdit(Saldo);
        txtSaldo->setObjectName(QString::fromUtf8("txtSaldo"));
        txtSaldo->setGeometry(QRect(240, 110, 421, 151));

        retranslateUi(Saldo);

        QMetaObject::connectSlotsByName(Saldo);
    } // setupUi

    void retranslateUi(QDialog *Saldo)
    {
        Saldo->setWindowTitle(QCoreApplication::translate("Saldo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Saldo", "Saldo", nullptr));
        btnMenu->setText(QCoreApplication::translate("Saldo", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Saldo: public Ui_Saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
