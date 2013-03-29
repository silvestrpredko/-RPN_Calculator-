#ifndef MATRIX_H
#define MATRIX_H

#include <QDialog>

namespace Ui {
class Matrix;
}

class Matrix : public QDialog
{
    Q_OBJECT
    
public:
    explicit Matrix(QWidget *parent = 0);
    ~Matrix();
    
private slots:


    void on_lineEdit_returnPressed();

    void on_lineEdit_2_returnPressed();

private:
    Ui::Matrix *ui;
};

#endif // MATRIX_H
