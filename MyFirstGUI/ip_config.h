#ifndef IP_CONFIG_H
#define IP_CONFIG_H

#include <QDialog>
//#include <IP_Config"
#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkInterface>

namespace Ui {
class IP_Config;
}

class IP_Config : public QDialog
{
    Q_OBJECT

public:
    explicit IP_Config(QWidget *parent = nullptr);
    ~IP_Config();

private slots:
    void on_pushButton_clicked();

 //   void Verstual_ip();
    void newConnection();
    void receiveData();
    void sendDataToClient(const QString &data);

private:
    Ui::IP_Config *ui;

    QTcpServer *tcpServer;
    QTcpSocket *clientSocket;


};

#endif // IP_CONFIG_H
