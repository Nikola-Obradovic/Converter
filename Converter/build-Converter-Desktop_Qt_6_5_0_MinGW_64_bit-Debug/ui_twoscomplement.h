/********************************************************************************
** Form generated from reading UI file 'twoscomplement.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWOSCOMPLEMENT_H
#define UI_TWOSCOMPLEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TwosComplement
{
public:
    QLineEdit *txtInput;
    QLineEdit *txtOutput;
    QPushButton *Run;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *TwosComplement)
    {
        if (TwosComplement->objectName().isEmpty())
            TwosComplement->setObjectName("TwosComplement");
        TwosComplement->resize(495, 149);
        txtInput = new QLineEdit(TwosComplement);
        txtInput->setObjectName("txtInput");
        txtInput->setGeometry(QRect(90, 30, 301, 24));
        txtInput->setMaxLength(30);
        txtOutput = new QLineEdit(TwosComplement);
        txtOutput->setObjectName("txtOutput");
        txtOutput->setGeometry(QRect(90, 80, 301, 24));
        txtOutput->setMaxLength(30);
        txtOutput->setReadOnly(true);
        Run = new QPushButton(TwosComplement);
        Run->setObjectName("Run");
        Run->setGeometry(QRect(410, 30, 61, 24));
        label = new QLabel(TwosComplement);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 49, 16));
        label_2 = new QLabel(TwosComplement);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 80, 49, 16));
        pushButton = new QPushButton(TwosComplement);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 80, 61, 24));

        retranslateUi(TwosComplement);

        QMetaObject::connectSlotsByName(TwosComplement);
    } // setupUi

    void retranslateUi(QDialog *TwosComplement)
    {
        TwosComplement->setWindowTitle(QCoreApplication::translate("TwosComplement", "2's Complement", nullptr));
        Run->setText(QCoreApplication::translate("TwosComplement", "Run", nullptr));
        label->setText(QCoreApplication::translate("TwosComplement", "Input:", nullptr));
        label_2->setText(QCoreApplication::translate("TwosComplement", "Output:", nullptr));
        pushButton->setText(QCoreApplication::translate("TwosComplement", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TwosComplement: public Ui_TwosComplement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWOSCOMPLEMENT_H
