#ifndef TILITAPAHTUMAT_CREDIT_H
#define TILITAPAHTUMAT_CREDIT_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class tilitapahtumat_credit;
}

class tilitapahtumat_credit : public QDialog
{
    Q_OBJECT

public:
    explicit tilitapahtumat_credit(QWidget *parent = nullptr);
    ~tilitapahtumat_credit();

public slots:

void TapahtumaCreditKoti(const QString &);
void TapahtumaCreditTulostus(QNetworkReply *reply);

private slots:
    void on_btnMenu_clicked();

private:
    Ui::tilitapahtumat_credit *ui;
     int timerNmbr;
     QString CreditTapahtumaId;
     QNetworkAccessManager *CreditTapahtumaManager;
     QNetworkReply *reply;
     QString CreditParta;

signals:
       void resetTimerCreditTapahtumastaValikkoon(int);

};

#endif // TILITAPAHTUMAT_CREDIT_H
