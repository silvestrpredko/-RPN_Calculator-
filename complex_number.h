#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
/////////////////////////////////////////
#include <iostream>
#include <string>
#include <math.h>
#include <conio.h>
#include <algorithm>
#include <sstream>
#include <Qstring>
/////////////////////////////////////////
using namespace std;
/////////////////////////////////////////
class complex_number
{
private:
    enum choice{_true_,_false_};
    choice _switch_;
    double numbers[4];
    float real_part;
    float imaginary_unit;
    bool switch_2;
    string _sign_;
    string temp_sign[2];
    int label_1,label_2,label_3;
    string example;
    string  str_part_detected[4];
    string  tmp_example_1;
    string  tmp_example_2;
    string  return_tmp;
public:
    string operations();
    template <class T>
    string to_string(T param)
    {
        string str = "";
        stringstream ss;
        ss<<param;
        getline(ss, str);
        return str;
    }
    void input(string &tmp);
    void sort();
    void output();

};
/////////////////////////////////////////
#endif // COMPLEX_NUMBER_H
