#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    objCredit = new Valikko;
    objDebit = new Valikko;
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_btnDebit_clicked()
{
    objDebit->show();
    this->close();
}


void Menu::on_btnCredit_clicked()
{
    objCredit->show();
    this->close();
}

void Menu::aikaMeni() //aikaMeni on slotti, joka ottaa vastaan MainWindown menuTimerSlotin lähettämän signaalin kun 30 sekuntia on kulunut
{
    emit palaaMenuun(); //tässä vuorostaan lähtee signaali MainWindown menuHuudettu() -slottiin, jossa kutsutaan menu-ikkunan sulkemista
}

