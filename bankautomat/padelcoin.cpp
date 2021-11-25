#include "padelcoin.h"
#include "ui_padelcoin.h"

Padelcoin::Padelcoin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Padelcoin)
{
    ui->setupUi(this);
}

Padelcoin::~Padelcoin()
{
    delete ui;
}

void Padelcoin::CoinKoti(const QString &Sepi)
{
    PadelId = Sepi;
    qDebug()<<PadelId;
}

void Padelcoin::PadelKoti(QNetworkReply *reply)
{

}

void Padelcoin::on_btnMenu_clicked()
{
    timerNmbr = 9;
       emit resetTimerPadelistaValikkoon(timerNmbr);
}

