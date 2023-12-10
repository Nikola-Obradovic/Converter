#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "conversion.h"
#include "twoscomplement.h"
#include "addition.h"
#include "floatingpoint.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Con_clicked() //Conversion
{
    Conversion c;
    c.setModal(true);
    c.exec();

}



void MainWindow::on_Con_2_clicked() //2's Complement
{
    TwosComplement t;
    t.setModal(true);
    t.exec();
}


void MainWindow::on_Con_3_clicked() // Addition
{
    Addition a;
    a.setModal(true);
    a.exec();


}


void MainWindow::on_Con_4_clicked() //Floating Point
{
    FloatingPoint f;
    f.setModal(true);
    f.exec();


}

