#include "conversion.h"
#include "ui_conversion.h"
#include <cmath>
#include <string>
#include <QRegularExpressionValidator>
#include <QMessageBox>

Conversion::Conversion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Conversion)
{
    ui->setupUi(this);
}

Conversion::~Conversion()
{
    delete ui;
}

void Conversion::on_BtnConBin_clicked()
{

    QString binStr = ui->txtBinIN->text(); // Get the input as a string
    if(binStr!=""){

    bool isBin;
    int dec = binStr.toInt(&isBin, 2); // Convert the binary string to an integer

    QString hex = QString::number(dec, 16).toUpper();
    if (isBin) {
        ui->txtBinOUT->setText(binStr);
        ui->txtBinSigOUT->setText(binStr);
        ui->txtDecOUT->setText(QString::number(dec)); // Display the decimal result
        ui->txtHexOUT->setText(hex);
    } else {
        // Handle invalid input
        ui->txtDecOUT->setText("Invalid input");
        ui->txtBinOUT->setText("Invalid input");
        ui->txtHexOUT->setText("Invalid input");
        ui->txtBinSigOUT->setText("Invalid input");
    }

    QString binStr2=binStr;
    QChar sign=binStr2.at(0);
    binStr2.remove(0,1);
    dec = binStr2.toInt(&isBin, 2);

    if(sign=='0'){
        if (isBin) {
            ui->txtDecSigOUT->setText(QString::number(dec));
        } else {
            // Handle invalid input
           ui->txtDecSigOUT->setText("Invalid input");
        }

    }
    else{
        bool test=true;

        for(int i=0; i<int(binStr2.length()); i++){
           if(binStr2.at(i)!='0' && binStr2.at(i)!='1'){
               test = false;
           }
        }
        if (test){
        int i=binStr2.length()-1;
        while(i>=0){
           if(binStr2.at(i)=='0'){
               i--;
           }else{
               i--;
               break;
           }


        }

        for(int k=i; k>=0; k--) {
           if(binStr2.at(k)=='0'){
               binStr2.replace(k,1,'1');
           }
           else{
             binStr2.replace(k,1,'0');

           }



        }

        dec = -1*binStr2.toInt(&isBin, 2);

        if (isBin) {
           ui->txtDecSigOUT->setText(QString::number(dec));
        }
        else {
           // Handle invalid input
           ui->txtDecSigOUT->setText("Invalid input");
        }
        }

        else{
        ui->txtDecSigOUT->setText("Invalid input");
        }


    }



    }
    else{
    ui->txtDecOUT->setText("Invalid input");
    ui->txtBinOUT->setText("Invalid input");
    ui->txtHexOUT->setText("Invalid input");
    ui->txtBinSigOUT->setText("Invalid input");
    ui->txtDecSigOUT->setText("Invalid input");

    }

} // End of binary input conversion





void Conversion::on_BtnConDec_clicked()//Decimal input
{

    long long dec=ui->txtDecIN->text().toLongLong();
    QString inputText= ui->txtDecIN->text();
    QRegularExpressionValidator validator(QRegularExpression("^-?[0-9]+$"));
    int pos = 0;


   if(validator.validate(inputText, pos) == QValidator::Acceptable){
    QString bin = QString::number(dec,2);
    QString hex = QString::number(dec,16).toUpper();




    int i=bin.length()-1;
    if (dec<0){
    while(i>=0){
        if(bin.at(i)=='0'){
           i--;
        }else{
           i--;
           break;
        }


    }

    for(int k=i; k>=0; k--) {
        if(bin.at(k)=='0'){
           bin.replace(k,1,'1');
        }
        else{
           bin.replace(k,1,'0');

        }



    }
    }





    if(dec<0){
        ui->txtBinOUT->setText("/");
        QString bin2="1";
        bin.remove(0,1);
        bin2+=bin;
        ui->txtBinSigOUT->setText(bin2);
        hex.remove(0,1);
        ui->txtHexOUT->setText(hex);
        QString dec2 = QString::number(dec);
        ui->txtDecOUT->setText(dec2);
        ui->txtDecSigOUT->setText("/");

    }
    else{

        ui->txtBinOUT->setText(bin);
        QString bin2="0";
        bin2+=bin;
        ui->txtBinSigOUT->setText(bin2);
        ui->txtHexOUT->setText(hex);
        QString dec2 = QString::number(dec);
        ui->txtDecOUT->setText(dec2);
        ui->txtDecSigOUT->setText("/");

    }


   }
    else{
    ui->txtDecOUT->setText("Invalid input");
    ui->txtBinOUT->setText("Invalid input");
    ui->txtHexOUT->setText("Invalid input");
    ui->txtBinSigOUT->setText("Invalid input");
    ui->txtDecSigOUT->setText("/");


    }




}// End of decimal input conversion


void Conversion::on_BtnConHex_clicked() // Hex input
{

    QString hex = ui->txtHexIN->text();
    QRegularExpressionValidator validator(QRegularExpression("^[0-9A-Fa-f]+$"));
    int pos = 0;

    if (validator.validate(hex, pos) == QValidator::Acceptable) {
    hex = hex.toUpper();
    long long decimalNum = hex.toLongLong(nullptr, 16);
    QString decimalString = QString::number(decimalNum);
    QString bin = QString::number(decimalNum, 2);

    ui->txtBinOUT->setText(bin);
    ui->txtHexOUT->setText(hex);
    ui->txtDecOUT->setText(decimalString);
    ui->txtBinSigOUT->setText("/");
     ui->txtDecSigOUT->setText("/");
    }
    else {
     ui->txtBinOUT->setText("Invalid input");
     ui->txtHexOUT->setText("Invalid input");
     ui->txtDecOUT->setText("Invalid input");
     ui->txtBinSigOUT->setText("/");
     ui->txtDecSigOUT->setText("/");
    }


}// End of hex input conversion


void Conversion::on_pushButton_clicked() //Clear
{
    ui->txtBinIN->clear();
    ui->txtDecIN->clear();
    ui->txtHexIN->clear();
    ui->txtBinOUT->clear();
    ui->txtBinSigOUT->clear();
    ui->txtDecOUT->clear();
    ui->txtDecSigOUT->clear();
    ui->txtHexOUT->clear();


}

