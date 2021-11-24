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

void idtilit_tulostus::Hae(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
     QString json = response_data;
    //QJsonObject json = response_data;
    QString site_url="http://localhost:3000/asiakas/" + Sepi;
    QString credentials="pankki_admin:bosspankki";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    tulosta_tiedot = new QNetworkAccessManager(this);
    reply = tulosta_tiedot->get(request);
    Sepi = json;
    qDebug()<<Sepi;


    ui->txtTiedot->setText(Sepi);
    reply->deleteLater();

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

