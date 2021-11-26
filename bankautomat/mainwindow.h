#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Valikko.h"
#include "menu.h"

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QTimer>
#include <QFile>
#include <QTextStream>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void numero_painettu();
    void numero_painettu_2();//Slotti luotu numero näppäimien painamiselle//
    //void Delete();
    void on_btnOK_clicked();
    void loginSlot (QNetworkReply *reply);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;


    //Network managerit
   QNetworkAccessManager *loginManager;
   QNetworkAccessManager *tulosta_tiedot;
   QNetworkAccessManager *tulosta_Nikkinen;


   //Network vastaukset
   QNetworkReply *reply;
   QNetworkReply *nayta_tiedot;
   QNetworkReply *nayta_Nikkinen;
   QNetworkReply *vastaa;

    //Luokka oliot
   idtilit_tulostus *objtilit;
   Valikko *objDebit;
   Nosto *objNosto;
   Padelcoin *objPadel;
   Saldo *objSaldo;
   Tilitapahtumat *objTapahtumat;
   Menu *objPankki;


   //Timer hommia
   QTimer *objTimer;
   short timerCounter;

   //QString oliot
   QString Taalasmaa;
   QString Lasse;
   QString Kari;
   QString Sepi;
   QString Jarmo;
   QString Nikkinen;
   QString Kuula_Nikkinen;

public slots:
    void menuTimerSlotti();
    void resetTimer(int);
    void menuHuudettu();
    void IsmonValinta(const QString &);
    void Delismo(const QString &);
    void MustavaaraYhtio(QNetworkReply *reply);
    void TaalasYhtio(QNetworkReply *reply);
      void NilkkiNikkinen(QNetworkReply *reply);

signals:
    void aikaLoppu();
    void signalKirjautuminen(const QString &);
    void signalLakki(const QString &);
    void signalJarmo(const QString &);
    void signalSepi(const QString &);
    void signalRosvo(const QString &);



};
#endif // MAINWINDOW_H
