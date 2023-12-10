#include "twoscomplement.h"
#include "ui_twoscomplement.h"
#include <cmath>
#include <string>
TwosComplement::TwosComplement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TwosComplement)
{
    ui->setupUi(this);
}

TwosComplement::~TwosComplement()
{
    delete ui;
}

void TwosComplement::on_Run_clicked() //2s complement
{


    QString binStr = ui->txtInput->text();
    bool valid=true;
    for(int i=0; i<binStr.length(); i++){

        if(binStr[i]!='1' && binStr[i]!='0'){
            valid=false;
            break;
        }

    }
    if(valid){

        int i=binStr.length()-1;
        while(i>=0){
            if(binStr.at(i)=='0'){
                i--;
            }else{
                i--;
                break;
            }


        }

        for(int k=i; k>=0; k--) {
            if(binStr.at(k)=='0'){
                binStr.replace(k,1,'1');
            }
            else{
                binStr.replace(k,1,'0');

            }



        }

        ui->txtOutput->setText(binStr);

    }
    else{

       ui->txtOutput->setText("Invalid input");

    }


}


void TwosComplement::on_pushButton_clicked() //Clear
{

    ui->txtInput->clear();
    ui->txtOutput->clear();

}

