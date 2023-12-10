#ifndef FLOATINGPOINT_H
#define FLOATINGPOINT_H

#include <QDialog>

namespace Ui {
class FloatingPoint;
}

class FloatingPoint : public QDialog
{
    Q_OBJECT

public:
    explicit FloatingPoint(QWidget *parent = nullptr);
    ~FloatingPoint();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::FloatingPoint *ui;
};

#endif // FLOATINGPOINT_H
