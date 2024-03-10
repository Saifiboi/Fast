#include<iostream>
#include"Node.h"
class Linked_List{
    Node *head;
    Node *tail;
    public:
    Linked_List()
    {
        head=NULL;
        tail=NULL;
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
        tail=NULL;
    }
    void insert(const Student &emp)
    {
        Node *temp=new Node(emp);
        if(isEmpty())
        {
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=tail->next;
        }
    }
    void insert_at_index(const Student &emp,int index)
    {
        if(head==NULL && tail==NULL && index ==1)
        {
            Node *temp=new Node(emp);
            head=temp;
            tail=temp;
        }
        else if(head==NULL && tail==NULL && index !=1)
        {
            return;
        }
        else if(index==1)
        {
           Node *temp=new Node(emp);
           temp->next=head;
           head=temp;

        }
        else
        {
            Node *curr=head;
            int counter = 1;
            while(curr->next!=NULL && index > counter)
            {
                counter++;
                curr=curr->next;
            }
            if(curr==tail && index!=counter)
            {
                return;
            }
            else {
                Node *temp=new Node(emp);
                temp->next=curr;
                temp->prev=curr->prev;
                curr->prev=temp;
            }
        }  
    }
    void remove(string id)
    {
        Node *temp=head;
        if(isEmpty())
        {
            cout<<"\nEmpty Array:\n";
        }
        else
        {
            while(temp->E.std_id!=id && temp!=tail)
            {
                temp=temp->next;
            }
            if(temp->E.std_id!=id && temp==tail)
            {
                cout<<"\nRecord does not exist\n";
            }
            else if(temp->E.std_id==id && temp==tail)
            {
                temp->prev->next=NULL;
                tail=temp->prev;
                delete temp;
            }
            else if(temp==head)
            {
                head=head->next;
                head->prev=NULL;
                delete temp;
            }
            else{
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                delete temp;

            }
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
    void updategpa(double g,string i)
    {
        Node *temp=head;
        if(head==NULL && tail==NULL)
        {
            cout<<"\nEmpty Array:\n";
        }
        else
        {
            while(temp->E.std_id!=i && temp!=tail)
            {
                temp=temp->next;
            }
            if(temp->E.std_id!=i && temp==tail)
            {
                cout<<"\nRecord does not exist\n";
            }
            else{
               temp->E.cgpa=g;

            }
        }
    }
    void clearall()
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
        tail=NULL;
    }
    bool isEmpty()
    {
        if(head==NULL && tail==NULL)
        {
            return 1;
        }
        return 0;
    }
    void sort()
    {
       if(isEmpty())
        {
             cout<<"\nEmpty Array:\n";
        } 
        else{
            Node * temp;
            temp=head;
            Node *temp2=head;
            Student S;
            Node *swaap=new Node(S);
            int check=0;
            while(temp2!=tail)
            {
                temp=head;
                check=0;
                while(temp!=tail)
                {
                    if(temp->E.cgpa > temp->next->E.cgpa)
                    {
                        if(temp->next==tail)
                        {
                            tail=tail->prev;
                        }
                        if(head==temp)
                        {
                            head=head->next;
                        }
                        if(temp2==temp)
                        {
                            temp2=temp2;
                        }
                        swaap->prev=temp->prev;
                        swaap->next=temp->next;
                        temp->next=temp->next->next;
                        temp->prev=temp->next->prev;
                        temp->next->next=swaap->next;
                        temp->next->prev=swaap->prev;
                        check=1;
                    }
                    
                    temp=temp->next;
                }
                if(!check)
                {
                    break;
                }
                temp2=temp2->next;
            }
        }
    }
    int find_index(string find)
    {
        
        if(isEmpty())
        {
            return -1;
        }
        else{
            Node * curr=head;int counter =1;
            for(;counter<=calc_size();counter++)
            {
                if(curr->E.std_id==find)
                    return counter;
                curr=curr->next;
            }
            return -1;
        }
    }
    void sort()
    {
       if(isEmpty())
        {
             cout<<"\nEmpty Array:\n";
        } 
        else{ 
            Node* placer=head;
            Node *smallest=NULL;
            Node *curr=NULL;
            while(placer->next!=NULL)
            {
                smallest = placer;
                curr = placer->next;
                while(curr!=NULL)
                {
                    if(curr->E.cgpa<smallest->E.cgpa)
                    {
                        smallest=curr;
                        break;
                    }
                    curr=curr->next;
                }
                smallest->E.print();
                cout<<endl;
                insert_at_index(smallest->E,find_index(placer->E.std_id));
                remove(smallest->E.std_id);
                placer=placer->next;

            }
        }  
            
        //     Node * swap;
        //     for(int i=0;i<calc_size();i++)
        //     {
        //         largest = head;
        //         temp=head->next;
        //         while(temp!=NULL)
        //         {
        //             if(largest <temp->E.cgpa)
        //             {
        //                 swap=temp;
        //                 largest = temp->E.cgpa;
        //             }
        //             temp=temp->next;
        //         }
        //         if(swap==head)
        //         {
        //             head=head->next;
        //             insert(swap->E);
        //             remove(swap->E.std_id);
        //         }
        //         else if(swap==tail)
        //         {
        //             continue;
        //         }
        //         else{
        //             insert(swap->E);
        //             remove(swap->E.std_id);
        //         }
        //     }
        // }
    }
    int calc_size()
    {
        int i=1;
        Node * temp=head;
        while(temp!=tail)
        {
            i++;
            temp=temp->next;
        }
        return i;
    }
};