#include "padelcoin.h"
#include "ui_padelcoin.h"

Padelcoin::Padelcoin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Padelcoin)
{
    ui->setupUi(this);
}

Padelcoin::~Padelcoin()
{
    delete ui;
}

void Padelcoin::CoinKoti(const QString &Taalasmaa)
{
    PadelId = Taalasmaa;
    qDebug()<<PadelId;

    QJsonObject json;
    QString site_url="http://localhost:3000/tilit/" + PadelId;
    QString credentials="pankki_admin:bosspankki";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    PadelManager = new QNetworkAccessManager(this);
    connect(PadelManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(PadelKoti(QNetworkReply*)));
    reply = PadelManager->get(request);
}

void Padelcoin::PadelKoti(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString hattu;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    hattu+=QString::number(json_obj["Padelcoin"].toDouble());

    PadelTulos = hattu;
    PadelArvo = "0.00005€";

    qDebug()<<PadelTulos;
    ui->txtPadel->setText("Padelcoin saldosi on : " + PadelTulos + "\r" + "Padelcoinin tämän hetkinen arvo:" + PadelArvo + "\r"
                          + "Senkin Klovni");
}
}

void Padelcoin::on_btnMenu_clicked()
{
    timerNmbr = 9;
       emit resetTimerPadelistaValikkoon(timerNmbr);
}

