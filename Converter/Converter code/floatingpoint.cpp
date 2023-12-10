#include "floatingpoint.h"
#include "ui_floatingpoint.h"
#include <cmath>
#include <string>
#include <QRegularExpressionValidator>
#include <QMessageBox>

FloatingPoint::FloatingPoint(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FloatingPoint)
{
    ui->setupUi(this);
}

FloatingPoint::~FloatingPoint()
{
    delete ui;
}

void FloatingPoint::on_pushButton_clicked() //Float input
{

    QString s = ui->txtSIN->text();
    QString e = ui->txtExpIN->text();
    QString f = ui->txtFIN->text();

QRegularExpressionValidator validator(QRegularExpression("^[01]+$"));
    int pos=0;


    if (validator.validate(s, pos) == QValidator::Acceptable && validator.validate(e, pos) == QValidator::Acceptable && validator.validate(f, pos) == QValidator::Acceptable){


        int ecounter=8-int(e.length());
        int fcounter=23-int(f.length());


        for(int i=0; i<ecounter; i++){

            e+="0";

        }

        for(int i=0; i<fcounter; i++){

            f+="0";

        }


        int sign=1;
        if(s=='1'){

            sign=-1;
        }

        int exp = e.toInt(nullptr, 2);
        int n=-1;
        double fraction=0;
        for(int i=0; i<23; i++){

            if(f.at(i)=='1'){

                fraction += pow(2,n);
                n--;


            }
            else{

                n--;
            }





        }
        double solution=0;

        if(exp>0){
             solution = sign*(1+fraction)*pow(2,exp-127);

        }

        else{

           solution = sign*(fraction)*pow(2,-126);
        }


        ui->txtDecOut->setText(QString::number(solution));



    }
    else {

       ui->txtDecOut->setText("Wrong Input");
    }




}

QString decimalToFloatingPoint(const QString &decimal) {
    float number = decimal.toFloat();
    quint32 bits = *reinterpret_cast<quint32*>(&number);
    QString binary = QString::number(bits, 2).rightJustified(32, '0');

    QString sign = binary.mid(0, 1);
    QString exponent = binary.mid(1, 8);
    QString fraction = binary.mid(9);



    return sign + " " + exponent + " " + fraction;
}




void FloatingPoint::on_pushButton_2_clicked() //Dec input
{

    QString dec= ui->txtDecIN->text();
    QRegularExpressionValidator validator(QRegularExpression("^-?[0-9]+(\\.[0-9]+)?$"));
    int pos=0;
    QString sign;
    QString exponent;
    QString fraction;
    if (validator.validate(dec, pos) == QValidator::Acceptable){

       QString ieee754 = decimalToFloatingPoint(dec);
       QStringList parts = ieee754.split(' ');

       QString sign = parts.value(0);
       QString exponent = parts.value(1);
       QString fraction = parts.value(2);

       ui->txtSOUT->setText(sign);
       ui->txtExpOUT->setText(exponent);
       ui->txtFOUT->setText(fraction);
    }

    else{
        ui->txtSOUT->setText("/");
         ui->txtExpOUT->setText("/");
         ui->txtFOUT->setText("Wrong Input");
    }


}


void FloatingPoint::on_pushButton_3_clicked() //Clear
{

    ui->txtFIN->clear();
    ui->txtSIN->clear();
    ui->txtExpIN->clear();
    ui->txtDecOut->clear();


}


void FloatingPoint::on_pushButton_4_clicked() //Clear
{

    ui->txtSOUT->clear();
    ui->txtFOUT->clear();
    ui->txtExpOUT->clear();
    ui->txtDecIN->clear();


}

