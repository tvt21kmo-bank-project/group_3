#include "idtilit_tulostus.h"
#include "ui_idtilit_tulostus.h"

idtilit_tulostus::idtilit_tulostus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::idtilit_tulostus)
{
    ui->setupUi(this);
    connect(this, SIGNAL(signalKirjautuminen(const QString &)),this, SLOT(Ismo(const QString &)));
}

idtilit_tulostus::~idtilit_tulostus()
{
    delete ui;
}

void idtilit_tulostus::Ismo(const QString &Taalasmaa)
{
    Kari = Taalasmaa;
    //qDebug()<<Kari;
}
void idtilit_tulostus::on_btnHaeTiedot_clicked()
{
    QJsonObject json;
    QString site_url="http://localhost:3000/kortti/" + Kari;
    QString credentials="pankki_admin:bosspankki";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
         tulosta_tiedot = new QNetworkAccessManager(this);
    connect(tulosta_tiedot, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(Hae(QNetworkReply*)));
    reply = tulosta_tiedot->get(request);

      //qDebug()<<tulosta_tiedot;
    //Sepi=json["idasiakas"].toString();
}

void idtilit_tulostus::Hae(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString hattu;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    hattu+=QString::number(json_obj["idasiakas"].toInt());
    Sepi =hattu;
    QJsonObject json;
    QString site_url="http://localhost:3000/asiakas/" + Sepi;
    QString credentials="pankki_admin:bosspankki";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    tulosta_tiedot = new QNetworkAccessManager(this);
    connect(tulosta_tiedot, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(Nayta(QNetworkReply*)));
    vastaa = tulosta_tiedot->get(request);


    }


   // vastaa->deleteLater();

}



void idtilit_tulostus::Nayta(QNetworkReply *vastaa)
{

    QByteArray response_data=vastaa->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    qDebug()<<json_doc;
    QString Nimi=json_doc["idasiakas"].toString();
    ui->txtTiedot->setText(Nimi);
}




