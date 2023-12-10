#ifndef CONVERSION_H
#define CONVERSION_H

#include <QDialog>

namespace Ui {
class Conversion;
}

class Conversion : public QDialog
{
    Q_OBJECT

public:
    explicit Conversion(QWidget *parent = nullptr);
    ~Conversion();

private slots:
    void on_BtnConBin_clicked();

    void on_BtnConDec_clicked();

    void on_BtnConHex_clicked();

    void on_pushButton_clicked();

private:
    Ui::Conversion *ui;
};

#endif // CONVERSION_H
