#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    num1 = 0;
    symbol = "";
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Btn_0_clicked()
{
    QString num1 = ui->lineEdit->text();
    ui->lineEdit->setText(num1+"0");
}


void MainWindow::on_Btn_1_clicked()
{
    QString num1 = ui->lineEdit->text();
    ui->lineEdit->setText(num1+"1");
}


void MainWindow::on_Btn_2_clicked()
{
    QString num1 = ui->lineEdit->text();
    ui->lineEdit->setText(num1+"2");
}


void MainWindow::on_Btn_3_clicked()
{
    QString num1 = ui->lineEdit->text();
    ui->lineEdit->setText(num1+"3");
}


void MainWindow::on_Btn_4_clicked()
{
    QString num1 = ui->lineEdit->text();
    ui->lineEdit->setText(num1+"4");
}


void MainWindow::on_Btn_5_clicked()
{
    QString num1 = ui->lineEdit->text();
    ui->lineEdit->setText(num1+"5");
}


void MainWindow::on_Btn_6_clicked()
{
    QString num1 = ui->lineEdit->text();
    ui->lineEdit->setText(num1+"6");
}


void MainWindow::on_Btn_7_clicked()
{
    QString num1 = ui->lineEdit->text();
    ui->lineEdit->setText(num1+"7");
}


void MainWindow::on_Btn_8_clicked()
{
    QString num1 = ui->lineEdit->text();
    ui->lineEdit->setText(num1+"8");
}


void MainWindow::on_Btn_9_clicked()
{
    QString num1 = ui->lineEdit->text();
    ui->lineEdit->setText(num1+"9");
}


void MainWindow::on_Btn_add_clicked()
{
    num1 = ui->lineEdit->text().toDouble();
    symbol = "+";
    ui->lineEdit->setText("");
}


void MainWindow::on_Btn_sub_clicked()
{
    num1 = ui->lineEdit->text().toDouble();
    symbol = "-";
    ui->lineEdit->setText("");
}


void MainWindow::on_Btn_mul_clicked()
{
    num1 = ui->lineEdit->text().toDouble();
    symbol = "*";
    ui->lineEdit->setText("");
}


void MainWindow::on_Btn_div_clicked()
{
    num1 = ui->lineEdit->text().toDouble();
    symbol = "/";
    ui->lineEdit->setText("");
}


void MainWindow::on_Btn_equl_clicked()
{
    double num2 = ui->lineEdit->text().toDouble();
    double result=0;

    if(symbol == "+")
    {
        result=num1+num2;
    }
    else if(symbol == "-")
    {
        result=num1-num2;
    }
    else if(symbol == "*")
    {
        result=num1*num2;
    }
    else if(symbol == "/")
    {
        result=num1/num2;
    }
    ui->lineEdit->setText(QString::number(result));
}


void MainWindow::on_Btn_clr_clicked()
{
   ui->lineEdit->setText("");
}

