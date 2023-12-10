/********************************************************************************
** Form generated from reading UI file 'floatingpoint.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOATINGPOINT_H
#define UI_FLOATINGPOINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FloatingPoint
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtSIN;
    QLineEdit *txtExpIN;
    QLineEdit *txtFIN;
    QLineEdit *txtDecOut;
    QPushButton *pushButton;
    QLineEdit *txtSOUT;
    QLineEdit *txtExpOUT;
    QLineEdit *txtFOUT;
    QLineEdit *txtDecIN;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *FloatingPoint)
    {
        if (FloatingPoint->objectName().isEmpty())
            FloatingPoint->setObjectName("FloatingPoint");
        FloatingPoint->resize(804, 265);
        label = new QLabel(FloatingPoint);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 70, 49, 16));
        label_2 = new QLabel(FloatingPoint);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(430, 70, 49, 16));
        label_3 = new QLabel(FloatingPoint);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 150, 49, 16));
        label_4 = new QLabel(FloatingPoint);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(420, 150, 49, 16));
        txtSIN = new QLineEdit(FloatingPoint);
        txtSIN->setObjectName("txtSIN");
        txtSIN->setGeometry(QRect(110, 70, 16, 24));
        txtSIN->setStyleSheet(QString::fromUtf8("#txtSIN{\n"
"padding-left: 2px;\n"
"background-color: white;\n"
"color: black;\n"
"\n"
"}"));
        txtSIN->setMaxLength(1);
        txtExpIN = new QLineEdit(FloatingPoint);
        txtExpIN->setObjectName("txtExpIN");
        txtExpIN->setGeometry(QRect(130, 70, 61, 24));
        txtExpIN->setStyleSheet(QString::fromUtf8("#txtExpIN{\n"
"padding-left: 2px;\n"
"background-color: white;\n"
"color: black;\n"
"\n"
"}"));
        txtExpIN->setMaxLength(8);
        txtFIN = new QLineEdit(FloatingPoint);
        txtFIN->setObjectName("txtFIN");
        txtFIN->setGeometry(QRect(200, 70, 151, 24));
        txtFIN->setStyleSheet(QString::fromUtf8("#txtFIN{\n"
"padding-left: 2px;\n"
"background-color: white;\n"
"color: black;\n"
"\n"
"}"));
        txtFIN->setMaxLength(23);
        txtDecOut = new QLineEdit(FloatingPoint);
        txtDecOut->setObjectName("txtDecOut");
        txtDecOut->setGeometry(QRect(110, 150, 241, 24));
        txtDecOut->setReadOnly(true);
        pushButton = new QPushButton(FloatingPoint);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 200, 80, 24));
        txtSOUT = new QLineEdit(FloatingPoint);
        txtSOUT->setObjectName("txtSOUT");
        txtSOUT->setGeometry(QRect(470, 150, 16, 24));
        txtSOUT->setStyleSheet(QString::fromUtf8("#txtSOUT{\n"
"padding-left: 2px;\n"
"background-color: white;\n"
"color: black;\n"
"\n"
"}"));
        txtSOUT->setMaxLength(1);
        txtSOUT->setReadOnly(true);
        txtExpOUT = new QLineEdit(FloatingPoint);
        txtExpOUT->setObjectName("txtExpOUT");
        txtExpOUT->setGeometry(QRect(490, 150, 61, 24));
        txtExpOUT->setStyleSheet(QString::fromUtf8("#txtExpOUT{\n"
"padding-left: 2px;\n"
"background-color: white;\n"
"color: black;\n"
"\n"
"}"));
        txtExpOUT->setMaxLength(8);
        txtExpOUT->setReadOnly(true);
        txtFOUT = new QLineEdit(FloatingPoint);
        txtFOUT->setObjectName("txtFOUT");
        txtFOUT->setGeometry(QRect(560, 150, 151, 24));
        txtFOUT->setStyleSheet(QString::fromUtf8("#txtFOUT{\n"
"padding-left: 2px;\n"
"background-color: white;\n"
"color: black;\n"
"\n"
"}"));
        txtFOUT->setMaxLength(23);
        txtFOUT->setReadOnly(true);
        txtDecIN = new QLineEdit(FloatingPoint);
        txtDecIN->setObjectName("txtDecIN");
        txtDecIN->setGeometry(QRect(470, 70, 241, 24));
        txtDecIN->setMaxLength(18);
        txtDecIN->setReadOnly(false);
        pushButton_2 = new QPushButton(FloatingPoint);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 200, 80, 24));
        pushButton_3 = new QPushButton(FloatingPoint);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 200, 80, 24));
        pushButton_4 = new QPushButton(FloatingPoint);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(620, 200, 80, 24));

        retranslateUi(FloatingPoint);

        QMetaObject::connectSlotsByName(FloatingPoint);
    } // setupUi

    void retranslateUi(QDialog *FloatingPoint)
    {
        FloatingPoint->setWindowTitle(QCoreApplication::translate("FloatingPoint", "Floating Point", nullptr));
        label->setText(QCoreApplication::translate("FloatingPoint", "Input: ", nullptr));
        label_2->setText(QCoreApplication::translate("FloatingPoint", "Input: ", nullptr));
        label_3->setText(QCoreApplication::translate("FloatingPoint", "Output: ", nullptr));
        label_4->setText(QCoreApplication::translate("FloatingPoint", "Output: ", nullptr));
        txtSIN->setText(QString());
        txtExpIN->setText(QString());
        txtFIN->setText(QString());
        pushButton->setText(QCoreApplication::translate("FloatingPoint", "Run", nullptr));
        txtSOUT->setText(QString());
        txtExpOUT->setText(QString());
        txtFOUT->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("FloatingPoint", "Run", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FloatingPoint", "Clear", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FloatingPoint", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FloatingPoint: public Ui_FloatingPoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOATINGPOINT_H
