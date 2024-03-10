#include<iostream>
#include "stack.h"
using namespace std;
int calc_size(int number)
{
    int counter =0;
    while(number > 1)
    {
        number /=2;
        counter++;
    }
    return counter+1;
}
int main()
{
    int number;
    cout<<"\nEnter a Number:";
    cin>>number;
    while(number < 0)
    {
        cout<<"\nPlease Enter a positive number !Our program does not support sign bit:"<<endl;
        cin>>number;
    }
    stack s(calc_size(number));
    while(number>1)
    {
        s.push(number%2);
        number=number/2;
    }
    s.push(number);
    int bin=0;
    while(!s.is_Empty())
    {
        bin=bin*10+s.pop();
    }
    cout<<"\nThe number in binary is :"<<bin<<endl;
}