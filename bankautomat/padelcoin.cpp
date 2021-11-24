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

void Padelcoin::on_btnMenu_clicked()
{
    timerNmbr = 9;
    emit resetTimerPadelistaValikkoon(timerNmbr);
}

