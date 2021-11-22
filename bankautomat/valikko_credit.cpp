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
