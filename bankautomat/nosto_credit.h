#ifndef NOSTO_CREDIT_H
#define NOSTO_CREDIT_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class Nosto_Credit;
}

class Nosto_Credit : public QDialog
{
    Q_OBJECT

public:
    explicit Nosto_Credit(QWidget *parent = nullptr);
    ~Nosto_Credit();



private slots:

     //void maara_painettu();

     //void on_btnMenu_2_clicked();

     void on_btnNosta_2_clicked();

private:
    Ui::Nosto_Credit *ui;
    int timerNmbr;
    QNetworkAccessManager *debitManager;
    QNetworkReply *reply;

};

#endif // NOSTO_CREDIT_H
