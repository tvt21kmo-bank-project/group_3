#include "mainwindow.h"
#include "ui_mainwindow.h"

double Value = 0.0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Display->setText("Tervetuloa Bankomaattiin\n Syötä ID-numero ");
    //Alla oleva string tulostaa aloitus näytölle nollan jätetään vielä testaus mielessä koodiin.
   // ui->Display->setText(QString::number(Value));
    QPushButton *numButtons[10];
    for(int i= 0; i < 10; ++i){
        QString butName = "btn" + QString::number(i);
        numButtons[i] = MainWindow::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Kirjoittaa numerot ruutuun kun painaa numero näppäimiä
void MainWindow::NumPressed() {
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    ui->Display->setText(butVal);
    if((butVal.toDouble() == 0) || (butVal.toDouble() == 0.0)){
       ui->Display->setText(butVal);
    } else {
        QString newVal = butVal;
        newVal = newVal + butVal;
        double dbNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dbNewVal, 'g', 16));

    }
}
