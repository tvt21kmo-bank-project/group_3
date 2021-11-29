#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
  }

Menu::~Menu()
{
    delete ui;
}
void Menu::on_btnDebit_clicked()
{
    timerNmbr = 1;                   //ANNETAAN timerNmbr -MUUTTUJALLE ARVO 1
    emit resetTimerDebit(timerNmbr); //VIEDÄÄN SIGNAALIN MUKANA timerNmbr -MUUTTUJAN DEBITIÄ VASTAAVA ARVO (1) MAINWINDOWN resetTimer() -SLOTIIN
}


void Menu::on_btnCredit_clicked()
{

    timerNmbr = 2;
    emit resetTimerCredit(timerNmbr);
}

void Menu::aikaMeni() //aikaMeni on slotti, joka ottaa vastaan MainWindown menuTimerSlotin lähettämän signaalin kun 30 sekuntia on kulunut
{
    emit palaaMenuun(); //tässä vuorostaan lähtee signaali MainWindown menuHuudettu() -slottiin, jossa kutsutaan menu-ikkunan sulkemista
}

