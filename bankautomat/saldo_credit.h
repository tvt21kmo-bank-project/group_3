#ifndef SALDO_CREDIT_H
#define SALDO_CREDIT_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class Saldo_credit;
}

class Saldo_credit : public QDialog
{
    Q_OBJECT

public:
    explicit Saldo_credit(QWidget *parent = nullptr);
    ~Saldo_credit();

public slots:
    void on_btnMenu_clicked();
    void SaldoCreditKoti(const QString &);
    void SaldoCreditTulostus(QNetworkReply *reply);


private:
    Ui::Saldo_credit *ui;
    int timerNmbr;
    QString CreditSaldoId;
    QNetworkAccessManager *CreditSaldoManager;
    QNetworkReply *reply;
    QString CreditViikset;

signals:
       void resetTimerCreditSaldoValikkoon(int);
private slots:

};

#endif // SALDO_CREDIT_H
