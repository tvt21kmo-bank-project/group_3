#ifndef NOSTO_CREDIT_H
#define NOSTO_CREDIT_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QPushButton>
namespace Ui {
class Nosto_Credit;
}

class Nosto_Credit : public QDialog
{
    Q_OBJECT

public:
    explicit Nosto_Credit(QWidget *parent = nullptr);
    ~Nosto_Credit();

public slots:

   void NimenCreditKoti(const QString &);
    void IDCreditKoti(const QString &);
    void TiliCreditKoti(QNetworkReply *reply);
   void NostoCreditLOL(const QString &);


private slots:

     void maara_painettu_2();

    void on_btnMenu_2_clicked();

      void on_btnNosta_2_clicked();


private:
    Ui::Nosto_Credit *ui;
    int timerNmbr;
    QNetworkAccessManager *creditManager;
    QNetworkReply *reply;
    QString NostoCreditNimi;
      QString NostoCreditId;
      QString NostoCreditTili;
       const QString CreditMauri = "1004";
       QString NumeroCreditlol;

 signals:
        void resetTimerCreditNostostaValikkoon(int);
        void resetTimerCreditAki(int);
};

#endif // NOSTO_CREDIT_H
