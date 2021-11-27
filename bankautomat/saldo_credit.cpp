#include "saldo_credit.h"
#include "ui_saldo_credit.h"

Saldo_credit::Saldo_credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Saldo_credit)
{
    ui->setupUi(this);
}

Saldo_credit::~Saldo_credit()
{
    delete ui;
}

void Saldo_credit::on_btnMenu_clicked()
{
    timerNmbr= 17;
     resetTimerCreditSaldoValikkoon(timerNmbr);;
}

