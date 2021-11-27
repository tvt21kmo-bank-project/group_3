#ifndef VALIKKO_CREDIT_H
#define VALIKKO_CREDIT_H

#include <QDialog>
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

private slots:
    void on_btnTilitapahtumat_clicked();

    void on_btnUlos_clicked();

    void on_btnSaldo_clicked();

    void on_btnNosto_clicked();

private:
    Ui::Valikko_Credit *ui;
    QNetworkAccessManager *creditManager;
    QNetworkAccessManager *debitManager;
    QNetworkReply *reply;
    int timerNmbr;


signals:
    void resetTimerCreditNosto(int);
    void resetTimerCreditSaldo(int);
    void resetTimerCreditTapahtumat(int);
    void resetTimerCreditUlos(int);
};

#endif // VALIKKO_CREDIT_H
