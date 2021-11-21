#ifndef MENU_H
#define MENU_H

#include <QDialog>
//#include "Valikko.h"

namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:

    void on_btnDebit_clicked();

    void on_btnCredit_clicked();

private:
    Ui::Menu *ui;
    int timerNmbr;  //TÄMÄ MUUTTUJA LÄHETETÄÄN MAINWINDOWN timerReset() SLOTTIIN, JOTTA MAINWINDOW OSAA AVATA OIKEAN IKKUNAN (kts .cpp)


signals:
    void resetTimerDebit(int);  //SIGNAALI, JOKA VIE MAINWINDOWN resetTimer() -SLOTIIN MUUTTUJAN, JONKA ARVOLLA AUKEAA DEBITPUOLI
    void resetTimerCredit(int); //SIGNAALI, JOKA VIE MAINWINDOWN resetTimer() -SLOTIIN MUUTTUJAN, JONKA ARVOLLA AUKEAA CREDITPUOLI
    void palaaMenuun();

public slots:
    void aikaMeni();
};

#endif // MENU_H
