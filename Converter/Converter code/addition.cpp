
#include "addition.h"
#include "ui_addition.h"
#include <QRegularExpressionValidator>
#include <QMessageBox>
Addition::Addition(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Addition)
{
    ui->setupUi(this);

    connect(ui->BinaryButton, &QPushButton::clicked, this, &Addition::onBinaryButtonClicked);
    connect(ui->DecimalButton, &QPushButton::clicked, this, &Addition::onDecimalButtonClicked);
    connect(ui->HexadecimalButton, &QPushButton::clicked, this, &Addition::onHexadecimalButtonClicked);


}

Addition::~Addition()
{
    delete ui;
}


void Addition::onBinaryButtonClicked() // Binary Addition
{

    QString binary1 = ui->txtIN->text();
    QString binary2 = ui->txt2IN->text();


    bool valid1, valid2;
    int result = binary1.toInt(&valid1, 2) + binary2.toInt(&valid2, 2);

    if (valid1 && valid2) {
        QString binResult = QString::number(result, 2);
        ui->txtOUT->setText(binResult);
    } else {
        ui->txtOUT->setText("Invalid input");
    }

}

void Addition::onDecimalButtonClicked()  // Decimal Addition
{


    QString decimal1 = ui->txtIN->text();
    QString decimal2 = ui->txt2IN->text();
    QRegularExpressionValidator validator(QRegularExpression("^-?[0-9]+(\\.[0-9]+)?$"));
    int pos = 0;

    if(decimal1.length()>18 || decimal2.length()>18){

        ui->txtOUT->setText("Input exceeds the limit");
    }
    else{
    if (validator.validate(decimal1, pos) == QValidator::Acceptable && validator.validate(decimal2, pos) == QValidator::Acceptable) {
        double resultdbl = decimal1.toDouble() + decimal2.toDouble();
        QString result = QString::number(resultdbl, 'f', 5);

        ui->txtOUT->setText(result);

    }
    else{


    ui->txtOUT->setText("Invalid input");
    }
   }
 }

void Addition::onHexadecimalButtonClicked()
{
    QString hexadecimal1 = ui->txtIN->text();
    QString hexadecimal2 = ui->txt2IN->text();



    bool valid1, valid2;
    long long result = hexadecimal1.toLongLong(&valid1, 16) + hexadecimal2.toLongLong(&valid2, 16);
    if(int(hexadecimal1.size())<=15 && int(hexadecimal2.size())<=15){
    if (valid1 && valid2) {
        QString hexadecimalResult = QString::number(result, 16);


        if(hexadecimalResult.at(0)!='-'){
    ui->txtOUT->setText(hexadecimalResult.toUpper());
        }
        else{
     ui->txtOUT->setText("Result cannot be negative");
        }

    } else {
        ui->txtOUT->setText("Invalid input");
    }
   }
   else  ui->txtOUT->setText("Input exceeds the limit");

}

void Addition::on_pushButton_clicked() //Clear
{
   ui->txtIN->clear();
   ui->txt2IN->clear();
   ui->txtOUT->clear();


}

