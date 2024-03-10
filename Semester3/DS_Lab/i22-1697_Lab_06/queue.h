#include<iostream>
#include"Node.h"
class queue{
    Node *front;
    Node *rear;
    int no_items;
    public:
    queue()
    {
        front=NULL;
        rear=NULL;
    }
    ~queue()
    {
        Node* temp;
        while(front!=NULL)
        {
           temp=front->next;
           delete front;
           front =temp;
        }
        front =0;
        rear=0;
        temp=0;
    }
    void Enqueue(const Student &emp)
    {
        Node *temp=new Node(emp);
        if(front==NULL)
        {
            front=temp;
            rear=temp;
        }
        else{
            rear->next=temp;
            rear=temp;
        }
        this->no_items++;
    }
   void Dequeue()
    {
        if(front==NULL && rear==NULL)
        {
            return;
        }
        Node *temp=front;
        front=front->next;
        delete temp;
    }
    void prior_Dequeue()
    {
        if(front==NULL && rear==NULL)
        {
            return;
        }
        else if(front==rear)
        {
            delete front;
            front=0;
            rear=0;
        }
        else{
            Node *max=front;
            Node *prev=front;
            Node *curr=front->next;
            int max_prior=curr->prior;
            Node * max_prev;
            while(curr!=NULL)
            {
                if(max_prior > curr->prior)
                {
                    max=curr;
                    max_prior=curr->prior;
                    max_prev=prev;
                }
                prev=curr;
                curr=curr->next;
            }
            if(max==front)
            {
                front = front->next;
                delete max;
            }
            else if (max==rear)
            {
                rear=max_prev;
                delete max;
            }
            else{
                prev->next=max->next;
                delete max;
            }
        }
    }
    void Display()
    {
        Node *temp=front;
        while(temp!=NULL)
        {
            temp->E.print();
            temp=temp->next;
        }
     
    }
    Node * FRONT()
    {
        return this->front;
    }
    Node * REAR()
    {
        return this->rear;
    }
    void clear()
    {
        Node* temp;
        while(front!=NULL)
        {
           temp=front->next;
           delete front;
           front =temp;
        }
        front =0;
        rear=0;
        temp=0;
    }
    bool isEmpty()
    {
        if(front==NULL && rear==NULL)
            return 1;
        return 0;
    }
};