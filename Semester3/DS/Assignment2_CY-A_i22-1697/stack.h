#include <iostream>
using namespace std;
class Node
{
public:
    int dig;
    Node *next;
    Node(int di)
    {
        this->dig = di;
        this->next = NULL;
    }
};
class stack
{
public:
    Node *top;
    int size;
    int no_elements;
    stack(int dig = 50)
    {
        top = NULL;
        size = dig;
        no_elements = 0;
    }
    ~stack()
    {
        Node *temp;
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

    void push(int dig)
    {
        if (no_elements != size)
        {
            Node *temp = new Node(dig);
            temp->next = top;
            top = temp;
            no_elements++;
        }
        else
        {
            cout << "\nSorry!Stack is Full!\n";
        }
    }
    int pop()
    {
        if (no_elements != 0)
        {
            int data;
            Node *temp = top;
            data = top->dig;
            top = top->next;
            delete temp;
            no_elements--;
            return data;
        }
        else
        {
            cout << "Stack is empty:" << endl;
            return -1;
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
        Node *temp;
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
    void Peak()
    {
        if (top != NULL)
        {
            cout << "\nElement at top is:" << top->dig << endl;
        }
        else
        {
            cout << "Nothing to display:\n";
        }
    }
    void Display_stack()
    {
        if (top != NULL)
        {
            Node *temp = top;
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