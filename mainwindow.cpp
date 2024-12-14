#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "\\toDoFile.txt");

    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::information(0,"Error",file.errorString());
    }
    QTextStream in(&file);
    while(!in.atEnd())
    {
        QListWidgetItem* item = new QListWidgetItem(in.readLine(),ui->listWidget);
        ui->listWidget->addItem(item);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
    }
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;

    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "\\toDoFile.txt");

    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::information(0,"Error",file.errorString());
    }
    QTextStream out(&file);

    for (int i=0;i<ui->listWidget->count() ; ++i)
    {
        out << ui->listWidget->item(i)->text() << "\n";
    }

    file.close();
}


void MainWindow::on_btnADD_clicked()
{
    QListWidgetItem* item = new QListWidgetItem(ui->lineEdit->text(),ui->listWidget);
    ui->listWidget->addItem(item);
    ui->lineEdit->clear();
    item->setFlags(item->flags() | Qt::ItemIsEditable);
    ui->lineEdit->setFocus();
}


void MainWindow::on_btnREM_clicked()
{
    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    int Cnt = ui->listWidget->currentRow();
    int lastcnt = ui->listWidget->count();
    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "\\toDoFile.txt");

    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::information(0,"Error",file.errorString());
    }
    QTextStream out(&file);
    out << Cnt << "\n";
    out << lastcnt+1 << "\n";
    delete item;
}


void MainWindow::on_btnRemAll_clicked()
{
    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "\\toDoFile.txt");

    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::information(0,"Error",file.errorString());
    }
    file.close();
    ui->listWidget->clear();
}

