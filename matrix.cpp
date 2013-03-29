#include "matrix.h"
#include "ui_matrix.h"

Matrix::Matrix(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Matrix)
{
    ui->setupUi(this);
}

Matrix::~Matrix()
{
    delete ui;
}

void Matrix::on_lineEdit_returnPressed()
{

}

void Matrix::on_lineEdit_2_returnPressed()
{

}
