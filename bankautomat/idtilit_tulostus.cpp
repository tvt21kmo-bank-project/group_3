#include "idtilit_tulostus.h"
#include "ui_idtilit_tulostus.h"

idtilit_tulostus::idtilit_tulostus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::idtilit_tulostus)
{
    ui->setupUi(this);
    //connect(this, SIGNAL(signalKirjautuminen(const QString &)),this, SLOT(Ismo(const QString &)));
}

idtilit_tulostus::~idtilit_tulostus()
{
    delete ui;
}
// TÄYTYY SIIRTÄÄ KOKO PASKA MAINWINDOW.cpp:hen

void idtilit_tulostus::on_btnHaeTiedot_clicked()
{


      //qDebug()<<tulosta_tiedot;
    //Sepi=json["idasiakas"].toString();
}





void idtilit_tulostus::Nayta(QNetworkReply *vastaa)
{




    /*
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    qDebug()<<json_doc;

    QString Nimi=json_doc["idasiakas"].toString();
    */
}




