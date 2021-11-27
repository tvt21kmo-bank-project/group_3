#include "tilitapahtumat_credit.h"
#include "ui_tilitapahtumat_credit.h"

tilitapahtumat_credit::tilitapahtumat_credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tilitapahtumat_credit)
{
    ui->setupUi(this);
}

tilitapahtumat_credit::~tilitapahtumat_credit()
{
    delete ui;
}

void tilitapahtumat_credit::TapahtumaCreditKoti(const QString &Taalasmaa)
{
    CreditTapahtumaId = Taalasmaa;
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    QString site_url="http://localhost:3000/tilitapahtumat/" + CreditTapahtumaId;
    QString credentials="pankki_admin:bosspankki";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    CreditTapahtumaManager = new QNetworkAccessManager(this);
    connect(CreditTapahtumaManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(TapahtumaCreditTulostus(QNetworkReply*)));
    reply = CreditTapahtumaManager->get(request);
}

void tilitapahtumat_credit::TapahtumaCreditTulostus(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString hattu;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    hattu += json_obj["Paivays"].toString()+ "  "+json_obj["Tapahtuma" ].toString()+ "  "+json_obj["Rahamaara"].toString()+"\r";
    CreditParta = hattu;

    ui->Display->setText(CreditParta );
}
}

void tilitapahtumat_credit::on_btnMenu_clicked()
{
    timerNmbr= 18;
     resetTimerCreditTapahtumastaValikkoon(timerNmbr);
}

