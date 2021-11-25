#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);


    connect(ui->btn20,SIGNAL(released()),this,SLOT(maara_painettu()));
    connect(ui->btn40,SIGNAL(released()),this,SLOT(maara_painettu()));
    connect(ui->btn60,SIGNAL(released()),this,SLOT(maara_painettu()));
    connect(ui->btn100,SIGNAL(released()),this,SLOT(maara_painettu()));
    connect(ui->btn200,SIGNAL(released()),this,SLOT(maara_painettu()));
    connect(ui->btn500,SIGNAL(released()),this,SLOT(maara_painettu()));

     ui-> Debitdisplay->setClearButtonEnabled(true);//Delete nappi

}

Nosto::~Nosto()
{
    delete ui;
}

void Nosto::NimenKoti(const QString &Jarmo)
{
    NostoNimi = Jarmo;
    qDebug()<<NostoNimi;
    ui->lblkayttaja->setText(NostoNimi);
}

void Nosto::maara_painettu()
{
    QPushButton* button1 = (QPushButton*)sender(); //Luodaan QPushbutton olio


    double Numero;
   //Double muuttuja jotta voidaan muuttaa Qstring arvo Double muotoon että Qt tajuaa laittaa seuraavan numeron äskeisen perään eri säilyttää arvon ruudulla
    QString Uusi_numero;

    Numero =(ui->Debitdisplay->text() + button1->text()).toDouble();

    Uusi_numero = QString::number(Numero);

    ui->Debitdisplay->setText(Uusi_numero);
}

void Nosto::on_btnMenu_clicked()
{
       timerNmbr = 8;
       emit resetTimerNostostaValikkoon(timerNmbr);
}

void Nosto::on_btnNosta_clicked()
{

}

