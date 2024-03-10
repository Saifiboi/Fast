#include<iostream>
using namespace std;
class Node{
    public:
    char E;
    Node *next; 
    Node(char emp)
    {
        this->E=emp;
        this->next=NULL;
    }
};