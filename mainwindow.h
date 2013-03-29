#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
#include <about.h>
#include <rpncalc.h>
#include <complex_number_visual.h>
#include <complex_number.h>
#include <matrix.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionClose_triggered();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_actionAbout_triggered();

    void on_pushButton_8_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_20_clicked();

    void on_lineEdit_returnPressed();

    void on_actionCompute_Complex_triggered();

    void on_actionMatrix_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
