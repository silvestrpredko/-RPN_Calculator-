#include "complex_number.h"
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void complex_number::input(string &tmp)
{
    example = tmp;
    ///////////////////////////////////////////////////////////////////
    switch_2 = 1;
    ///////////////////////////////////////////////////////////////////
    _switch_ = _true_;
    ///////////////////////////////////////////////////////////////////
    for(unsigned int i = 1;i < example.length();i++)
    {
        if(example[i] == ')' && _switch_ == _true_)
        {
            tmp_example_1.assign(example,1,i-1);
            label_3 = i + 3;
            _switch_ = _false_;
        }
        else
        {
            if(example[i] == ')' && _switch_ == _false_)
            {
                tmp_example_2.assign(example,label_3,i-label_3);
            }
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void complex_number :: sort()
{
    ///////////////////////////////////////////////////////////////////
    label_1 = 0;
    ///////////////////////////////////////////////////////////////////
    int k = 0;
    ///////////////////////////////////////////////////////////////////
    _switch_= _true_;
    ///////////////////////////////////////////////////////////////////
    for(unsigned int i = 0;i < tmp_example_1.length(); i++)
    {
        if(tmp_example_1[0] == '-' && _switch_ == _true_)
        {
            _switch_ = _false_;
            continue;
        }
        else
        {
            if(tmp_example_1[i] == '+' || tmp_example_1[i] == '-' || tmp_example_1[i] == 'i')
            {
                label_2 = i;
                label_2 = i;   
                str_part_detected[k].assign(tmp_example_1,label_1,label_2-label_1);
                label_1 = i+1;
                k++;
            }
        }
    }
    ///////////////////////////////////////////////////////////////////
    label_1 = 0;
    ///////////////////////////////////////////////////////////////////
    _switch_ = _true_;
    ///////////////////////////////////////////////////////////////////
    for(unsigned int i = 0;i < tmp_example_2.length(); i++)
    {
        if(tmp_example_2[0] == '-' && _switch_== _true_)
        {
            _switch_ = _false_;
            continue;
        }
        else
        {
            if(tmp_example_2[i] == '+'  || tmp_example_2[i] == '-' || tmp_example_2[i] == 'i')
            {
                label_2 = i;         
                str_part_detected[k].assign(tmp_example_2,label_1,label_2 - label_1);
                label_1 = i+1;
                k++;
            }
        }
    }
    ///////////////////////////////////////////////////////////////////
    for(unsigned int i = 0; i < tmp_example_1.length();i++)
    {
        if(tmp_example_1[i] == '+' && switch_2 == 1)
        {
            temp_sign[0] = '+';
        }
        else
            if(tmp_example_1[i] == '-')
            {
                temp_sign[0] = '-';
            }
            else
                continue;
    }
    ///////////////////////////////////////////////////////////////////
    for(unsigned int i = 0; i < tmp_example_2.length();i++)
    {
        if(tmp_example_2[i] == '+' && switch_2 == 1)
        {
            temp_sign[1] = "+";
        }
        else
            if(tmp_example_2[i] == '-')
            {
                temp_sign[1] = '-';
            }
            else
                continue;
    }
    ///////////////////////////////////////////////////////////////////
    _switch_ = _true_;
    ///////////////////////////////////////////////////////////////////
    for(unsigned int i = 0;i < 4;i++)
    {
            QString qstr = QString::fromStdString(str_part_detected[i]);
            numbers[i] = qstr.toDouble();
            _switch_ = _false_;
    }
    ///////////////////////////////////////////////////////////////////
    for(unsigned int i = 0;i < example.length();i++)
    {
        if(example[i] == ')')
        {
            _sign_ = example[i+1];
            break;
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
string complex_number :: operations()
{
    if(temp_sign[0] == "+" && temp_sign[1] == "+")
    {
        if(_sign_ == "+")
        {
            real_part = numbers[0] + numbers[2];
            imaginary_unit = numbers[1] + numbers[3];
            output();
        }
        if(_sign_  == "-")
        {
            real_part = numbers[0] - numbers[2];
            imaginary_unit = numbers[1] - numbers[3];
            output();
        }
        if(_sign_  == "*")
        {
            real_part = numbers[0]*numbers[2] - numbers[1]*numbers[3];
            imaginary_unit = numbers[0]*numbers[3] + numbers[1]*numbers[2];
            output();
        }
        if(_sign_  == "/")
        {
            real_part = (numbers[0]*numbers[2] + numbers[1]*numbers[3])/(pow(numbers[2],2) + pow(numbers[3],2));
            imaginary_unit = -(numbers[0]*numbers[3] - numbers[1]*numbers[2])/(pow(numbers[2],2) + pow(numbers[3],2));
            output();
        }
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////
    if(temp_sign[0] == "-" && temp_sign[1] == "-")
    {
        if(_sign_  == "+")
        {
            real_part = numbers[0] + numbers[2];
            imaginary_unit = -numbers[1] + -numbers[3];
            output();
        }
        if(_sign_  == "-")
        {
            real_part = numbers[0] - numbers[2];
            imaginary_unit = -numbers[1] - -numbers[3];
            output();
        }
        if(_sign_  == "*")
        {
            real_part = numbers[0]*numbers[2] - -numbers[1]*-numbers[3];
            imaginary_unit = numbers[0]*-numbers[3] + -numbers[1]*numbers[2];
            output();
        }
        if(_sign_  == "/")
        {
            real_part = (numbers[0]*numbers[2] + -numbers[1]*-numbers[3])/(pow(numbers[2],2) + pow(numbers[3],2));
            imaginary_unit = -(numbers[0]*-numbers[3] - -numbers[1]*numbers[2])/(pow(numbers[2],2) + pow(numbers[3],2));
            output();
        }

    }
    /////////////////////////////////////////////////////////////////////////////////////////////////
    if(temp_sign[0] == "+" && temp_sign[1] == "-")
    {
        if(_sign_  == "+")
        {
            real_part = numbers[0] + numbers[2];
            imaginary_unit = numbers[1] + -numbers[3];
            output();
        }
        if(_sign_  == "-")
        {
            real_part = numbers[0] - numbers[2];
            imaginary_unit = numbers[1] - -numbers[3];
            output();
        }
        if(_sign_  == "*")
        {
            real_part = numbers[0]*numbers[2] - numbers[1]*-numbers[3];
            imaginary_unit = numbers[0]*numbers[3] + numbers[1]*numbers[2];
            output();
        }
        if(_sign_  == "/")
        {
            real_part = (numbers[0]*numbers[2] + numbers[1]*-numbers[3])/(pow(numbers[2],2) + pow(numbers[3],2));
            imaginary_unit = -(numbers[0]*-numbers[3] - numbers[1]*numbers[2])/(pow(numbers[2],2) + pow(numbers[3],2));
            output();
        }
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////
    if(temp_sign[0] == "-" && temp_sign[1] == "+")
    {
        if(_sign_  == "+")
        {
            real_part = numbers[0] + numbers[2];
            imaginary_unit = -numbers[1] + numbers[3];
            output();
        }
        if(_sign_ == "-")
        {
            real_part = numbers[0] - numbers[2];
            imaginary_unit = -numbers[1] - numbers[3];
            output();
        }
        if(_sign_  == "*")
        {
            real_part = numbers[0]*numbers[2] - -numbers[1]*numbers[3];
            imaginary_unit = numbers[0]*numbers[3] + -numbers[1]*numbers[2];
            output();
        }
        if(_sign_  == "/")
        {
            real_part = (numbers[0]*numbers[2] + -numbers[1]*numbers[3])/(pow(numbers[2],2) + pow(numbers[3],2));
            imaginary_unit = -(numbers[0]*numbers[3] - -numbers[1]*numbers[2])/(pow(numbers[2],2) + pow(numbers[3],2));
            output();
        }
    }
    return return_tmp;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void complex_number :: output()
{
    if(imaginary_unit > 0)
    {
        return_tmp.clear();
        return_tmp+="=";
        return_tmp+=to_string(real_part);
        return_tmp+="+";
        return_tmp+=to_string(imaginary_unit);
        return_tmp+="i";
    }
    if(real_part == 0 && imaginary_unit == 0)
    {
        return_tmp.clear();
        return_tmp+="=";
        return_tmp+="0";
    }
    if(real_part == 0)
    {
        return_tmp.clear();
        return_tmp+="=";
        return_tmp+=to_string(imaginary_unit);
        return_tmp+="i";
    }
    if(imaginary_unit < 0)
    {
        return_tmp.clear();
        return_tmp+="=";
        return_tmp+=to_string(real_part);
        return_tmp+=to_string(imaginary_unit);
        return_tmp+="i";
    }
    if(imaginary_unit == 0)
    {
        return_tmp.clear();
        return_tmp+="=";
        return_tmp+=to_string(real_part);
    }
}
///////////////////////////////////////////////////////////////////////////







