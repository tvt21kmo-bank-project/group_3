#include "Valikko.h"
#include "ui_Valikko.h"

Valikko::Valikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Valikko)
{
    ui->setupUi(this);
    ui->lblTervehdys->setText("Tähän pitäisi tulostua käyttäjän nimi");
    objNosto = new Nosto;
    objPadel = new Padelcoin;
    objSaldo = new Saldo;
    objTapahtumat = new Tilitapahtumat;

}

Valikko::~Valikko()
{
    delete ui;
}


void Valikko::on_btnNosto_clicked()
{
    objNosto->show();
    this->close();
}


void Valikko::on_btnPadelCoin_clicked()
{
    objPadel->show();
    this->close();
}


void Valikko::on_btnSaldo_clicked()
{
    objSaldo->show();
    this->close();
}


void Valikko::on_btnTilitapahtumat_clicked()
{
    objTapahtumat->show();
    this->close();
}

