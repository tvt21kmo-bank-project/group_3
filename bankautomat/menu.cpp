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

