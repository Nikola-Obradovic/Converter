#ifndef ADDITION_H
#define ADDITION_H
#include <QDialog>

namespace Ui {
class Addition;
}

class Addition : public QDialog
{
    Q_OBJECT

public:
    explicit Addition(QWidget *parent = nullptr);
    ~Addition();

private slots:
    void onBinaryButtonClicked();
    void onDecimalButtonClicked();
    void onHexadecimalButtonClicked();

    void on_pushButton_clicked();

private:
    Ui::Addition *ui;
};

#endif // ADDITION_H
