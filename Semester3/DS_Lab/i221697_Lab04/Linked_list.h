#include<iostream>
#include"Node.h"
class Linked_List{
    public:
    Node *head;
    Linked_List()
    {
        head=NULL;
    }
    ~Linked_List()
    {
         Node* temp;
        while(head!=NULL)
        {
           temp=head->next;
           delete head;
           head =temp;
        }
        head =0;
        temp=0;
    }
    void insert(Employee emp)
    {
        Node *temp=new Node(emp);
        if(head==NULL)
        {
            head=temp;
        }
        else{
            Node *temp2=head;
            while(temp2->next!=NULL)
            {
                temp2=temp2->next;
            }
            temp2->next=temp;
        }
    }
    void insert_at_head(const Employee &emp)
    {
      Node *temp=new Node(emp);
      temp->next=head;
      head=temp;

    }
    // void remove(int id)
    // {
    //     Node *temp;
    //     Node *buss=NULL;
    //     bool check=0;
    //     if(head!=NULL)
    //     {
            
    //         if(temp->E.emp_id==id)
    //         {
    //             temp=head;
    //             head=head->next;
    //             check=1;
    //             delete temp;
    //         }
    //         else{
    //             while(temp!=NULL)
    //             {
    //                 if(temp->E.emp_id==id)
    //                 {
    //                     buss->next=temp->next;
    //                     delete temp;
    //                     check=1;
    //                     break;
    //                 }
    //                 buss=temp;
    //                 temp=temp->next;
    //             }
    //         }
    //     }
    //     else
    //     {
    //         cout<<"List Empty"<<endl;
    //     }
    //     if(check==0)
    //     {
    //         cout<<"Record not found"<<endl;
    //     }
    // }
    void remove(int id)
    {
        if(head==NULL)
        {
            return;
        }
        else
        {
            Node *curr=NULL;
            Node *prev;
            for(curr=head;curr!=NULL && curr->E.emp_id!=id;curr=curr->next)
            {
                prev=curr;
            }
            if(curr==NULL)
            {
                return;
            }
            else if(curr==head)
            {
                head=head->next;
                delete curr;
            }
            else if(curr->next=NULL){
                prev->next=NULL;
                delete curr;
            }
            else{
                prev->next=curr->next;
                delete curr;
            }
        }
    }
    void swap(Node * n1,Node *n2)
    {
        bool check=0;
        if(n1==head)
        {
            Node *curr=head;
            while(curr!=NULL && curr->next!=n2)
            {
                curr=curr->next;
            }
            if(curr!=NULL)
            {
                head=curr->next;
                curr->next=n1;
                check=1;
            }
        }
        else if(n2==head)
        {
           Node *curr=head;
            while(curr !=NULL && curr->next!=n1)
            {
                curr=curr->next;
            }
            if(curr!=NULL)
            {
                head=curr->next;
                curr->next=n2; 
                check=1;
            }
        }
        else{
            Node * curr=head;
            while(curr!=NULL && curr->next!=n1 && curr->next!=n2)
            {
                curr=curr->next;
            }
            if(curr->next==n1)
            {
                Node *curr2=curr;
                while(curr2 !=NULL && curr2->next!=n2)
                {
                    curr2=curr2->next;
                }
                if(curr2!=NULL)
                {
                    curr2->next=n1;
                    curr->next=n2;
                    check=1;
                }
            }
            else if(curr->next==n2)
            {
                Node *curr2=curr;
                while(curr2 !=NULL && curr2->next!=n1)
                {
                    curr2=curr2->next;
                }
                if(curr!=NULL)
                {
                    curr2->next=n2;
                    curr->next=n1;
                    check=1;
                } 
            }
            else{
                return;
            }
        }
        if(check)
        {
            Node *temp_next=NULL;
            temp_next=n1->next;
            n1->next=n2->next;
            n2->next=temp_next;
        }
    }
    void sort()
    {
        Node * curr=head;
        Node * min;
        Node * curr2;
        bool check;
        while(curr->next!=NULL)
        {
            check=0;
            min=curr;
            curr2=curr->next;
            while(curr2 !=NULL)
            {
                if(curr2->E.salary < min->E.salary)
                {
                    min=curr2;
                    check=1;
                }
                curr2=curr2->next;
            }
            if(check)
            {
                swap(curr,min);
                curr=min;
            }
            curr=curr->next;
        }

    }
    void traverseall()
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            temp->E.print();
            temp=temp->next;
        }
     
    }
};