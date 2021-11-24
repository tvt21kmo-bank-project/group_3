#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);

}

Nosto::~Nosto()
{
    delete ui;
}

void Nosto::on_btnMenu_clicked()
{
    timerNmbr = 8;
    emit resetTimerNostostaValikkoon(timerNmbr);
}


void Nosto::on_btnNosta_clicked()
{

}


void Nosto::on_btn500_clicked()
{

}


void Nosto::on_btn200_clicked()
{

}


void Nosto::on_btn100_clicked()
{

}


void Nosto::on_btn60_clicked()
{

}


void Nosto::on_btn40_clicked()
{

}


void Nosto::on_btn20_clicked()
{

}

