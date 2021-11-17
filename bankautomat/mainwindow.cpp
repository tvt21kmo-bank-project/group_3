#include "mainwindow.h"
#include "ui_mainwindow.h"

double Value = 0.0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Display1->setText("Syötä ID numero: ");
    ui->Display2->setText("Syötä Pin koodi:");
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
    QString displayVal = ui->Display1->text();
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){
        ui->Display1->setText(butVal);
    } else {
        QString newVal = displayVal + butVal;
        double dbNewVal = newVal.toDouble();
        ui->Display1->setText(QString::number(dbNewVal, 'g', 16));

    }
}
