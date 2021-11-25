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

public slots:

    void NimenKoti(const QString &);
    void IDKoti(const QString &);

private slots:

     void maara_painettu();

    void on_btnMenu_clicked();

    void on_btnNosta_clicked();


private:
    Ui::Nosto *ui;
    int timerNmbr;
    QNetworkAccessManager *debitManager;
    QNetworkReply *reply;
    QString NostoNimi;
      QString NostoId;


signals:
    void resetTimerNostostaValikkoon(int);

};

#endif // NOSTO_H
