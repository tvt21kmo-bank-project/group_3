#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Valikko.h"

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_btnMinus_clicked();
    void on_btn0_clicked();
    void on_btnPlus_clicked();
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();
    void on_btnOK_clicked();
    void on_btnRightArrow_clicked();
    void on_btnStop_clicked();
    void loginSlot (QNetworkReply *reply);

private:
    Ui::MainWindow *ui;
   QNetworkAccessManager *loginManager;
   QNetworkReply *reply;
   Valikko *objPankki;

};
#endif // MAINWINDOW_H
