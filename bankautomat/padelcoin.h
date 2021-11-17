#ifndef PADELCOIN_H
#define PADELCOIN_H

#include <QDialog>

namespace Ui {
class Padelcoin;
}

class Padelcoin : public QDialog
{
    Q_OBJECT

public:
    explicit Padelcoin(QWidget *parent = nullptr);
    ~Padelcoin();

private slots:
    void on_btnMenu_clicked();

private:
    Ui::Padelcoin *ui;
};

#endif // PADELCOIN_H
