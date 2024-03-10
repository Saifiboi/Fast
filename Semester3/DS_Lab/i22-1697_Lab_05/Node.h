#include<iostream>
#include"Student.h"
using namespace std;
class Node{
    public:
    Student E;
    Node *next; 
    Node *prev;
    Node(Student emp)
    {
        this->E=emp;
        this->next=NULL;
        this->prev=NULL;
    }
};