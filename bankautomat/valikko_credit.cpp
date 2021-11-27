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

void Valikko_Credit::JarmonCreditKoti(const QString &Jarmo)
{
    CreditRolf = Jarmo;
    ui->lblTervehdys->setText(CreditRolf);
}

void Valikko_Credit::SepinCreditKoti(const QString &Kuula_Nikkinen)
{
    CreditUlla = Kuula_Nikkinen;
    ui->lblTervehdys_2->setText(CreditUlla);
}

void Valikko_Credit::on_btnTilitapahtumat_clicked()
{
    timerNmbr = 12;
    emit resetTimerCreditTapahtumat(timerNmbr);

}
void Valikko_Credit::on_btnSaldo_clicked()
{
    timerNmbr = 13;
    emit resetTimerCreditSaldo(timerNmbr);
}
void Valikko_Credit::on_btnNosto_clicked()
{
    timerNmbr = 14;
    emit resetTimerCreditNosto(timerNmbr);
}

void Valikko_Credit::on_btnUlos_clicked()
{
    timerNmbr = 15;
    emit resetTimerCreditUlos(timerNmbr);
}






