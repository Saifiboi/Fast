#include<iostream>
#include<cmath>
#include"stack.h"
using namespace std;

int main()
{
    long int  number,checker,no_digs=0;
    bool repeat =true;
    cout<<"\nEnter a  binary number (0/1):";
    while(repeat)
    {
        repeat=false;
        cin>>number;
        if(number==0)
        {
            cout<<"\nNumber in integer is : 0"<<endl;
            return 0;
        }
        checker=number;
        no_digs=0;
        for(int i=0;checker>0;i++,checker/=10,no_digs++)
        {
            if(checker%10!=1 && checker%10!=0)
            {
                cout<<"\nInvalid Number!Try Again:";
                repeat=true;
                break;
            }
        }
    }
    stack s(no_digs);
    for(int i=no_digs-1;i>=0;i--)
    {
        s.push(number/int(pow(10,i)));
        number =number % int(pow(10,i));
    }
    int sum=0;
    int i=0;
    s.Display_stack();
    while(!s.is_Empty())
    {
        sum+=s.pop()*int(pow(2,i));
        i++;
    }
    cout<<"\nNumber in integer is : "<<sum<<endl;
}