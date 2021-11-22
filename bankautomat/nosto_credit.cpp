#include "nosto_credit.h"
#include "ui_nosto_credit.h"

Nosto_Credit::Nosto_Credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto_Credit)
{
    ui->setupUi(this);
}

Nosto_Credit::~Nosto_Credit()
{
    delete ui;
}
