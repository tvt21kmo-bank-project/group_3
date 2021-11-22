#ifndef NOSTO_CREDIT_H
#define NOSTO_CREDIT_H

#include <QDialog>

namespace Ui {
class Nosto_Credit;
}

class Nosto_Credit : public QDialog
{
    Q_OBJECT

public:
    explicit Nosto_Credit(QWidget *parent = nullptr);
    ~Nosto_Credit();

private:
    Ui::Nosto_Credit *ui;
};

#endif // NOSTO_CREDIT_H
