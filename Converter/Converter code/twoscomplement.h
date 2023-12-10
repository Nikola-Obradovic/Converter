#ifndef TWOSCOMPLEMENT_H
#define TWOSCOMPLEMENT_H

#include <QDialog>

namespace Ui {
class TwosComplement;
}

class TwosComplement : public QDialog
{
    Q_OBJECT

public:
    explicit TwosComplement(QWidget *parent = nullptr);
    ~TwosComplement();

private slots:
    void on_Run_clicked();

    void on_pushButton_clicked();

private:
    Ui::TwosComplement *ui;
};

#endif // TWOSCOMPLEMENT_H
