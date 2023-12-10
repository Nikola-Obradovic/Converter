/********************************************************************************
** Form generated from reading UI file 'conversion.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERSION_H
#define UI_CONVERSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Conversion
{
public:
    QLabel *label;
    QLineEdit *txtBinIN;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtDecIN;
    QLineEdit *txtHexIN;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *txtBinOUT;
    QLineEdit *txtDecOUT;
    QLineEdit *txtDecSigOUT;
    QLineEdit *txtHexOUT;
    QPushButton *BtnConBin;
    QPushButton *BtnConDec;
    QPushButton *BtnConHex;
    QLabel *label_8;
    QLineEdit *txtBinSigOUT;
    QPushButton *pushButton;

    void setupUi(QDialog *Conversion)
    {
        if (Conversion->objectName().isEmpty())
            Conversion->setObjectName("Conversion");
        Conversion->resize(826, 486);
        label = new QLabel(Conversion);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 30, 71, 31));
        txtBinIN = new QLineEdit(Conversion);
        txtBinIN->setObjectName("txtBinIN");
        txtBinIN->setGeometry(QRect(170, 33, 471, 31));
        txtBinIN->setMaxLength(30);
        label_2 = new QLabel(Conversion);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 90, 91, 31));
        label_3 = new QLabel(Conversion);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 150, 111, 31));
        txtDecIN = new QLineEdit(Conversion);
        txtDecIN->setObjectName("txtDecIN");
        txtDecIN->setGeometry(QRect(170, 90, 471, 31));
        txtDecIN->setMaxLength(18);
        txtHexIN = new QLineEdit(Conversion);
        txtHexIN->setObjectName("txtHexIN");
        txtHexIN->setGeometry(QRect(170, 150, 471, 31));
        txtHexIN->setMaxLength(15);
        label_4 = new QLabel(Conversion);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 230, 41, 31));
        label_5 = new QLabel(Conversion);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 310, 71, 31));
        label_6 = new QLabel(Conversion);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 350, 151, 31));
        label_7 = new QLabel(Conversion);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 390, 71, 31));
        txtBinOUT = new QLineEdit(Conversion);
        txtBinOUT->setObjectName("txtBinOUT");
        txtBinOUT->setGeometry(QRect(100, 230, 451, 31));
        txtBinOUT->setMaxLength(32);
        txtBinOUT->setReadOnly(true);
        txtDecOUT = new QLineEdit(Conversion);
        txtDecOUT->setObjectName("txtDecOUT");
        txtDecOUT->setGeometry(QRect(100, 310, 451, 31));
        txtDecOUT->setAutoFillBackground(false);
        txtDecOUT->setMaxLength(1000000000);
        txtDecOUT->setCursorPosition(0);
        txtDecOUT->setReadOnly(true);
        txtDecSigOUT = new QLineEdit(Conversion);
        txtDecSigOUT->setObjectName("txtDecSigOUT");
        txtDecSigOUT->setGeometry(QRect(180, 350, 371, 31));
        txtDecSigOUT->setMaxLength(10000000);
        txtDecSigOUT->setReadOnly(true);
        txtHexOUT = new QLineEdit(Conversion);
        txtHexOUT->setObjectName("txtHexOUT");
        txtHexOUT->setGeometry(QRect(80, 390, 471, 31));
        txtHexOUT->setMaxLength(1000000000);
        txtHexOUT->setReadOnly(true);
        BtnConBin = new QPushButton(Conversion);
        BtnConBin->setObjectName("BtnConBin");
        BtnConBin->setGeometry(QRect(670, 40, 80, 24));
        BtnConBin->setCursor(QCursor(Qt::PointingHandCursor));
        BtnConDec = new QPushButton(Conversion);
        BtnConDec->setObjectName("BtnConDec");
        BtnConDec->setGeometry(QRect(670, 100, 80, 24));
        BtnConDec->setCursor(QCursor(Qt::PointingHandCursor));
        BtnConHex = new QPushButton(Conversion);
        BtnConHex->setObjectName("BtnConHex");
        BtnConHex->setGeometry(QRect(670, 160, 80, 24));
        BtnConHex->setCursor(QCursor(Qt::PointingHandCursor));
        label_8 = new QLabel(Conversion);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 270, 71, 31));
        txtBinSigOUT = new QLineEdit(Conversion);
        txtBinSigOUT->setObjectName("txtBinSigOUT");
        txtBinSigOUT->setGeometry(QRect(120, 270, 431, 31));
        txtBinSigOUT->setMaxLength(32);
        txtBinSigOUT->setReadOnly(true);
        pushButton = new QPushButton(Conversion);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(650, 300, 121, 61));

        retranslateUi(Conversion);

        QMetaObject::connectSlotsByName(Conversion);
    } // setupUi

    void retranslateUi(QDialog *Conversion)
    {
        Conversion->setWindowTitle(QCoreApplication::translate("Conversion", "Conversion", nullptr));
        label->setText(QCoreApplication::translate("Conversion", "Binary input: ", nullptr));
        txtBinIN->setText(QString());
        label_2->setText(QCoreApplication::translate("Conversion", "Decimal input: ", nullptr));
        label_3->setText(QCoreApplication::translate("Conversion", "Hexadecimal input: ", nullptr));
        txtDecIN->setText(QString());
        txtHexIN->setText(QString());
        label_4->setText(QCoreApplication::translate("Conversion", "Bin: ", nullptr));
        label_5->setText(QCoreApplication::translate("Conversion", "Dec:", nullptr));
        label_6->setText(QCoreApplication::translate("Conversion", "Dec (from Signed Bin):", nullptr));
        label_7->setText(QCoreApplication::translate("Conversion", "Hex:", nullptr));
        txtBinOUT->setText(QString());
        txtDecOUT->setText(QString());
        txtDecSigOUT->setText(QString());
        txtHexOUT->setText(QString());
        BtnConBin->setText(QCoreApplication::translate("Conversion", "Convert", nullptr));
        BtnConDec->setText(QCoreApplication::translate("Conversion", "Convert", nullptr));
        BtnConHex->setText(QCoreApplication::translate("Conversion", "Convert", nullptr));
        label_8->setText(QCoreApplication::translate("Conversion", "Signed Bin: ", nullptr));
        txtBinSigOUT->setText(QString());
        pushButton->setText(QCoreApplication::translate("Conversion", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Conversion: public Ui_Conversion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSION_H
