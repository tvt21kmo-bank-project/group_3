#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objPankki=new Valikko;

}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
    delete objPankki;
    objPankki=nullptr;
}


void MainWindow::on_btnMinus_clicked()
{

     ui->Display1->setText("-");
      ui->Display2->setText("-");
}


void MainWindow::on_btn0_clicked()
{

}


void MainWindow::on_btnPlus_clicked()
{

}


void MainWindow::on_btn1_clicked()
{

}


void MainWindow::on_btn2_clicked()
{

}


void MainWindow::on_btn3_clicked()
{

}


void MainWindow::on_btn4_clicked()
{

}


void MainWindow::on_btn5_clicked()
{

}


void MainWindow::on_btn6_clicked()
{

}


void MainWindow::on_btn7_clicked()
{

}


void MainWindow::on_btn8_clicked()
{

}


void MainWindow::on_btn9_clicked()
{

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


    }
    else {
        ui->Display1->setText("");
        ui->Display2->setText("");
        qDebug()<<"tunnus ja salasana ei täsmää";
    }
}


void MainWindow::on_btnRightArrow_clicked()
{

}


void MainWindow::on_btnStop_clicked()
{

}

