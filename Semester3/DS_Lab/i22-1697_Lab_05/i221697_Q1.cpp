#include<iostream>
#include"Linked_list.h"
using namespace std;
int main()
{
    Linked_List L;
    Node *temp;
    Student E("1","saif",4,20);
    Student E1("2","saif",6,21);
    Student E2("3","saif",3.5,22);
    Student E3("4","saif",2,23);
    L.insert(E);
    L.insert(E1);
    L.insert(E2);
    L.insert(E3);
   
    // L.traverseall();
    // L.remove("4");
    // cout<< L.calc_size()<<endl;
    // L.traverseall();
    // L.remove("5");
    // L.traverseall();
    // L.updategpa(6,"1");
    //  L.traverseall();
    // L.updategpa(8,"4");
    //  L.traverseall();
    // L.clearall();
    // cout<<"\n"<<L.isEmpty()<<endl;
    // L.traverseall();
}
