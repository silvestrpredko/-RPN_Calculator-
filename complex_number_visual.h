#ifndef COMPLEX_NUMBER_VISUAL_H
#define COMPLEX_NUMBER_VISUAL_H

#include <QDialog>
#include <complex_number.h>
namespace Ui {
class complex_number_visual;
}

class complex_number_visual : public QDialog
{
    Q_OBJECT
    
public:
    explicit complex_number_visual(QWidget *parent = 0);
    ~complex_number_visual();
    
private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_dat_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_multiplate_clicked();

    void on_pushButton_division_clicked();

    void on_pushButton_bracket_1_clicked();

    void on_pushButton_bracket_2_clicked();

    void on_pushButton_i_clicked();

    void on_pushButton_result_clicked();

    void on_lineEditComp_num_returnPressed();

private:
    Ui::complex_number_visual *ui;
};

#endif // COMPLEX_NUMBER_VISUAL_H
