#include<iostream>
#include"Employee.h"
using namespace std;
class Node{
    public:
    Employee E;
    Node *next; 
    Node(Employee emp)
    {
        this->E=emp;
        this->next=NULL;
    }
};