#include "nosto_credit.h"
#include "ui_nosto_credit.h"

Nosto_Credit::Nosto_Credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto_Credit)
{
    ui->setupUi(this);


    connect(ui->btn20_2,SIGNAL(released()),this,SLOT(maara_painettu()));
    connect(ui->btn40_2,SIGNAL(released()),this,SLOT(maara_painettu()));
    connect(ui->btn60_2,SIGNAL(released()),this,SLOT(maara_painettu()));
    connect(ui->btn100_2,SIGNAL(released()),this,SLOT(maara_painettu()));
    connect(ui->btn200_2,SIGNAL(released()),this,SLOT(maara_painettu()));
    connect(ui->btn500_2,SIGNAL(released()),this,SLOT(maara_painettu()));

     ui-> Debitdisplay2->setClearButtonEnabled(true);//Delete nappi


}

Nosto_Credit::~Nosto_Credit()
{
    delete ui;
}



void Nosto_Credit::on_btnNosta_2_clicked()
{

}

void Nosto_Credit::maara_painettu()
{
    QPushButton* button1 = (QPushButton*)sender(); //Luodaan QPushbutton olio


    double Numero;
   //Double muuttuja jotta voidaan muuttaa Qstring arvo Double muotoon että Qt tajuaa laittaa seuraavan numeron äskeisen perään eri säilyttää arvon ruudulla
    QString Uusi_numero;

    Numero =(ui->Debitdisplay2->text() + button1->text()).toDouble();

    Uusi_numero = QString::number(Numero);
}
