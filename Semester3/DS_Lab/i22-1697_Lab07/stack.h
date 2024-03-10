#include<iostream>
#include"Node.h"
class stack{
    public:
    Node *top;
    int size ;
    int no_elements;


    //Q1 code 
    stack()
    {
        top=NULL;
        size=30;
        no_elements=0;
    }
    ~stack()
    {
        Node* temp;
        while(top!=NULL)
        {
           temp=top->next;
           delete top;
           top =temp;
        }
        top =0;
        temp=0;
        no_elements=0;
    }
    
    void push(char emp)
    {
        if(no_elements!=size)
        {
            Node *temp=new Node(emp);
            temp->next=top;
            top=temp;
            no_elements++;
        }
        else{
            // cout<<"\nSorry!Stack is Full!\n";
        }

    } 
    void pop()
    {
        if(no_elements!=0)
        {
            // cout<<"\nElement at Top:"<<top->E;
            Node *temp=top;
            top=top->next;
            delete temp;
            no_elements--;
        }
        else{
            // cout<<"Stack is empty:"<<endl;
        }
    }
    bool is_Empty()
    {
        if(no_elements==0)
        {
            return 1;
        }
        return 0;
    }
    bool is_Full()
    {
        if(no_elements==size)
        {
            return 1;
        }
        return 0;
    }
    void clear()
    {
        Node* temp;
        while(top!=NULL)
        {
           temp=top->next;
           delete top;
           top =temp;
        }
        top =0;
        temp=0;
        no_elements=0;
    }
    void Peak()
    {
        if(top!=NULL)
        {
            cout<<"\nElement at top is:"<<top->E<<endl;
        }
        else{
            cout<<"Nothing to display:\n";
        }
    }
    void Display_stack()
    {
        if(top !=NULL)
        {
            Node * temp=top;
            cout<<"Stack from top to depth is :\n";
            int i=1;
            while(temp !=NULL)
            {
                cout<<"i."<<temp->E<<endl;
                temp=temp->next;
                i++;
            }
        }
        else
        {
            cout<<"\n Nothing to display:"<<endl;
        }
    }


    //Q2 code 
    bool is_brace_open(char ch)
    {
        if(ch=='{' || ch=='(' || ch =='[')
        {
            return 1;
        }
        return 0;
    }
    bool is_brace_close(char ch)
    {
        if(ch=='}' || ch==')' || ch ==']')
        {
            return 1;
        }
        return 0;
    }
    bool compare_brace(char ch)
    {
        if((!this->is_Empty()) && ((ch=='}' && top->E=='{')||(ch==']' && top->E=='[')||(ch==')' && top->E=='(')))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool evaluate(string exp)
    {
        int i=0;
        while(exp[i]!='\0')
        {
            if(is_brace_open(exp[i]))
            {
                this->push(exp[i]);
            }
            else if(is_brace_close(exp[i]))
            {
                if(compare_brace(exp[i]))
                {
                    this->pop();
                }
                else{
                    return 0;
                }
            }
            i++;
        }
        if(this->is_Empty())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};