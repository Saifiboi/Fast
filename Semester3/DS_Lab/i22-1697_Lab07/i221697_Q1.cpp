#include<iostream>
#include<string>
#include"stack.h"
using namespace std;
int main()
{
    stack L;
    // Q1 main


    // Node *temp;
    // L.push('c');
    // L.push('d');
    // L.push('e');
    // L.push('f');
    // L.Display_stack();
    // L.Peak();
    // L.pop();
    // cout<<"\nIs stack empty?"<<L.is_Empty()<<endl;
    // cout<<"IS stack Full?"<<L.is_Full()<<endl;
    // L.Display_stack();
    // L.clear();
    // L.Display_stack();
    // cout<<"\nIs stack empty?"<<L.is_Empty()<<endl;
    // cout<<"IS stack Full?"<<L.is_Full()<<endl;
    // cout<<endl;


    //Q2 main
    string S="1 + 2 * 3 * 3 + {4 - 5 (6 (7/8/9) + 10)} - 11 + (12*8) / {13 +13}] + 14";
    cout<<endl<<"Result is:"<<L.evaluate(S);
}