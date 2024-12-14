#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setCentralWidget(ui->imageLabel);
    ui->imageLabel->setAlignment(Qt::AlignCenter);
 //   ui->imageLabel->setScaledContents(true);

    connect(ui->actionOpen,&QAction::triggered,this , &MainWindow::openImage);
    connect(ui->actionNext,&QAction::triggered, this, &MainWindow::nextImage);
    connect(ui->actionPrevious,&QAction::triggered, this , &MainWindow::preivousImage);
  //  connect(ui->nextButton, &QPushButton::clicked,this,&Main)
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openImage()
{
    dir = QFileDialog::getExistingDirectory(this,"D:/QT_Resorces");
    if(!dir.isEmpty())
    {
        QDir directory(dir);
        imageFiles = directory.entryList(QStringList() << "*.jpg",QDir::Files);
        currentImageIndex = 0;

        if(!imageFiles.isEmpty())
        {
            displayImage(directory.absoluteFilePath(imageFiles[currentImageIndex]));
        }
        else{
            ui->imageLabel->setText("No image Found in the selected Directory.");
        }
        qDebug() << dir << '\n';
        qDebug() << "Current Index is: " << currentImageIndex;
        qDebug() << "Total Index Count is: "<< imageFiles.count() << "\n";
        dir = QFileDialog::getExistingDirectory(this);
    }
}

void MainWindow::displayImage(const QString &filePath)
{
    QPixmap pixmap(filePath);
    if(!pixmap.isNull())
    {
        ui->imageLabel->setPixmap(pixmap.scaled(ui->imageLabel->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
    else{
        ui->imageLabel->setText("Faild to load image.");
    }
}

void MainWindow::nextImage()
{
    if(currentImageIndex < imageFiles.count())
    {
        currentImageIndex++;
        QDir directory = dir;
        displayImage(directory.absoluteFilePath(imageFiles[currentImageIndex]));
    }
    else{
        qDebug() << "Condition are not satisfied" << '\n';
    }
}
void MainWindow::preivousImage()
{
    if(currentImageIndex > 0)
    {
        currentImageIndex--;
        QDir directory = dir;
        displayImage(directory.absoluteFilePath(imageFiles[currentImageIndex]));
    }
}
