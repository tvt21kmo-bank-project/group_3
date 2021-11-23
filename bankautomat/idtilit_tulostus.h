#ifndef IDTILIT_TULOSTUS_H
#define IDTILIT_TULOSTUS_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class idtilit_tulostus;
}

class idtilit_tulostus : public QDialog
{
    Q_OBJECT

public:
    explicit idtilit_tulostus(QWidget *parent = nullptr);
    ~idtilit_tulostus();

private slots:
    void Hae(QNetworkReply *reply);
    void on_btnHaeTiedot_clicked();

private:
    Ui::idtilit_tulostus *ui;
    QNetworkAccessManager *tulosta_tiedot;
    QNetworkReply *reply;
};

#endif // IDTILIT_TULOSTUS_H
