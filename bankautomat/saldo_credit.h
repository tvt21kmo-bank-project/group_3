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

private:
    Ui::Saldo_credit *ui;
    int timerNmbr;

signals:
       void resetTimerCreditSaldoValikkoon(int);
private slots:

};

#endif // SALDO_CREDIT_H
