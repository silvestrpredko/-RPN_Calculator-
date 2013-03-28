#include "complex_number_visual.h"
#include "ui_complex_number_visual.h"
//-------------------------------------------------

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
void complex_number_visual::keyPressEvent(QKeyEvent *event)
{
   const int switch_key =  event->key();
   /////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_0)
   {
       ui->pushButton_0->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_1)
   {
       ui->pushButton_1->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_2)
   {
       ui->pushButton_2->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_3)
   {
       ui->pushButton_3->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_4)
   {
       ui->pushButton_4->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_5)
   {
       ui->pushButton_5->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_6)
   {
       ui->pushButton_6->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_7)
   {
       ui->pushButton_7->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_8)
   {
       ui->pushButton_8->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_9)
   {
       ui->pushButton_9->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_I)
   {
       ui->pushButton_i->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_Plus)
   {
       ui->pushButton_plus->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_Minus)
   {
       ui->pushButton_minus->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_multiply)
   {
       ui->pushButton_multiplate->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_division)
   {
       ui->pushButton_division->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_Enter)
   {
       ui->pushButton_result->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_Alt)
   {
       ui->pushButton_CE->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_ParenLeft)
   {
       ui->pushButton_bracket_1->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_ParenRight)
   {
       ui->pushButton_bracket_2->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_Backspace)
   {
       ui->pushButton_BackSpace->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   if(switch_key == Qt::Key_Period)
   {
       ui->pushButton_dat->animateClick(130);
   }
   ////////////////////////////////////////////////////////////
   QDialog::keyPressEvent(event);
   ////////////////////////////////////////////////////////////
}
//--------------------------------------------------------------
void complex_number_visual::on_pushButton_BackSpace_clicked()
{
    QString Text = ui->lineEditComp_num->text ();

    string str = Text.toStdString ();

    if (str.size () > 0)  str.resize (str.size () - 1);

    QString undo = QString::fromStdString(str);

    ui->lineEditComp_num->clear ();
    ui->lineEditComp_num->insert (undo);
}
