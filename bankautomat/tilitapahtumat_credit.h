#ifndef TILITAPAHTUMAT_CREDIT_H
#define TILITAPAHTUMAT_CREDIT_H

#include <QDialog>

namespace Ui {
class tilitapahtumat_credit;
}

class tilitapahtumat_credit : public QDialog
{
    Q_OBJECT

public:
    explicit tilitapahtumat_credit(QWidget *parent = nullptr);
    ~tilitapahtumat_credit();

private slots:
    void on_btnMenu_clicked();

private:
    Ui::tilitapahtumat_credit *ui;
};

#endif // TILITAPAHTUMAT_CREDIT_H
