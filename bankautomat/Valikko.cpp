#include "Valikko.h"
#include "ui_Valikko.h"

Valikko::Valikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Valikko)
{
    ui->setupUi(this);
    connect(this, SIGNAL(signalKirjautuminen(const QString &)),this, SLOT(Pihlajakatu(const QString &)));

}

Valikko::~Valikko()
{
    delete ui;
}


void Valikko::on_btnNosto_clicked()
{
    timerNmbr = 3;
    emit resetTimerNosto(timerNmbr);
}


void Valikko::on_btnPadelCoin_clicked()
{
    timerNmbr = 4;
    emit resetTimerPadel(timerNmbr);
}


void Valikko::on_btnSaldo_clicked()
{
    timerNmbr = 5;
    emit resetTimerSaldo(timerNmbr);
}


void Valikko::on_btnTilitapahtumat_clicked()
{
    timerNmbr = 6;
    emit resetTimerTapahtumat(timerNmbr);
}


void Valikko::on_btnULos_clicked()
{
    timerNmbr = 7;
    emit resetTimerUlos(timerNmbr);
}




void Valikko::on_btnpenus_clicked()
{

    timerNmbr = 666;
    emit resetTimerUlos(timerNmbr);

}

void Valikko::Pihlajakatu(const QString &Taalasmaa)
{
   Ulla = Taalasmaa;
   ui->lblTervehdys->setText(Ulla);

}

