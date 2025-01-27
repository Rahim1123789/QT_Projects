#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ip_config.h"
#include<QMessageBox>
#include<QDebug>
#include<QCoreApplication>
#include<QNetworkInterface>
#include <stdlib.h>
#include <QProcess>
//#include <QListWidgetItem>
#include <QRegularExpression>
#include<gobver.h>
#include<QtNetwork>

QString mac[120]={"80:34:28:74:a5:cb","de:a8:50:3c:bf:bf","5b:60:e8:d1:32:4b","5c:39:d9:d7:55:c0","b6:25:3b:8e:c0:bd","1a:9b:55:7a:70:9a","6d:86:c6:e0:87:26","66:36:49:00:02:19",
                    "74:e0:c0:17:e9:70","8f:02:a6:26:01:b9","94:10:89:c4:d7:34","da:2c:f7:63:ee:ed","59:79:c8:3e:a5:45","76:48:90:12:a8:54","21:d5:f9:65:65:d7","8c:b7:1f:ce:a7:31",
                    "56:11:5e:ec:e6:a3","37:49:29:39:fe:d9","51:d5:33:57:ac:b0","38:f4:3d:83:2c:d1","32:5a:08:fb:04:2b","4e:ec:5d:c8:61:4d","11:28:12:2c:e5:c3","13:a0:38:71:2d:8f",
                    "ad:17:47:b3:c0:e8","a8:ab:4b:f9:73:4f","23:19:11:96:31:72","2b:2a:1e:e2:61:70","c3:2f:17:1a:c6:f2","e6:13:0f:89:c8:f0","ae:bd:14:87:7b:8d","ee:a2:b0:a8:6f:bf",
                    "3c:80:fb:38:87:e1","57:b4:13:19:86:d0","f6:24:3d:7e:94:1b","d6:d1:8b:11:67:52","50:6c:4a:70:f8:30","e5:f5:a5:be:87:fa","fe:02:6c:d1:2b:e3","f0:34:86:e2:bb:2d",
                    "da:bf:84:d3:13:e2","70:6d:87:40:0e:b1","25:96:ac:db:62:b2","a8:f5:c1:a9:66:41","88:5f:2c:79:71:d0","b6:be:cc:76:c4:3c","01:19:01:5a:8e:6b","d8:3a:54:fe:32:b7",
                    "d8:fb:a1:52:a4:06","4f:a2:f0:e0:86:e7","26:9c:79:91:d9:a4","ab:46:e5:8b:a4:3d","38:6a:78:66:4a:bd","a3:64:5f:77:9a:3d","09:0a:4d:46:39:65","de:16:c5:be:4a:c8",
                    "79:c8:32:3c:93:9d","f2:0d:6a:3b:f2:a1","32:d7:c1:98:58:6c","d7:57:4b:d2:5c:a3","15:32:19:c0:7f:a4","bc:e8:fa:3c:3f:6c","7e:28:3b:ec:52:1e","ae:9b:11:86:85:19",
                    "39:12:91:d7:10:1a","77:44:19:05:4e:64","68:1f:f4:c8:02:70","47:72:28:d3:a4:2a","10:63:25:9c:9d:f2","a3:1b:17:13:c4:1b","65:85:e0:a5:03:5f","a9:3d:c3:4d:a3:5d",
                    "47:bd:1e:45:0a:63","d9:3c:2e:fa:75:32","ce:19:0d:37:45:26","5b:34:0f:c6:58:68","00:5a:b0:fe:a5:3a","e8:60:c9:dd:35:3c","f0:e6:85:a8:25:9d","bf:1d:62:4c:e2:20",
                    "01:80:11:c5:60:98","28:ed:48:84:17:38","bd:75:c2:f8:0c:3b","39:ea:89:6f:57:e2","ec:b0:8d:ec:cd:04","56:49:12:1e:cc:54","6a:ba:d3:90:95:4b","aa:7b:9a:a2:2b:35",
                    "ea:0b:0b:9c:08:9f","23:62:f7:f7:00:d3","1b:ae:f6:bb:e9:a2","67:20:4f:06:5e:5e","73:a2:b4:3c:48:41","72:20:e8:82:9e:17","3a:89:e3:20:fd:26","5c:9e:b3:fa:ac:d1",
                    "51:30:e0:84:6d:82","2d:02:12:a2:99:45","e0:7b:51:92:87:a2","26:24:5d:a3:57:27","20:ec:af:44:f8:d5"};
QString macread[120];
/*QString mac[100][]={{"80:34:28:74:a5:cb"},{"de:a8:50:3c:bf:bf"},{"5b:60:e8:d1:32:4b"},{"5c:39:d9:d7:55:c0"},{"b6:25:3b:8e:c0:bd"},{"1a:9b:55:7a:70:9a"},{"6d:86:c6:e0:87:26"},{"66:36:49:00:02:19"},
                    {"74:e0:c0:17:e9:70"},{"8f:02:a6:26:01:b9"},{"94:10:89:c4:d7:34"},{"da:2c:f7:63:ee:ed"},{"59:79:c8:3e:a5:45"},{"76:48:90:12:a8:54"},{"21:d5:f9:65:65:d7"},{"8c:b7:1f:ce:a7:31"},
                    {"56:11:5e:ec:e6:a3"},{"37:49:29:39:fe:d9"},{"51:d5:33:57:ac:b0"},{"38:f4:3d:83:2c:d1"},{"32:5a:08:fb:04:2b"},{"4e:ec:5d:c8:61:4d"},{"11:28:12:2c:e5:c3"},{"13:a0:38:71:2d:8f"},
                    {"ad:17:47:b3:c0:e8"},{"a8:ab:4b:f9:73:4f"},{"23:19:11:96:31:72"},{"2b:2a:1e:e2:61:70"},{"c3:2f:17:1a:c6:f2"},{"e6:13:0f:89:c8:f0"},{"ae:bd:14:87:7b:8d"},{"ee:a2:b0:a8:6f:bf"},
                    {"3c:80:fb:38:87:e1"},{"57:b4:13:19:86:d0"},{"f6:24:3d:7e:94:1b"},{"d6:d1:8b:11:67:52"},{"50:6c:4a:70:f8:30"},{"e5:f5:a5:be:87:fa"},{"fe:02:6c:d1:2b:e3"},{"f0:34:86:e2:bb:2d"},
                    {"da:bf:84:d3:13:e2"},{"70:6d:87:40:0e:b1"},{"25:96:ac:db:62:b2"},{"a8:f5:c1:a9:66:41"},{"88:5f:2c:79:71:d0"},{"b6:be:cc:76:c4:3c"},{"01:19:01:5a:8e:6b"},{"d8:3a:54:fe:32:b7"},
                    {"d8:fb:a1:52:a4:06"},{"4f:a2:f0:e0:86:e7"},{"26:9c:79:91:d9:a4"},{"ab:46:e5:8b:a4:3d"},{"38:6a:78:66:4a:bd"},{"a3:64:5f:77:9a:3d"},{"09:0a:4d:46:39:65"},{"de:16:c5:be:4a:c8"},
                    {"79:c8:32:3c:93:9d"},{"f2:0d:6a:3b:f2:a1"},{"32:d7:c1:98:58:6c"},{"d7:57:4b:d2:5c:a3"},{"15:32:19:c0:7f:a4"},{"bc:e8:fa:3c:3f:6c"},{"7e:28:3b:ec:52:1e"},{"ae:9b:11:86:85:19"},
                    {"39:12:91:d7:10:1a"},{"77:44:19:05:4e:64"},{"68:1f:f4:c8:02:70"},{"47:72:28:d3:a4:2a"},{"10:63:25:9c:9d:f2"},{"a3:1b:17:13:c4:1b"},{"65:85:e0:a5:03:5f"},{"a9:3d:c3:4d:a3:5d"},
                    {"47:bd:1e:45:0a:63"},{"d9:3c:2e:fa:75:32"},{"ce:19:0d:37:45:26"},{"5b:34:0f:c6:58:68"},{"00:5a:b0:fe:a5:3a"},{"e8:60:c9:dd:35:3c"},{"f0:e6:85:a8:25:9d"},{"bf:1d:62:4c:e2:20"},
                    {"01:80:11:c5:60:98"},{"28:ed:48:84:17:38"},{"bd:75:c2:f8:0c:3b"},{"39:ea:89:6f:57:e2"},{"ec:b0:8d:ec:cd:04"},{"56:49:12:1e:cc:54"},{"6a:ba:d3:90:95:4b"},{"aa:7b:9a:a2:2b:35"},
                    {"ea:0b:0b:9c:08:9f"},{"23:62:f7:f7:00:d3"},{"1b:ae:f6:bb:e9:a2"},{"67:20:4f:06:5e:5e"},{"73:a2:b4:3c:48:41"},{"72:20:e8:82:9e:17"},{"3a:89:e3:20:fd:26"},{"5c:9e:b3:fa:ac:d1"},
                    {"51:30:e0:84:6d:82"},{"2d:02:12:a2:99:45"},{"e0:7b:51:92:87:a2"},{"26:24:5d:a3:57:27"},{"20:ec:af:44:f8:d5"}};*/

// Specify the virtual IP address you want to add
QString virtualIpAddress = "192.168.1.100";  // Change this to your desired IP address
QString interfaceName = "eno1";  // Change this to your actual network interface

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



void MainWindow::on_Search_clicked()
{

   QString userip = ui->Search_bar->text();
    qDebug()<<userip;
  //   qDebug()<<ver;
}

void MainWindow::on_Refresh_clicked()
{
    ui->listWidget->clear();
    QProcess process;
    process.start("sudo",QStringList() << "arp-scan"<< "--localnet");
    process.waitForFinished();
    QString result = process.readAllStandardOutput();
   QRegularExpression ipPattern("(\\d+\\.\\d+\\.\\d+\\.\\d+)");
       // Extract IP addresses
       QString ipAddresses;
       QRegularExpressionMatchIterator ipMatches = ipPattern.globalMatch(result);
       QString macAddresses;
       QRegularExpression macPattern("([0-9A-Fa-f]{2}[:-]){5}([0-9A-Fa-f]{2})");
       QRegularExpressionMatchIterator macMatches = macPattern.globalMatch(result);
       while (ipMatches.hasNext() || macMatches.hasNext())
       {
           QRegularExpressionMatch match = ipMatches.next();
           ipAddresses = match.captured(1);
           qDebug() << ipAddresses;
           QRegularExpressionMatch macmatch = macMatches.next();
           QString macentry = macmatch.captured(0);
           QRegularExpression macRegex("([0-9A-Fa-f]{2}[:-]){5}([0-9A-Fa-f]{2})");
           QRegularExpressionMatch macMatch = macRegex.match(macentry);
           if(macMatch.hasMatch())
           {
               macAddresses =  QString::fromUtf8(macMatch.captured().toUtf8());

               if(mac[0] == macAddresses)
               {
                 ui->listWidget->addItem(ipAddresses);
               }
               qDebug() << macAddresses;
           }

       }


    qDebug()<<"Refresh Botton Pressed";
}

void MainWindow::on_Settings_clicked()
{
    QList<QNetworkInterface> interfaces = QNetworkInterface::allInterfaces();
     QString conName;
    for(const QNetworkInterface& interface : interfaces)
    {
     if(!interface.flags().testFlag(QNetworkInterface::IsLoopBack))
     {
         qDebug()<< interface.name();
         conName = interface.name();
     }
    }

 //    qDebug()<<interface;
       // Find the network interface by name
       QNetworkInterface networkInterface = QNetworkInterface::interfaceFromName(conName);
       if (networkInterface.isValid())
       {
           QString command = "sudo ifconfig " + conName + ":" + virtualIpAddress + " " + virtualIpAddress;
              int exitCode = QProcess::execute(command);

              if (exitCode == 0) {
                  qDebug() << "Virtual IP address added successfully:" << virtualIpAddress;
              } else {
                  qWarning() << "Failed to add virtual IP address:" << virtualIpAddress;
              }
              interfaceName=conName;
       }
    qDebug()<<"Settings Botton Pressed";
}

void MainWindow::on_Address_Book_clicked()
{

    qDebug()<<"Address_Book Botton Pressed";
}

void MainWindow::on_Help_clicked()
{
    // Construct the command to take down the virtual interface
      QString command = "sudo ifconfig " + interfaceName + ":" + virtualIpAddress + " down";
    // Create a QProcess object to run the command
       QProcess process;

       // Start the process
       process.start(command);

       if (process.waitForStarted() && process.waitForFinished()) {
           // Read the standard output
           QString result = process.readAllStandardOutput();

           // Print the result
           qDebug() << "Command result:\n" << result;
       } else {
           // Handle errors
           qDebug() << "Error running command:" << process.errorString();
       }
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
  IP_Config ip_config;
  ip_config.setModal(true);
  ip_config.exec();
  qDebug()<< item->text();
}
