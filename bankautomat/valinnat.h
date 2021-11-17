#ifndef VALINNAT_H
#define VALINNAT_H

#include <QDialog>

namespace Ui {
class Valinnat;
}

class Valinnat : public QDialog
{
    Q_OBJECT

public:
    explicit Valinnat(QWidget *parent = nullptr);
    ~Valinnat();

private:
    Ui::Valinnat *ui;
};

#endif // VALINNAT_H
