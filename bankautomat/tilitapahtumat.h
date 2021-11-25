#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class Tilitapahtumat;
}

class Tilitapahtumat : public QDialog
{
    Q_OBJECT

public:
    explicit Tilitapahtumat(QWidget *parent = nullptr);
    ~Tilitapahtumat();

private:
    Ui::Tilitapahtumat *ui;
    int timerNmbr;
    QString TapahtumaId;
    QNetworkAccessManager *TapahtumaManager;
    QNetworkReply *reply;
    QString Parta;

 signals:
     void resetTimerTapahtumistaValikkoon(int);
 private slots:
     void on_btnMenu_clicked();
public slots:

void TapahtumaKoti(const QString &);
void TapahtumaTulostus(QNetworkReply *reply);

};

#endif // TILITAPAHTUMAT_H
