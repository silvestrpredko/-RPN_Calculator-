#include "complex_number.h"
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void complex_number::input(string &tmp)
{
    example = tmp;
    //////////////////////////////////////////////////////////////////
    Error = fail;
    unsigned int i = 0;
    while(i < example.length())
    {
        if(example[i] == '(' && Error == fail)
        {
            Error = good;
        }
        else
            throw ERROR("Error you forgot \"(\" ");
        for(unsigned int j = i;j < example.length();j++)
        {
            if(example[j] == 'i' && example[j+1] == ')' && example[j-1] == '(')
            {
                throw ERROR("Error");
            }
            if(example[j] == ')' && example[j-1] != 'i')
            {
                throw ERROR("You forgot i !");
            }
            if(example[j] == 'i' && example[j+1] != ')')
            {
                throw ERROR("Error you forgot \")\" ");
            }
            if(example[j] == 'i' && example[j+1] == ')' && Error == good)
            {
                Error = fail;
                i = j+2;
                break;
            }
            else
                if(j == example.length() - 1)
                {
                    throw ERROR("Error you forgot \")\" ");
                }
                else continue;
        }
        i++;
    }
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
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for(unsigned int i = 0;i < tmp_example_1.length();i++)
    {
        if(tmp_example_1[i] == '0' || tmp_example_1[i] == '1' || tmp_example_1[i] == '2' || tmp_example_1[i] == '3' || tmp_example_1[i] == '4' ||
           tmp_example_1[i] == '5' ||tmp_example_1[i] == '6' ||tmp_example_1[i] == '7' ||tmp_example_1[i] == '8' || tmp_example_1[i] == '9' )
        {
            if(tmp_example_1[i+1] == '+' || tmp_example_1[i+1] == '-' || tmp_example_1[i+1] == '*' || tmp_example_1[i+1] == '/')
            {
                if(tmp_example_1[i+2] == '+' || tmp_example_1[i+2] == '-' || tmp_example_1[i+2] == '*' || tmp_example_1[i+2] == '/')
                {
                    throw ERROR("Error operator!");
                }
            }
        }
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for(unsigned int i = 0;i < tmp_example_2.length();i++)
    {
        if(tmp_example_2[i] == '0' || tmp_example_2[i] == '1' || tmp_example_2[i] == '2' || tmp_example_2[i] == '3' || tmp_example_2[i] == '4' ||
           tmp_example_2[i] == '5' ||tmp_example_2[i] == '6' ||tmp_example_2[i] == '7' ||tmp_example_2[i] == '8' || tmp_example_2[i] == '9' )
        {
            if(tmp_example_2[i+1] == '+' || tmp_example_2[i+1] == '-' || tmp_example_2[i+1] == '*' || tmp_example_2[i+1] == '/')
            {
                if(tmp_example_2[i+2] == '+' || tmp_example_2[i+2] == '-' || tmp_example_2[i+2] == '*' || tmp_example_2[i+2] == '/')
                {
                    throw ERROR("Error operator!");
                }
            }
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void complex_number :: sort()
{
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
    //-----------------------------------------------------------------
    unsigned int j = 0;
    while(j < 4)
    {
        for_str_part_det = str_part_detected[j];
        for(unsigned int i = 0;i < for_str_part_det.length();i++)
        {
            if(for_str_part_det[i] == '/' || for_str_part_det[i] == '*')
            {
                temp_1.assign(for_str_part_det,0,i);
                temp_2.assign(for_str_part_det,i+1,for_str_part_det.length()-(i+1));
                if(for_str_part_det[i] == '*')
                {
                    num_1 = stof(temp_1);
                    num_2 = stof(temp_2);
                    num_3 = num_1*num_2;
                    str_part_detected[j] = to_string(num_3);
                }
                if(for_str_part_det[i] == '/')
                {
                    num_1 = stof(temp_1);
                    num_2 = stof(temp_2);
                    num_3 = num_1/num_2;
                    str_part_detected[j] = to_string(num_3);
                }
            }
        }
        cout<<str_part_detected[j]<<endl;
        j++;
    }
    //-----------------------------------------------------------------
    ///////////////////////////////////////////////////////////////////
    for(unsigned int i = 0;i < 4;i++)
    {
            numbers[i] = stof(str_part_detected[i]);
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////







