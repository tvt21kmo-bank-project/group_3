#include "saldo.h"
#include "ui_saldo.h"

Saldo::Saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Saldo)
{
    ui->setupUi(this);
}

Saldo::~Saldo()
{
    delete ui;
}

void Saldo::SaldoKoti(const QString &Taalasmaa)
{
    SaldoId =Taalasmaa;
   qDebug()<<SaldoId;

    QJsonObject json; //luodaan JSON objekti ja lisätään data
    QString site_url="http://localhost:3000/tilit/" + SaldoId;
    QString credentials="pankki_admin:bosspankki";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    saldoManager = new QNetworkAccessManager(this);
    connect(saldoManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(SaldoTulostus(QNetworkReply*)));
    reply = saldoManager->get(request);

}

void Saldo::SaldoTulostus(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString hattu;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    hattu+=QString::number(json_obj["Saldo"].toDouble());
    Viikset = hattu;
    ui->txtSaldo->setText(Viikset + "$");
    qDebug()<<"LOL"<<Viikset;
}
}
void Saldo::on_btnMenu_clicked()
{
    timerNmbr = 10;
       emit resetTimerSaldostaValikkoon(timerNmbr);
}

