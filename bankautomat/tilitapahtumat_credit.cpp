#include "tilitapahtumat_credit.h"
#include "ui_tilitapahtumat_credit.h"

tilitapahtumat_credit::tilitapahtumat_credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tilitapahtumat_credit)
{
    ui->setupUi(this);
}

tilitapahtumat_credit::~tilitapahtumat_credit()
{
    delete ui;
}

void tilitapahtumat_credit::on_btnMenu_clicked()
{

}

