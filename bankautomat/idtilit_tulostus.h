#ifndef IDTILIT_TULOSTUS_H
#define IDTILIT_TULOSTUS_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QFile>
#include <QTextStream>

namespace Ui {
class idtilit_tulostus;
}

class idtilit_tulostus : public QDialog
{
    Q_OBJECT

public:
    explicit idtilit_tulostus(QWidget *parent = nullptr);
    ~idtilit_tulostus();

public slots:
    void Ismo(const QString &);
    void Hae(QNetworkReply *reply);
    void Nayta(QNetworkReply *reply);

private slots:

    void on_btnHaeTiedot_clicked();

private:
    Ui::idtilit_tulostus *ui;
    QNetworkAccessManager *tulosta_tiedot;
    QNetworkAccessManager *nayta_tiedot;
    QNetworkReply *reply;
    QNetworkReply *vastaa;
    QString Kari;
    QString Sepi;
    QString Jarmo;

signals:
    void signalKirjautuminen();

};

#endif // IDTILIT_TULOSTUS_H
