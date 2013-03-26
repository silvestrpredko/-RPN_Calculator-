#ifndef RPNCALC_H
#define RPNCALC_H

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>

using namespace std;

class RPNCalc
{
   private:
       vector<double> st;
       string         token;
       stack<char>    opStack;
       string         postFixString;
       string         input;
       double         result;
   public:
       RPNCalc (string expr):   input (expr) {}
       bool    isOperator       (char);
       bool    isOperand        (char);
       int     compareOperators (char, char);
       double  rpnToDouble      (const string &);
       void    infixToPostfix   ();
       double  getResult        ();
};

#endif // RPNCALC_H
