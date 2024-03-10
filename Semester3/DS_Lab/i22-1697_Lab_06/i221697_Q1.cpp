#include<iostream>
#include"queue.h"
using namespace std;
int main()
{
     queue L;
    Node *temp;
    Student E("1","saif",4,20);
    Student E1("2","saif",6,21);
    Student E2("3","saif",3.5,22);
    Student E3("4","saif",2,23);
    L.Enqueue(E);
    L.Enqueue(E1);
    L.Enqueue(E2);
    L.Enqueue(E3);
   
    // L.Display();
    // L.Dequeue();
    // L.Display();
    // L.prior_Dequeue();
    // L.Display();
    // cout<<endl<<L.isEmpty()<<endl;
    // L.clear();
    // cout<<endl<<L.isEmpty()<<endl;
    cout<<endl<<endl;
    L.FRONT()->E.print();
    L.REAR()->E.print();
    cout<<endl<<endl;
    // L.Display();
}