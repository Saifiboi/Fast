#include<iostream>
#include<string>
#include<algorithm>
#include "stack.h"
#include <cmath>
using namespace std;
int  evaluate(int opnd1,int opnd2,char oprtr)
{
    if(oprtr=='+')
    {
        return opnd1 + opnd2;
    }
    if(oprtr=='-')
    {
        return opnd1-opnd2;
    }
    if(oprtr=='*')
    {
        return opnd1*opnd2;
    }
    if(oprtr=='/')
    {
        return opnd1/opnd2;
    }
    if(oprtr=='^')
    {
        return int(pow(opnd1,opnd2));
    }
    return -1;
}
int main()
{
    string exp;
    cout<<"\nEnter an Expression:";
    getline(cin,exp);
    exp.erase(std::remove(exp.begin(), exp.end(), ' '), exp.end());
    stack s(exp.length());
    int opnd1,opnd2, res=0;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]>='0' && exp[i]<='9')
        {
            opnd1=exp[i]-48;
            s.push(opnd1);
        }
        else{
            opnd2=s.pop();
            opnd1=s.pop();
            res=evaluate(opnd1,opnd2,exp[i]);
            s.push(res);
        }
    }
    cout<<"\nThe Result of postfix expression is "<<s.pop()<<endl;
}