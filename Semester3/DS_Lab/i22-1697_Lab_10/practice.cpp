#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        next = NULL;
        this->data = data;
    }
    ~Node();
};
class Stack
{
private:
    Node *top;
    int no_elements;
    int size;

public:
    Stack(int size)
    {
        top = NULL;
        no_elements = 0;
        this->size = size;
    }
    void insert(int data)
    {
        if (no_elements != size)
        {
            Node *temp = new Node(data);
            temp->next = top;
            top = temp;
            no_elements++;
        }
        else
        cout<<"Stack is FULL!"<<endl;
    }
    void pop()
    {
        if(no_elements>0)
        {
            Node * temp=top;
            top=top->next;
            delete temp;
        }
        cout<<"\nStack is Empty"<<endl;
    } 
    int Top()
    {
        return top->data;
    }
    void swap()
    {
        Node * temp=top->next;
        top->next=top->next->next;
        temp->next=top;
        top=temp;

    }
    void print()
    {
        Node * curr = top;
        while(curr!=NULL)
        {
            cout<<curr->data<<"\t";
            curr=curr->next;
        }
        cout<<endl;
    }
    ~Stack()
    {
        
    }
};

int main()
{
    Stack s(30);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.print();
    s.swap();
    s.print();
}