#ifndef VALIKKO_CREDIT_H
#define VALIKKO_CREDIT_H

#include <QDialog>

namespace Ui {
class Valikko_Credit;
}

class Valikko_Credit : public QDialog
{
    Q_OBJECT

public:
    explicit Valikko_Credit(QWidget *parent = nullptr);
    ~Valikko_Credit();

private:
    Ui::Valikko_Credit *ui;
};

#endif // VALIKKO_CREDIT_H
