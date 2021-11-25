#ifndef PADELCOIN_H
#define PADELCOIN_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class Padelcoin;
}

class Padelcoin : public QDialog
{
    Q_OBJECT

public:
    explicit Padelcoin(QWidget *parent = nullptr);
    ~Padelcoin();

public slots:

    void CoinKoti(const QString &);
    void PadelKoti(QNetworkReply *reply);


private slots:
    void on_btnMenu_clicked();

private:
    Ui::Padelcoin *ui;
    int timerNmbr;
    QNetworkAccessManager *PadelManager;
    QNetworkReply *reply;
    QString PadelNimi;
      QString PadelId;


signals:
    void resetTimerPadelistaValikkoon(int);

};

#endif // PADELCOIN_H
