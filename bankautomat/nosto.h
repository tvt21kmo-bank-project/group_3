#ifndef NOSTO_H
#define NOSTO_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class Nosto;
}

class Nosto : public QDialog
{
    Q_OBJECT

public:
    explicit Nosto(QWidget *parent = nullptr);
    ~Nosto();


private slots:
    void maara_painettu();

    void on_btnNosta_clicked();

//    void debitSlot(QNetworkReply *reply);


private:
    Ui::Nosto *ui;
    //QNetworkAccessManager *creditManager;
    QNetworkAccessManager *debitManager;
    QNetworkReply *reply;




};

#endif // NOSTO_H
