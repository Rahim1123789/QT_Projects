#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_Btn_0_clicked();

    void on_Btn_1_clicked();

    void on_Btn_2_clicked();

    void on_Btn_3_clicked();

    void on_Btn_4_clicked();

    void on_Btn_5_clicked();

    void on_Btn_6_clicked();

    void on_Btn_7_clicked();

    void on_Btn_8_clicked();

    void on_Btn_9_clicked();

    void on_Btn_add_clicked();

    void on_Btn_sub_clicked();

    void on_Btn_mul_clicked();

    void on_Btn_div_clicked();

    void on_Btn_equl_clicked();

    void on_Btn_clr_clicked();

private:
    Ui::MainWindow *ui;
    double num1;
    QString symbol;
};
#endif // MAINWINDOW_H
