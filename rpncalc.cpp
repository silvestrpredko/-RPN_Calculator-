#include "rpncalc.h"

bool RPNCalc :: isOperator(char character)
{
    if (character == '+' || character == '-' || character == '*' || character == '/')
    {
        return true;
    }
    return false;
}

bool RPNCalc :: isOperand(char character)
{
    if (!isOperator(character) && character != '(' && character != ')')
    {
        return true;
    }
    return false;
}

int RPNCalc :: compareOperators(char op1, char op2)
{
    if ((op1 == '*' || op1 == '/') && (op2 == '+' || op2 == '-'))
    {
        return -1;
    }

    else if ((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '/'))
    {
        return 1;
    }
    return 0;
}

double RPNCalc :: rpnToDouble(const string &expr)
{
    istringstream iss(expr);

    while (iss >> token)
    {
          double tokenNum;

          if (istringstream(token) >> tokenNum)
          {
            st.push_back(tokenNum);
          }

          else
          {
                double secondOperand = st.back();
                st.pop_back();
                double firstOperand = st.back();
                st.pop_back();

                if (token == "*")
                      st.push_back(firstOperand * secondOperand);
                else if (token == "/")
                      st.push_back(firstOperand / secondOperand);
                else if (token == "-")
                      st.push_back(firstOperand - secondOperand);
                else if (token == "+")
                      st.push_back(firstOperand + secondOperand);
                else
                {
                  cout << "Error" << endl;
                  exit(1);
                }
          }
    }

    return st.back();
}

void RPNCalc :: infixToPostfix ()
{
        string::iterator it = input.begin();
        cout<<input<<endl;
    while (it != input.end())
    {
        if (isOperand(*it))
        {
            postFixString += *it;
        }

        else if (isOperator(*it))
        {
            while (!opStack.empty() && opStack.top() != '(' && compareOperators(opStack.top(), *it) <= 0)
            {
                postFixString += opStack.top();
                opStack.pop();
            }
            opStack.push(*it);
        }

        else if (*it == '(')
        {
            opStack.push(*it);
        }

        else if (*it == ')')
        {
            while (!opStack.empty())
            {
                if (opStack.top() == '(')
                {
                    opStack.pop();
                    break;
                }
                postFixString += opStack.top();
                                opStack.pop();
            }
        }

        *it++;
    }

    while (!opStack.empty())
    {
                postFixString += " ";
        postFixString += opStack.top();
        opStack.pop();
    }
}

double RPNCalc :: getResult ()
{
    infixToPostfix ();
    cout << "Postfix: " << postFixString << endl;
    result = rpnToDouble (postFixString);
    return result;
}
