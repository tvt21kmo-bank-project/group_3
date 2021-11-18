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

namespace Ui {
class Valikko;
}

class Valikko : public QDialog
{
    Q_OBJECT

public:
    explicit Valikko(QWidget *parent = nullptr);
    ~Valikko();

private slots:
    //void on_pushButton_clicked();

    void on_btnNosto_clicked();

    void on_btnPadelCoin_clicked();

    void on_btnSaldo_clicked();

    void on_btnTilitapahtumat_clicked();

private:
    Ui::Valikko *ui;
    QNetworkAccessManager *creditManager;
    QNetworkAccessManager *debitManager;
    QNetworkReply *reply;
    Nosto *objNosto;
    Padelcoin *objPadel;
    Saldo *objSaldo;
    Tilitapahtumat *objTapahtumat;
};

#endif // VALIKKO_H
