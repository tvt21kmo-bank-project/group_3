#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton> //Kirjasto paino nappien käyttöön




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objPankki=new Menu;
//Käytetty Qt:n connect komentoa jolla voidaan yhdistää Signal ja slot.
//Signal released on Qt:n omasta QPushbutton kirjastosta joten sitä ei ole määritetty erikeen se tulkitsee kun nappi vapautetaan.
   connect(ui->btn0,SIGNAL(released()),this,SLOT(numero_painettu()));
   connect(ui->btn1,SIGNAL(released()),this,SLOT(numero_painettu()));
   connect(ui->btn2,SIGNAL(released()),this,SLOT(numero_painettu()));
   connect(ui->btn3,SIGNAL(released()),this,SLOT(numero_painettu()));
   connect(ui->btn4,SIGNAL(released()),this,SLOT(numero_painettu()));
   connect(ui->btn5,SIGNAL(released()),this,SLOT(numero_painettu()));
   connect(ui->btn6,SIGNAL(released()),this,SLOT(numero_painettu()));
   connect(ui->btn7,SIGNAL(released()),this,SLOT(numero_painettu()));
   connect(ui->btn8,SIGNAL(released()),this,SLOT(numero_painettu()));
   connect(ui->btn9,SIGNAL(released()),this,SLOT(numero_painettu()));

   ui->Display1->setClearButtonEnabled(true);//Delete nappi
   ui->Display2->setClearButtonEnabled(true);//Delete nappi
}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
    delete objPankki;
    objPankki=nullptr;
}

void MainWindow::numero_painettu()
{
 QPushButton* button = (QPushButton*)sender(); //Luodaan QPushbutton olio


 double Numero;
//Double muuttuja jotta voidaan muuttaa Qstring arvo Double muotoon että Qt tajuaa laittaa seuraavan numeron äskeisen perään eri säilyttää arvon ruudulla
 QString Uusi_numero;
  QString Uusi_numero2;
 //QString muuttuja, että saadaan Double arvo tulostettua QStringillä :D LOL

 Numero =(ui->Display1->text() + button->text()).toDouble();

 Uusi_numero = QString::number(Numero);

 ui->Display1->setText(Uusi_numero);

 Uusi_numero2 = QString::number(Numero);

 ui->Display2->setText(Uusi_numero2);
}



void MainWindow::on_btnOK_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("ID_numero",ui->Display1->text());
    json.insert("Pin",ui->Display2->text());
    QString site_url="http://localhost:3000/login";
    QString credentials="pankki_admin:bosspankki";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    loginManager = new QNetworkAccessManager(this);
    connect(loginManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(loginSlot(QNetworkReply*)));
    reply = loginManager->post(request, QJsonDocument(json).toJson());

}
void MainWindow::loginSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data=="true"){
        qDebug()<<"Oikea tunnus ...avaa form";
        objPankki->show();
        this->hide();

    }
    else {
        ui->Display1->setText("");
        ui->Display2->setText("");
        qDebug()<<"tunnus ja salasana ei täsmää";
    }
}




