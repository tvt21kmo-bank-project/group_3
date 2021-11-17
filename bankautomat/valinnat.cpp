#include "valinnat.h"
#include "ui_valinnat.h"

Valinnat::Valinnat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Valinnat)
{
    ui->setupUi(this);
}

Valinnat::~Valinnat()
{
    delete ui;
}
