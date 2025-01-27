/********************************************************************************
** Form generated from reading UI file 'ip_config.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IP_CONFIG_H
#define UI_IP_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IP_Config
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *IP_bar;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *Subnet_bar;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLineEdit *Dns_bar;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *Getway_bar;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *DestIP_bar;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *DestPort_bar;

    void setupUi(QDialog *IP_Config)
    {
        if (IP_Config->objectName().isEmpty())
            IP_Config->setObjectName(QString::fromUtf8("IP_Config"));
        IP_Config->resize(453, 504);
        horizontalLayoutWidget = new QWidget(IP_Config);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(170, 440, 261, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(horizontalLayoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalLayoutWidget_2 = new QWidget(IP_Config);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 10, 351, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        IP_bar = new QLineEdit(horizontalLayoutWidget_2);
        IP_bar->setObjectName(QString::fromUtf8("IP_bar"));

        horizontalLayout_2->addWidget(IP_bar);

        horizontalLayoutWidget_4 = new QWidget(IP_Config);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(30, 70, 351, 51));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        Subnet_bar = new QLineEdit(horizontalLayoutWidget_4);
        Subnet_bar->setObjectName(QString::fromUtf8("Subnet_bar"));

        horizontalLayout_5->addWidget(Subnet_bar);

        horizontalLayoutWidget_5 = new QWidget(IP_Config);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(30, 190, 351, 51));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        Dns_bar = new QLineEdit(horizontalLayoutWidget_5);
        Dns_bar->setObjectName(QString::fromUtf8("Dns_bar"));

        horizontalLayout_6->addWidget(Dns_bar);

        horizontalLayoutWidget_6 = new QWidget(IP_Config);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(30, 130, 351, 51));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(36, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        Getway_bar = new QLineEdit(horizontalLayoutWidget_6);
        Getway_bar->setObjectName(QString::fromUtf8("Getway_bar"));

        horizontalLayout_7->addWidget(Getway_bar);

        horizontalLayoutWidget_7 = new QWidget(IP_Config);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(30, 250, 351, 51));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        horizontalSpacer_6 = new QSpacerItem(16, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        DestIP_bar = new QLineEdit(horizontalLayoutWidget_7);
        DestIP_bar->setObjectName(QString::fromUtf8("DestIP_bar"));

        horizontalLayout_8->addWidget(DestIP_bar);

        horizontalLayoutWidget_8 = new QWidget(IP_Config);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(30, 310, 281, 51));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        DestPort_bar = new QLineEdit(horizontalLayoutWidget_8);
        DestPort_bar->setObjectName(QString::fromUtf8("DestPort_bar"));

        horizontalLayout_9->addWidget(DestPort_bar);


        retranslateUi(IP_Config);
        QObject::connect(buttonBox, SIGNAL(accepted()), IP_Config, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), IP_Config, SLOT(reject()));

        QMetaObject::connectSlotsByName(IP_Config);
    } // setupUi

    void retranslateUi(QDialog *IP_Config)
    {
        IP_Config->setWindowTitle(QApplication::translate("IP_Config", "Configuration", nullptr));
        pushButton->setText(QApplication::translate("IP_Config", "Apply", nullptr));
        label->setText(QApplication::translate("IP_Config", "IP Address", nullptr));
        label_3->setText(QApplication::translate("IP_Config", "Subnet Mask", nullptr));
        label_5->setText(QApplication::translate("IP_Config", "DNS", nullptr));
        label_4->setText(QApplication::translate("IP_Config", "Getway", nullptr));
        label_7->setText(QApplication::translate("IP_Config", "Destination IP", nullptr));
        label_8->setText(QApplication::translate("IP_Config", "Destination Port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IP_Config: public Ui_IP_Config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IP_CONFIG_H
