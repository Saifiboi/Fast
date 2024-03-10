#include<iostream>
#include"Linked_list.h"
using namespace std;
int main()
{
    Linked_List L;
    Node *temp;
    Employee E(1,"saif","12345",35000,10000);
    Employee E1(2,"saif","12345",25000,10000);
    Employee E2(3,"saif","12345",15000,10000);
    Employee E3(4,"saif","12345",5000,10000);
    L.insert(E);
    L.insert(E1);
    L.insert(E2);
    L.insert(E3);
    Node *n1=L.head->next;
    Node *n2=L.head->next->next->next;
    // L.traverseall();
    // L.remove(1);
    // L.traverseall();
    // L.remove(5);
    // // L.sort();
    L.sort();
    cout<<endl<<endl;
    L.traverseall();
    cout<<endl;
}