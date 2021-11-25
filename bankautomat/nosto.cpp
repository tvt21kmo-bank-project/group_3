#include "nosto.h"
#include "ui_nosto.h"
#include<QPushButton> //Kirjasto paino nappien käyttöön



Nosto::Nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);
    ui->lblkayttaja->setText("Tähän pitäisi tulostua käyttäjän nimi");


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
    ui=nullptr;
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





void Nosto::on_btnNosta_clicked()
{

}

/*void Nosto::debitSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data == "1"){ //kun serveri/data vastaa 1, niin siirto onnistui
        ui->label_nostoinfo->setText("Nosto onnistui");

    }
    else { //jos ei tule numeroa 1, niin siirto ei onnistunut ja tulostetaan se esille
        ui->label_nostoinfo->setText("Siirto epäonnistui, kortilla ei ole tarpeeksi katetta");
}}
*/
