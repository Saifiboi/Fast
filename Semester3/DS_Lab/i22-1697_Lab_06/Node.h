#include<iostream>
#include"Student.h"
using namespace std;
class Node{
    public:
    Student E;
    int prior;
    Node *next; 
    Node(Student emp,int priority=5)
    {
        this->E=emp;
        this->prior=priority;
        this->next=NULL;
    }
};