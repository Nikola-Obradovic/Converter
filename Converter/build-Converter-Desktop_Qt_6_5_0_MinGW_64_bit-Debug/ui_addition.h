/********************************************************************************
** Form generated from reading UI file 'addition.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITION_H
#define UI_ADDITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Addition
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtIN;
    QLineEdit *txt2IN;
    QLineEdit *txtOUT;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *BinaryButton;
    QPushButton *DecimalButton;
    QPushButton *HexadecimalButton;
    QPushButton *pushButton;

    void setupUi(QDialog *Addition)
    {
        if (Addition->objectName().isEmpty())
            Addition->setObjectName("Addition");
        Addition->resize(720, 235);
        label = new QLabel(Addition);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 221, 21));
        label_2 = new QLabel(Addition);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 90, 191, 16));
        label_3 = new QLabel(Addition);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 140, 231, 16));
        txtIN = new QLineEdit(Addition);
        txtIN->setObjectName("txtIN");
        txtIN->setGeometry(QRect(430, 50, 271, 24));
        txtIN->setMaxLength(30);
        txt2IN = new QLineEdit(Addition);
        txt2IN->setObjectName("txt2IN");
        txt2IN->setGeometry(QRect(430, 110, 271, 24));
        txt2IN->setMaxLength(30);
        txtOUT = new QLineEdit(Addition);
        txtOUT->setObjectName("txtOUT");
        txtOUT->setGeometry(QRect(430, 170, 271, 24));
        txtOUT->setReadOnly(true);
        label_4 = new QLabel(Addition);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(380, 170, 49, 16));
        label_5 = new QLabel(Addition);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(380, 110, 49, 16));
        label_6 = new QLabel(Addition);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(380, 50, 49, 16));
        BinaryButton = new QPushButton(Addition);
        BinaryButton->setObjectName("BinaryButton");
        BinaryButton->setGeometry(QRect(260, 40, 80, 24));
        DecimalButton = new QPushButton(Addition);
        DecimalButton->setObjectName("DecimalButton");
        DecimalButton->setGeometry(QRect(260, 90, 80, 24));
        HexadecimalButton = new QPushButton(Addition);
        HexadecimalButton->setObjectName("HexadecimalButton");
        HexadecimalButton->setGeometry(QRect(260, 140, 80, 24));
        pushButton = new QPushButton(Addition);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 190, 91, 31));

        retranslateUi(Addition);

        QMetaObject::connectSlotsByName(Addition);
    } // setupUi

    void retranslateUi(QDialog *Addition)
    {
        Addition->setWindowTitle(QCoreApplication::translate("Addition", "Addition", nullptr));
        label->setText(QCoreApplication::translate("Addition", "Press for addition of bin numbers:", nullptr));
        label_2->setText(QCoreApplication::translate("Addition", "Press for addition of dec numbers: ", nullptr));
        label_3->setText(QCoreApplication::translate("Addition", "Press for addition of hex numbers:", nullptr));
        label_4->setText(QCoreApplication::translate("Addition", "output:", nullptr));
        label_5->setText(QCoreApplication::translate("Addition", "input 2: ", nullptr));
        label_6->setText(QCoreApplication::translate("Addition", "input 1:", nullptr));
        BinaryButton->setText(QCoreApplication::translate("Addition", "Run", nullptr));
        DecimalButton->setText(QCoreApplication::translate("Addition", "Run", nullptr));
        HexadecimalButton->setText(QCoreApplication::translate("Addition", "Run", nullptr));
        pushButton->setText(QCoreApplication::translate("Addition", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Addition: public Ui_Addition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITION_H
