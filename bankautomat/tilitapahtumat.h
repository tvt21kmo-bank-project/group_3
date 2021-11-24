#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QDialog>

namespace Ui {
class Tilitapahtumat;
}

class Tilitapahtumat : public QDialog
{
    Q_OBJECT

public:
    explicit Tilitapahtumat(QWidget *parent = nullptr);
    ~Tilitapahtumat();

private:
    Ui::Tilitapahtumat *ui;
    int timerNmbr;

signals:
    void resetTimerTapahtumistaValikkoon(int);
private slots:
    void on_btnMenu_clicked();
};

#endif // TILITAPAHTUMAT_H
