#include "idtilit_tulostus.h"
#include "ui_idtilit_tulostus.h"

idtilit_tulostus::idtilit_tulostus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::idtilit_tulostus)
{
    ui->setupUi(this);
}

idtilit_tulostus::~idtilit_tulostus()
{
    delete ui;
}

void idtilit_tulostus::Hae(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString tiedot;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    tiedot+=QString::number(json_obj["idtilit"].toInt())+","+json_obj["idasiakas"].toString()+",\r";
    }
    qDebug()<<tiedot;
    ui->txtTiedot->setText(tiedot);
    reply->deleteLater();
    tulosta_tiedot->deleteLater();
}

void idtilit_tulostus::on_btnHaeTiedot_clicked()
{
    QString site_url="http://localhost:3000/ID_numero";
    QString credentials="pankki_admin:bosspankki";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    tulosta_tiedot = new QNetworkAccessManager(this);
    connect(tulosta_tiedot, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(getHae(QNetworkReply*)));
    reply = tulosta_tiedot->get(request);
}

