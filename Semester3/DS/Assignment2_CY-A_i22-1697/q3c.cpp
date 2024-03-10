#include <iostream>
#include <queue>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
class Node
{
public:
    int dig;
    Node *left;
    Node *right;
    Node(int di)
    {
        this->dig = di;
        this->left = NULL;
        this->right = NULL;
    }
};
class avl
{
private:
    /* data */
public:
    Node *root;
    avl()
    {
        root = NULL;
    }
    bool search(Node *p, int data)
    {
        if (p == NULL)
        {
            return 0;
        }
        else if (p->dig == data)
        {
            return 1;
        }
        return search(p->left, data) || search(p->right, data);
    }
    bool is_Empty()
    {
        return root == NULL;
    }
    int tree_height(Node *p)
    {
        if (p == NULL)
        {
            return 0;
        }
        int sum1 = tree_height(p->left);
        int sum2 = tree_height(p->right);
        return 1 + (sum1 >= sum2 ? sum1 : sum2);
    }
    int balance_factor(Node *p)
    {
        return tree_height(p->left) - tree_height(p->right);
    }
    Node *rotate_right(Node *p)
    {
        Node *y = p->left;
        Node *t = y->right;
        y->right = p;
        p->left = t;
        return y;
    }
    Node *rotate_left(Node *p)
    {
        Node *y = p->right;
        Node *t = y->left;
        y->left = p;
        p->right = t;
        return y;
    }
    Node *insert_node(Node *p, int data)
    {
        if (p == NULL)
        {
            Node *new_node = new Node(data);
            p = new_node;
        }
        else if (p->dig > data)
        {
            p->left = insert_node(p->left, data);
        }
        else if (p->dig < data)
        {
            p->right = insert_node(p->right, data);
        }
        if (balance_factor(p) < -1)
        {
            if (data > p->right->dig)
            {
                p = rotate_left(p);
            }
            else
            {
                p->right = rotate_right(p->right);
                p = rotate_left(p);
            }
        }
        else if (balance_factor(p) > 1)
        {
            if (data < p->left->dig)
            {
                p = rotate_right(p);
            }
            else
            {
                p->left = rotate_left(p->left);
                p = rotate_right(p);
            }
        }
        return p;
    }
    void breath_first(queue<Node *> &q, Node *p = NULL)
    {
        if (q.empty())
        {
            return;
        }
        else
        {
            p = q.front();
            q.pop();
            cout << p->dig << "\t";
            if (p->left != NULL)
            {
                q.push(p->left);
            }
            if (p->right != NULL)
            {
                q.push(p->right);
            }
            breath_first(q);
        }
    }
    bool find(Node *p,int data)
    {
        if(p==NULL)
        {
            return 0;
        }
        if(data==p->dig)
        {
            return 1;
        }
        else if(data < p->dig)
        {
            return find(p->left,data);
        }
        else
        {
            return find(p->right,data);
        }
    }
    Node *del(Node *p)
    {
        if (p == NULL)
        {
            return NULL;
        }
        p->left = del(p->left);
        p->right = del(p->right);
        delete p;
        return NULL;
    }
    ~avl()
    {
        root = del(root);
    }
};
inline uint64_t gettime()
{
    uint64_t time=duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count();
    return time;
}
int main()
{
    srand(time(0));
    int arr[7] = {10, 100, 1000, 5000, 10000, 50000, 100000};
    float avg[7];
    uint64_t sum;
    avl T;
    uint64_t start,end;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            T.insert_node(T.root,rand());
        }
        sum=0;
        for(int k=0;k<100;k++)
        {
            start = gettime();
            T.find(T.root,rand());
            end = gettime();
            sum += end-start;
        }
        avg[i]=sum/100;
        T.del(T.root);
    }
    for(int i=0;i<7;i++)
    {
        cout<<"("<<avg[i]<<","<<arr[i]<<")"<<endl;
    }
}