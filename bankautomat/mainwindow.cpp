#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton> //Kirjasto paino nappien käyttöön




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // LUODAAN KAIKKIEN MUIDEN LUOKKIEN OLIOT MAINWINDOWIIN, JOLLOIN NIIDEN AVAAMINEN TAPAHTUU AINA SAMAN LUOKAN KAUTTA.
    // KANNATTAA TSEKATA menu.h JA .cpp, KOSKA NIISTÄ SELVIÄÄ TARKEMMIN MITEN TIMER TOIMII SIGNAL/SLOT MENETELMÄLLÄ

    objPankki=new Menu;
    objDebit = new Valikko;
    //obj Credit = ...
    objNosto = new Nosto;
    objPadel = new Padelcoin;
    objSaldo = new Saldo;
    objTapahtumat = new Tilitapahtumat;

    //tässä alla luodaan timer ja määritetään SIGNAL/SLOT yhteydet, jotta ohjelma tietää milloin sulkea ikkuna.
    objTimer = new QTimer;// Timer-olion luominen. Itse timer käynnistetään alempana on_btnOK_clicked -funktiossa

// SIGNAL/SLOT YHTEYKSIEN MÄÄRITTELYT:

    connect(objTimer, SIGNAL(timeout()), this, SLOT(menuTimerSlotti())); //Timerin toimintaan vaadittava signaali, menuTimerSlotissa tapahtuu 30 sekunnin ajanotto
    QObject::connect(objPankki, SIGNAL(resetTimerDebit(int)), this, SLOT(resetTimer(int)));
    QObject::connect(objDebit, SIGNAL(resetTimerNosto(int)), this, SLOT(resetTimer(int)));
    QObject::connect(objDebit, SIGNAL(resetTimerPadel(int)), this, SLOT(resetTimer(int)));
    QObject::connect(objDebit, SIGNAL(resetTimerSaldo(int)), this, SLOT(resetTimer(int)));
    QObject::connect(objDebit, SIGNAL(resetTimerTapahtumat(int)), this, SLOT(resetTimer(int)));
    QObject::connect(objDebit, SIGNAL(resetTimerUlos(int)), this, SLOT(resetTimer(int)));
    connect(this, SIGNAL(aikaLoppu()), objPankki, SLOT(aikaMeni()));    //pohjustetaan MainWindown aikaLoppu() signaalin yhteys menu-ikkunan aikaMeni() slottiin
    connect(objPankki, SIGNAL(palaaMenuun()), this, SLOT(menuHuudettu()));

    timerCounter = 0;                                                   //alustetaan ajan laskenta lähtemään nollasta


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

    QString Seppo = json["ID_numero"].toString();
     qDebug()<<Seppo; //Tällä saadaan tili ID_numero talteen ?

     objTimer->start(1000); //käynnistetään timer tässä, koska OK-painikkeen painamisen jälkeen siirrytään ensimmäiseen kellotettavaan ikkunaan


}
void MainWindow::loginSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();


    qDebug()<<response_data;
    if(response_data=="true"){
        qDebug()<<"Oikea tunnus ...avaa form";
        objPankki->show();
    }
    else {
        ui->Display1->setText("");
        ui->Display2->setText("");
    }
}

void MainWindow::menuTimerSlotti()
{
    timerCounter++; //timerCounter-muuttujan arvo kasvaa yhdellä joka sekunti
    qDebug()<<timerCounter;
    if(timerCounter == 5) // kun timerCounter saavuttaa arvon 30 sek, (tai tässä testimielessä 5 sek)
    {
        emit aikaLoppu();   //niin aikaLoppu() -signaali lähetetään menu-luokan slottiin
        objTimer->stop();
        timerCounter = 0;
    }
}

void MainWindow::resetTimer(int jokuIkkuna) //MUIDEN LUOKKIEN FUNKTIOISSA LÄHETETÄÄN SIGNAALIN MUKANA MUUTTUJA, JONKA ARVO MÄÄRITTÄÄ MIKÄ IKKUNA AUKAISTAAN
{
    timerCounter = 0;
    if(jokuIkkuna == 1)  //esimerkiksi tässä, menu-luokan on_btnDebit_clicked() -funktio lähettää signaalin mukana arvon 1, joka
    {                    //menee jokuIkkuna -muuttujaan. jokuIkkuna -muuttujan arvo määrittää mitä tässä funktiossa tehdään.
        objPankki->close();
        objDebit->show();
        objTimer->start();
    }
    if(jokuIkkuna == 2)
    {
        objPankki->close();
        //objCredit->show();
        objTimer->start();
    }
    if(jokuIkkuna == 3)
    {
        objDebit->close();
        objNosto->show();
        objTimer->start();
    }
    if(jokuIkkuna == 4)
    {
        objDebit->close();
        objPadel->show();
        objTimer->start();
    }
    if(jokuIkkuna == 5)
    {
        objDebit->close();
        objSaldo->show();
        objTimer->start();
    }
    if(jokuIkkuna == 6)
    {
        objDebit->close();
        objTapahtumat->show();
        objTimer->start();
    }
    if(jokuIkkuna == 7)
    {
        objDebit->close();
        objTimer->stop();
    }

}

void MainWindow::menuHuudettu() //MENU-LUOKKA LÄHETTÄÄ SIGNAALIN TÄHÄN SLOTTIIN. IHAN SAMA MIKÄ IKKUNA AUKI, KAIKKI SULKEUTUU KUN AIKA ON KULUNUT.
{
    objPankki->close();
    objDebit->close();
    objNosto->close();
    objPadel->close();
    objSaldo->close();
    objTapahtumat->close();
}






