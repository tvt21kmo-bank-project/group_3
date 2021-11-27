#ifndef VALIKKO_CREDIT_H
#define VALIKKO_CREDIT_H

#include "nosto_credit.h"
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
class Valikko_Credit;
}

class Valikko_Credit : public QDialog
{
    Q_OBJECT

public:
    explicit Valikko_Credit(QWidget *parent = nullptr);
    ~Valikko_Credit();

private:
    Ui::Valikko_Credit *ui;
    QNetworkAccessManager *creditManager;
    QNetworkAccessManager *debitManager;
    QNetworkReply *reply;
};

#endif // VALIKKO_CREDIT_H
