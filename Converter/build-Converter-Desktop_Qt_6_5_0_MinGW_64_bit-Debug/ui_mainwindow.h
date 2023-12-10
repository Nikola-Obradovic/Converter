/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Con;
    QPushButton *Con_2;
    QPushButton *Con_3;
    QPushButton *Con_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMaximumSize(QSize(800, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Con = new QPushButton(centralwidget);
        Con->setObjectName("Con");
        Con->setGeometry(QRect(230, 70, 321, 71));
        QFont font;
        font.setPointSize(12);
        Con->setFont(font);
        Con->setCursor(QCursor(Qt::PointingHandCursor));
        Con_2 = new QPushButton(centralwidget);
        Con_2->setObjectName("Con_2");
        Con_2->setGeometry(QRect(230, 430, 321, 71));
        Con_2->setFont(font);
        Con_2->setCursor(QCursor(Qt::PointingHandCursor));
        Con_3 = new QPushButton(centralwidget);
        Con_3->setObjectName("Con_3");
        Con_3->setGeometry(QRect(230, 190, 321, 71));
        Con_3->setFont(font);
        Con_3->setCursor(QCursor(Qt::PointingHandCursor));
        Con_4 = new QPushButton(centralwidget);
        Con_4->setObjectName("Con_4");
        Con_4->setGeometry(QRect(230, 310, 321, 71));
        Con_4->setFont(font);
        Con_4->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Converter", nullptr));
        Con->setText(QCoreApplication::translate("MainWindow", "Conversion", nullptr));
        Con_2->setText(QCoreApplication::translate("MainWindow", "2's Complement", nullptr));
        Con_3->setText(QCoreApplication::translate("MainWindow", "Addition", nullptr));
        Con_4->setText(QCoreApplication::translate("MainWindow", "Floating Point", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
