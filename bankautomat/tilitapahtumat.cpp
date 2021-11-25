#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"

Tilitapahtumat::Tilitapahtumat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tilitapahtumat)
{
    ui->setupUi(this);
}

Tilitapahtumat::~Tilitapahtumat()
{
    delete ui;
}

void Tilitapahtumat::on_btnMenu_clicked()
{
    timerNmbr = 11;
    emit resetTimerTapahtumistaValikkoon(timerNmbr);
}

void Tilitapahtumat::TapahtumaKoti(const QString &Taalasmaa)
{
    TapahtumaId = Taalasmaa;
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    QString site_url="http://localhost:3000/tilitapahtumat/" + TapahtumaId;
    QString credentials="pankki_admin:bosspankki";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    TapahtumaManager = new QNetworkAccessManager(this);
    connect(TapahtumaManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(TapahtumaTulostus(QNetworkReply*)));
    reply = TapahtumaManager->get(request);

}

void Tilitapahtumat::TapahtumaTulostus(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString hattu;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    hattu += json_obj["Paivays"].toString()+ "  "+json_obj["Tapahtuma" ].toString()+ "  "+json_obj["Rahamaara"].toString()+"\r";
    Parta = hattu;
    //ui->txtSaldo->setText(Viikset + "$");
    qDebug()<<"LOL parta"<<Parta;
    ui->Display->setText(Parta );
}
 }
