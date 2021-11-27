#include "valikko_credit.h"
#include "ui_valikko_credit.h"

Valikko_Credit::Valikko_Credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Valikko_Credit)
{
    ui->setupUi(this);
}

Valikko_Credit::~Valikko_Credit()
{
    delete ui;
}

void Valikko_Credit::on_btnTilitapahtumat_clicked()
{

}
void Valikko_Credit::on_btnSaldo_clicked()
{

}
void Valikko_Credit::on_btnNosto_clicked()
{

}

void Valikko_Credit::on_btnUlos_clicked()
{

}






