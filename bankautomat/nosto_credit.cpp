#include "nosto_credit.h"
#include "ui_nosto_credit.h"

Nosto_Credit::Nosto_Credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto_Credit)
{
    ui->setupUi(this);

    //Napit ei jostain syystä vielä toimi mutta muu summalla toimii hyvin
    connect(ui->btn20_2,SIGNAL(released()),this,SLOT(maara_painettu_2()));
    connect(ui->btn40_2,SIGNAL(released()),this,SLOT(maara_painettu_2()));
    connect(ui->btn60_2,SIGNAL(released()),this,SLOT(maara_painettu_2()));
    connect(ui->btn100_2,SIGNAL(released()),this,SLOT(maara_painettu_2()));
    connect(ui->btn200_2,SIGNAL(released()),this,SLOT(maara_painettu_2()));
    connect(ui->btn500_2,SIGNAL(released()),this,SLOT(maara_painettu_2()));

     ui-> CreditDisplay->setClearButtonEnabled(true);//Delete nappi


}

Nosto_Credit::~Nosto_Credit()
{
    delete ui;
}

void Nosto_Credit::NimenCreditKoti(const QString &Jarmo)
{
    NostoCreditNimi = Jarmo;
    ui->lblkayttaja_2->setText(NostoCreditNimi);

}

void Nosto_Credit::IDCreditKoti(const QString &Sepi)
{
    NostoCreditId = Sepi;
}



void Nosto_Credit::NostoCreditLOL(const QString &Taalasmaa)
{
    NostoCreditTili = Taalasmaa;
}




void Nosto_Credit::maara_painettu_2()
{
    QPushButton* button2 = (QPushButton*)sender(); //Luodaan QPushbutton olio


    double Numero2;
   //Double muuttuja jotta voidaan muuttaa Qstring arvo Double muotoon että Qt tajuaa laittaa seuraavan numeron äskeisen perään eri säilyttää arvon ruudulla
    QString Uusi_numero2;

    Numero2 =(ui->CreditDisplay->text() + button2->text()).toDouble();

    Uusi_numero2 = QString::number(Numero2);

    NumeroCreditlol = Uusi_numero2;
    ui->CreditDisplay->setText(NumeroCreditlol);
}
void Nosto_Credit::on_btnMenu_2_clicked()
{
    timerNmbr= 16;
    resetTimerCreditNostostaValikkoon(timerNmbr);
}

void Nosto_Credit::on_btnNosta_2_clicked()
{
    qDebug()<<CreditMauri<<NostoCreditTili;
   QJsonObject json; //luodaan JSON objekti ja lisätään data
   json.insert("id1",NostoCreditTili);
   json.insert("id2", CreditMauri);
   if (NumeroCreditlol > 0){
        json.insert("summa",NumeroCreditlol);
   }
   else {
       json.insert("summa", ui->muuSumma->text());

   }

   QString site_url="http://localhost:3000/bank/credit_transfer";
  QString credentials="pankki_admin:bosspankki";
   QNetworkRequest request((site_url));
   request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
   QByteArray data = credentials.toLocal8Bit().toBase64();
   QString headerData = "Basic " + data;
   request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
   creditManager = new QNetworkAccessManager(this);
   connect(creditManager, SIGNAL(finished (QNetworkReply*)),
   this, SLOT(TiliCreditKoti(QNetworkReply*)));
   reply = creditManager->post(request, QJsonDocument(json).toJson());
}



void Nosto_Credit::TiliCreditKoti(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data == "1"){
        ui->lblCredit->setText("Nosto onnistui");

    }
    else {
        ui->lblCredit->setText("Nosto epäonnistui");

    }
    NumeroCreditlol = ("");
    ui->CreditDisplay->setText("");
    ui->muuSumma->setText("");
}



