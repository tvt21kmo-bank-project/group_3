#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);

  ui->lblInfo->setText("");
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
    //qDebug()<<NostoNimi;
    ui->lblkayttaja->setText(NostoNimi);
}

void Nosto::IDKoti(const QString &Sepi)
{
    NostoId = Sepi;
    //qDebug()<<NostoId;
    //ui->lblkayttaja_2->setText(NostoId);
}

void Nosto::NostoLOL(const QString &Taalasmaa)
{
     NostoTili = Taalasmaa;
}



void Nosto::maara_painettu()
{
    QPushButton* button1 = (QPushButton*)sender(); //Luodaan QPushbutton olio


    double Numero;
   //Double muuttuja jotta voidaan muuttaa Qstring arvo Double muotoon että Qt tajuaa laittaa seuraavan numeron äskeisen perään eri säilyttää arvon ruudulla
    QString Uusi_numero;

    Numero =  button1->text().toDouble();

    Uusi_numero = QString::number(Numero);


    Numerolol = Uusi_numero;

    ui->Debitdisplay->setText(Numerolol);
    qDebug()<<Uusi_numero;
}

void Nosto::on_btnMenu_clicked()
{
       timerNmbr = 8;
       emit resetTimerNostostaValikkoon(timerNmbr);

}
void Nosto::on_btnNosta_clicked()
{

    qDebug()<<Mauri<<NostoTili;
   QJsonObject json; //luodaan JSON objekti ja lisätään data
   json.insert("id1",NostoTili);
   json.insert("id2", Mauri);
   if (Numerolol > 0){
        json.insert("summa",Numerolol);
   }
   else {
       json.insert("summa", ui->muuSumma->text());

   }

   QString site_url="http://localhost:3000/bank/debit_transfer";
   QString credentials="pankki_admin:bosspankki";
   QNetworkRequest request((site_url));
   request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
   QByteArray data = credentials.toLocal8Bit().toBase64();
   QString headerData = "Basic " + data;
   request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
   debitManager = new QNetworkAccessManager(this);
   connect(debitManager, SIGNAL(finished (QNetworkReply*)),
   this, SLOT(TiliKoti(QNetworkReply*)));
   reply = debitManager->post(request, QJsonDocument(json).toJson());

}



void Nosto::TiliKoti(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data == "1"){
        ui->lblInfo->setText("Nosto onnistui");

    }
    else {
        ui->lblInfo->setText("Nosto epäonnistui");

    }
    Numerolol = ("");
    ui->Debitdisplay->setText("");
    ui->muuSumma->setText("");
}



