#include "complex_number_visual.h"
#include "ui_complex_number_visual.h"

complex_number_visual::complex_number_visual(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::complex_number_visual)
{
    ui->setupUi(this);
}

complex_number_visual::~complex_number_visual()
{
    delete ui;
}

void complex_number_visual::on_pushButton_1_clicked()
{
    ui->lineEditComp_num->insert("1");
}

void complex_number_visual::on_pushButton_2_clicked()
{
    ui->lineEditComp_num->insert("2");
}

void complex_number_visual::on_pushButton_3_clicked()
{
    ui->lineEditComp_num->insert("3");
}

void complex_number_visual::on_pushButton_4_clicked()
{
    ui->lineEditComp_num->insert("4");
}

void complex_number_visual::on_pushButton_5_clicked()
{
    ui->lineEditComp_num->insert("5");
}

void complex_number_visual::on_pushButton_6_clicked()
{
    ui->lineEditComp_num->insert("6");
}

void complex_number_visual::on_pushButton_7_clicked()
{
    ui->lineEditComp_num->insert("7");
}

void complex_number_visual::on_pushButton_8_clicked()
{
    ui->lineEditComp_num->insert("8");
}

void complex_number_visual::on_pushButton_9_clicked()
{
    ui->lineEditComp_num->insert("9");
}

void complex_number_visual::on_pushButton_0_clicked()
{
    ui->lineEditComp_num->insert("0");
}

void complex_number_visual::on_pushButton_dat_clicked()
{
    ui->lineEditComp_num->insert(".");
}

void complex_number_visual::on_pushButton_plus_clicked()
{
    ui->lineEditComp_num->insert("+");
}

void complex_number_visual::on_pushButton_minus_clicked()
{
    ui->lineEditComp_num->insert("-");
}

void complex_number_visual::on_pushButton_multiplate_clicked()
{
    ui->lineEditComp_num->insert("*");
}

void complex_number_visual::on_pushButton_division_clicked()
{
    ui->lineEditComp_num->insert("/");
}

void complex_number_visual::on_pushButton_bracket_1_clicked()
{
    ui->lineEditComp_num->insert("(");
}

void complex_number_visual::on_pushButton_bracket_2_clicked()
{
    ui->lineEditComp_num->insert(")");
}

void complex_number_visual::on_pushButton_i_clicked()
{
    ui->lineEditComp_num->insert("i");
}

void complex_number_visual::on_pushButton_result_clicked()
{

    QString tmp = ui->lineEditComp_num->text ();
    ////////////////////////////////////////////
    string temp = tmp.toStdString ();
    ///////////////////////////////////////////
    complex_number OBJ;
    ///////////////////////////////////////////
    OBJ.input(temp);
    OBJ.sort();
    ///////////////////////////////////////////
    string Result = OBJ.operations();
    ///////////////////////////////////////////
    QString ResultString = QString::fromStdString(Result);
    ///////////////////////////////////////////
    ui->lineEditComp_num->setText (ResultString);
}

void complex_number_visual::on_lineEditComp_num_returnPressed()
{
    on_pushButton_result_clicked();
}

void complex_number_visual::on_pushButton_CE_clicked()
{
    ui->lineEditComp_num->clear();
}
//--------------------------------------------------------------













