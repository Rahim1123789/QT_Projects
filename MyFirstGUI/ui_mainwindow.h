/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Refresh;
    QPushButton *Settings;
    QPushButton *Address_Book;
    QPushButton *Help;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Search;
    QLabel *label;
    QLineEdit *Search_bar;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(854, 600);
        MainWindow->setMaximumSize(QSize(16777, 16777));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(580, 100, 111, 221));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Refresh = new QPushButton(verticalLayoutWidget);
        Refresh->setObjectName(QString::fromUtf8("Refresh"));

        verticalLayout_2->addWidget(Refresh);

        Settings = new QPushButton(verticalLayoutWidget);
        Settings->setObjectName(QString::fromUtf8("Settings"));

        verticalLayout_2->addWidget(Settings);

        Address_Book = new QPushButton(verticalLayoutWidget);
        Address_Book->setObjectName(QString::fromUtf8("Address_Book"));

        verticalLayout_2->addWidget(Address_Book);

        Help = new QPushButton(verticalLayoutWidget);
        Help->setObjectName(QString::fromUtf8("Help"));

        verticalLayout_2->addWidget(Help);

        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 50, 561, 72));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        formLayout->setLayout(4, QFormLayout::LabelRole, horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Search = new QPushButton(formLayoutWidget);
        Search->setObjectName(QString::fromUtf8("Search"));

        horizontalLayout_3->addWidget(Search);


        formLayout->setLayout(3, QFormLayout::LabelRole, horizontalLayout_3);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, label);

        Search_bar = new QLineEdit(formLayoutWidget);
        Search_bar->setObjectName(QString::fromUtf8("Search_bar"));

        formLayout->setWidget(3, QFormLayout::FieldRole, Search_bar);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 120, 561, 231));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(horizontalLayoutWidget_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout_4->addWidget(listWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 854, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Refresh->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
        Settings->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        Address_Book->setText(QApplication::translate("MainWindow", "Address Book", nullptr));
        Help->setText(QApplication::translate("MainWindow", "Help", nullptr));
        Search->setText(QApplication::translate("MainWindow", "Search", nullptr));
        label->setText(QApplication::translate("MainWindow", "Enter IP Address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
