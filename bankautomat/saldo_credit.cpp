#include "saldo_credit.h"
#include "ui_saldo_credit.h"

Saldo_credit::Saldo_credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Saldo_credit)
{
    ui->setupUi(this);
}

Saldo_credit::~Saldo_credit()
{
    delete ui;
}

void Saldo_credit::on_btnMenu_clicked()
{
    timerNmbr= 17;
    resetTimerCreditSaldoValikkoon(timerNmbr);;
}

void Saldo_credit::SaldoCreditKoti(const QString &Taalasmaa)
{
    CreditSaldoId = Taalasmaa;

    QJsonObject json; //luodaan JSON objekti ja lisätään data
    QString site_url="http://localhost:3000/tilit/" + CreditSaldoId;
    QString credentials="pankki_admin:bosspankki";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    CreditSaldoManager = new QNetworkAccessManager(this);
    connect(CreditSaldoManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(SaldoCreditTulostus(QNetworkReply*)));
    reply = CreditSaldoManager->get(request);
}

void Saldo_credit::SaldoCreditTulostus(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString hattu;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    hattu+=QString::number(json_obj["Saldo"].toDouble());
    CreditViikset = hattu;
    ui->label_2->setText(CreditViikset + " " + "€");
}

}
