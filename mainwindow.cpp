#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionClose_triggered()
{
    close ();
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->insert ("1");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->insert ("2");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->insert ("3");
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->insert ("4");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->insert ("5");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->insert ("6");
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->lineEdit->insert ("7");
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->lineEdit->insert ("8");
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->lineEdit->insert ("9");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->insert ("0");
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->insert (".");
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->lineEdit->insert ("/");
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->lineEdit->insert ("*");
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->lineEdit->insert ("-");
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->lineEdit->insert ("+");
}

void MainWindow::on_pushButton_17_clicked()
{
    ui->lineEdit->insert ("(");
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->lineEdit->insert (")");
}

void MainWindow::on_actionAbout_triggered()
{
    about A;
    A.setModal (true);
    A.exec ();
}

void MainWindow::on_pushButton_8_clicked()
{
    QString T = ui->lineEdit->text ();

    string str = T.toStdString ();

    if (str.size () > 0)  str.resize (str.size () - 1);

    QString undo = QString::fromStdString(str);

    ui->lineEdit->clear ();
    ui->lineEdit->insert (undo);
}

void MainWindow::on_pushButton_22_clicked()
{
    double num;
    QString T = ui->lineEdit->text ();
    string str = T.toStdString ();
    istringstream iss (str);
    iss >> num;
    num = sqrt(num);
    T = QString::number (num);
    ui->lineEdit->clear ();
    ui->lineEdit->insert (T);
}

void MainWindow::on_pushButton_21_clicked()
{
    double num;
    QString T = ui->lineEdit->text ();
    string str = T.toStdString ();
    istringstream iss (str);
    iss >> num;
    num *= num;
    T = QString::number (num);
    ui->lineEdit->clear ();
    ui->lineEdit->insert (T);
}

void MainWindow::on_pushButton_20_clicked()
{
    QString S = ui->lineEdit->text ();

    string expr = S.toStdString ();
    if (!expr.empty ())
    {
        for (unsigned int i = expr.length() - 1; i > 0; i--)
            {
                if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*'
                    || expr[i] == '/' || expr[i] == '(' || expr[i] == ')')
                {
                    expr.insert (i, " ");
                    expr.insert (i+2, " ");
                }
                else
                    continue;
            }

        RPNCalc myExpr (expr);

        double ResultDouble = myExpr.getResult();

        QString ResultString = QString::number(ResultDouble);

        ui->lineEdit->setText (ResultString);
    }
}


void MainWindow::on_lineEdit_returnPressed()
{
    MainWindow::on_pushButton_20_clicked();
}

void MainWindow::on_actionCompute_Complex_triggered()
{
    complex_number_visual OBJ;
    OBJ.setModal (true);
    OBJ.exec ();
}

void MainWindow::on_actionMatrix_triggered()
{
    Matrix OBJ;
    OBJ.setModal (true);
    OBJ.exec ();
}
