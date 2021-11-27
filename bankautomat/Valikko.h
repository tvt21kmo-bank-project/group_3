#ifndef VALIKKO_H
#define VALIKKO_H
#include "nosto.h"
#include "padelcoin.h"
#include "saldo.h"
#include "tilitapahtumat.h"
#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QFile>
#include <QTextStream>

namespace Ui {
class Valikko;
}

class Valikko : public QDialog
{
    Q_OBJECT

public:
    explicit Valikko(QWidget *parent = nullptr);
    ~Valikko();

public slots:

    void JarmonKoti(const QString &);
    void SepinKoti(const QString &);


private slots:

    void on_btnNosto_clicked();

    void on_btnPadelCoin_clicked();

    void on_btnSaldo_clicked();

    void on_btnTilitapahtumat_clicked();


    void on_btnULos_clicked();



private:
    Ui::Valikko *ui;
    QNetworkAccessManager *creditManager;
    QNetworkAccessManager *debitManager;
    QNetworkReply *reply;
    int timerNmbr;
    QString Rolf;
    QString Ulla;


signals:

    void resetTimerNosto(int);
    void resetTimerPadel(int);
    void resetTimerSaldo(int);
    void resetTimerTapahtumat(int);
    void resetTimerUlos(int);




};

#endif // VALIKKO_H
