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
    void numero_painettu();//Slotti luotu numero näppäimien painamiselle//
    //void Delete();
    void on_btnOK_clicked();
    void loginSlot (QNetworkReply *reply);

private:
    Ui::MainWindow *ui;
   QNetworkAccessManager *loginManager;
   QNetworkReply *reply;
   Menu *objPankki;
   idtilit_tulostus *objtilit;
   Valikko *objDebit;
   Nosto *objNosto;
   Padelcoin *objPadel;
   Saldo *objSaldo;
   Tilitapahtumat *objTapahtumat;
   QTimer *objTimer;
   short timerCounter;
   QString Taalasmaa;

public slots:
    void menuTimerSlotti();
    void resetTimer(int);
    void menuHuudettu();

signals:
    void aikaLoppu();
    void signalKirjautuminen(const QString &);




};
#endif // MAINWINDOW_H
