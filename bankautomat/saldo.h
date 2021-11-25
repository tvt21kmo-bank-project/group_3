#ifndef SALDO_H
#define SALDO_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class Saldo;
}

class Saldo : public QDialog
{
    Q_OBJECT

public:
    explicit Saldo(QWidget *parent = nullptr);
    ~Saldo();

 public slots:

    void SaldoKoti(const QString &);
    void SaldoTulostus(QNetworkReply *reply);

private slots:
    void on_btnMenu_clicked();

private:
    Ui::Saldo *ui;
    int timerNmbr;
    QString SaldoId;
    QNetworkAccessManager *saldoManager;
    QNetworkReply *reply;
    QString Viikset;


signals:
    void resetTimerSaldostaValikkoon(int);
};

#endif // SALDO_H
