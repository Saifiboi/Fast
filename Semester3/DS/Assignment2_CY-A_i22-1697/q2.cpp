#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include "stack.h"
using namespace std;
class Node1
{
public:
    string dig;
    Node1 *next;
    Node1(string di)
    {
        this->dig = di;
        this->next = NULL;
    }
};
class stack1
{
public:
    Node1 *top;
    int size;
    int no_elements;
    stack1(int dig = 50)
    {
        top = NULL;
        size = dig;
        no_elements = 0;
    }
    ~stack1()
    {
        Node1 *temp;
        while (top != NULL)
        {
            temp = top->next;
            delete top;
            top = temp;
        }
        top = 0;
        temp = 0;
        no_elements = 0;
    }

    void push(string dig)
    {
        if (no_elements != size)
        {
            Node1 *temp = new Node1(dig);
            temp->next = top;
            top = temp;
            no_elements++;
        }
        else
        {
            cout << "\nSorry!Stack is Full!\n";
        }
    }
    string pop()
    {
        if (no_elements != 0)
        {
            string data;
            Node1 *temp = top;
            data = top->dig;
            top = top->next;
            delete temp;
            no_elements--;
            return data;
        }
        else
        {
            cout << "Stack is empty:" << endl;
            return "\0";
        }
    }
    bool is_Empty()
    {
        if (no_elements == 0)
        {
            return 1;
        }
        return 0;
    }
    bool is_Full()
    {
        if (no_elements == size)
        {
            return 1;
        }
        return 0;
    }
    void clear()
    {
        Node1 *temp;
        while (top != NULL)
        {
            temp = top->next;
            delete top;
            top = temp;
        }
        top = 0;
        temp = 0;
        no_elements = 0;
    }
    void Display_stack()
    {
        if (top != NULL)
        {
            Node1 *temp = top;
            cout << "Stack from top to depth is :\n";
            int i = 1;
            while (temp != NULL)
            {
                cout << i << "." << temp->dig << endl;
                temp = temp->next;
                i++;
            }
        }
        else
        {
            cout << "\n Nothing to display:" << endl;
        }
    }
};
class queue
{
    Node1 *front;
    Node1 *rear;
    int no_items;

public:
    queue()
    {
        front = NULL;
        rear = NULL;
        no_items = 0;
    }
    ~queue()
    {
        Node1 *temp;
        while (front != NULL)
        {
            temp = front->next;
            delete front;
            front = temp;
        }
        front = 0;
        rear = 0;
        temp = 0;
    }
    void Enqueue(const string S)
    {
        Node1 *temp = new Node1(S);
        if (front == NULL)
        {
            front = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
        this->no_items++;
    }
    string Dequeue()
    {
        if (front == NULL && rear == NULL)
        {
            return "\0";
        }
        if (front == rear)
        {
            Node1 *temp = front;
            string data = temp->dig;
            front = 0;
            rear = 0;
            delete temp;
            return data;
        }

        Node1 *temp = front;
        front = front->next;
        string data = temp->dig;
        delete temp;
        return data;
    }
    void Display()
    {
        Node1 *temp = front;
        int i = 1;
        while (temp != NULL)
        {
            cout << i << "." << temp->dig << endl;
            temp = temp->next;
            i++;
        }
    }
    Node1 *FRONT()
    {
        return this->front;
    }
    Node1 *REAR()
    {
        return this->rear;
    }
    void clear()
    {
        Node1 *temp;
        while (front != NULL)
        {
            temp = front->next;
            delete front;
            front = temp;
        }
        front = 0;
        rear = 0;
        temp = 0;
    }
    bool isEmpty()
    {
        if (front == NULL && rear == NULL)
            return 1;
        return 0;
    }
};
int evaluate(int opnd1, int opnd2, char oprtr)
{
    if (oprtr == '+')
    {
        return opnd1 + opnd2;
    }
    if (oprtr == '-')
    {
        return opnd1 - opnd2;
    }
    if (oprtr == '*')
    {
        return opnd1 * opnd2;
    }
    if (oprtr == '/')
    {
        return opnd1 / opnd2;
    }
    if (oprtr == '^')
    {
        return int(pow(opnd1, opnd2));
    }
    return -1;
}
int new_evaluation(queue &q)
{
    int opnd1 = 0, opnd2 = 0, oprtr, res;
    stack s;
    while (!q.isEmpty())
    {
        string exp = q.Dequeue();
        cout << exp << endl;
        opnd1=0;opnd2=0;
        for(int i=0;i<exp.length();i++)
        {
            if(exp[i]>='0' && exp[i]<='9')
            {
                while(i<exp.length())
                {
                    opnd1=opnd1*10+exp[i]-48;
                    i++;
                }
                s.push(opnd1);
                i--;
            }
            else{
                opnd2=s.pop();
                opnd1=s.pop();
                res=evaluate(opnd1,opnd2,exp[i]);
                s.push(res);
            }

        }
    }
    cout<<"\nThe Result of postfix expression is "<<s.pop()<<endl;
    return 0;
}
int main()
{
    string exp;
    cout << "\nEnter an Infix Expression :";
    getline(cin, exp);
    exp.erase(std::remove(exp.begin(), exp.end(), ' '), exp.end());
    stack1 s(exp.length());
    queue q;
    string opnd, oprtr;
    for (int i = 0; i < exp.length(); i++)
    {
        opnd = "\0";
        oprtr = "\0";
        if (exp[i] != '*' && exp[i] != '/' && exp[i] != '+' && exp[i] != '-' && exp[i] != '(' && exp[i] != ')' && exp[i] != '^')
        {
            while (exp[i] != '*' && exp[i] != '/' && exp[i] != '+' && exp[i] != '-' && exp[i] != '(' && exp[i] != ')' && exp[i] != '^' && exp[i] != '\0')
            {
                opnd.push_back(exp[i]);
                i++;
            }
            q.Enqueue(opnd);
            i--;
        }
        else if (exp[i] == ')')
        {
            oprtr = s.pop();
            q.Enqueue(oprtr);
        }
        else if (exp[i] != '(')
        {
            oprtr.push_back(exp[i]);
            s.push(oprtr);
        }
    }
    new_evaluation(q);
}