#include "ip_config.h"
#include "ui_ip_config.h"
#include <QNetworkInterface>
#include <QProcess>
#include<QDebug>
//#include "QMainWindow"


IP_Config::IP_Config(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IP_Config)
{
    ui->setupUi(this);

    tcpServer = new QTcpServer(this);
        connect(tcpServer, &QTcpServer::newConnection, this, &IP_Config::newConnection);

        if (!tcpServer->listen(QHostAddress::Any, 5001)) {
            qDebug() << "Error: " << tcpServer->errorString();
        } else {
            qDebug() << "Server started.";
        }
}

IP_Config::~IP_Config()
{
    delete ui;
}


void IP_Config::newConnection()
{
    clientSocket = tcpServer->nextPendingConnection();
    connect(clientSocket, &QTcpSocket::readyRead, this, &IP_Config::receiveData);
    sendDataToClient("Hello from server!");
}

void IP_Config::receiveData()
{
    QByteArray data = clientSocket->readAll();
    qDebug() << "Received data: " << data;
}

void IP_Config::sendDataToClient(const QString &data)
{
    if (clientSocket && clientSocket->state() == QAbstractSocket::ConnectedState)
    {
        QByteArray dataarry =data.toUtf8();
        clientSocket->write(dataarry);
        clientSocket->flush();
    }
}

void IP_Config::on_pushButton_clicked()
{
   const QString ip_address= ui->IP_bar->text();
   qDebug()<<ip_address;
   QString Subnet_address= ui->Subnet_bar->text();
   qDebug()<<Subnet_address;
   QString Getway_address= ui->Getway_bar->text();
   qDebug()<<Getway_address;
   QString Dns_address= ui->Dns_bar->text();
   qDebug()<<Dns_address;
   QString destIP_address= ui->DestIP_bar->text();
   qDebug()<<destIP_address;
   QString destPort_address= ui->DestPort_bar->text();
   qDebug()<<destPort_address;
   IP_Config:sendDataToClient("PleaseSetNewIP:");
   sendDataToClient(ip_address);
   sendDataToClient(",");
   sendDataToClient(Subnet_address);
   sendDataToClient(",");
   sendDataToClient(Getway_address);
   sendDataToClient(",");
   sendDataToClient(Dns_address);
   sendDataToClient(",");
   sendDataToClient(destIP_address);
   sendDataToClient(",");
   sendDataToClient(destPort_address);
   sendDataToClient(",");

}
