#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLabel>
#include<QPushButton>
#include<QFileDialog>
#include<QDir>
#include<QStringList>
#include<QPixmap>
#include<QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void openImage();
    void nextImage();
    void preivousImage();



private:
    Ui::MainWindow *ui;
    QString dir;
    QStringList imageFiles;
    int currentImageIndex = -1;

    void displayImage(const QString &filePath);
};
#endif // MAINWINDOW_H
