#include <iostream>
#include <queue>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
class Node
{
public:
    int E;
    Node *left;
    Node *right;
    Node(int emp = 0)
    {
        this->E = emp;
        this->left = NULL;
        this->right = NULL;
    }
};
class BStree
{
public:
    Node *root;
    BStree()
    {
        root = NULL;
    }
    void insert(Node *&p, int data)
    {
        if (p == NULL)
        {
            Node *new_node = new Node(data);
            p = new_node;
            return;
        }
        else if (p->E == data)
        {
            return;
        }
        else if (p->E > data)
        {

            insert(p->left, data);
        }
        else if (p->E < data)
        {

            insert(p->right, data);
        }
    }
    bool search(Node *p, int data)
    {
        if (p == NULL)
        {
            return 0;
        }
        else if (p->E == data)
        {
            return 1;
        }
        return search(p->left, data) || search(p->right, data);
    }
    bool is_Empty()
    {
        return root == NULL;
    }
    int findmax(Node *p)
    {
        if (p == NULL)
            return -1;
        if (p->right == NULL)
        {
            return p->E;
        }
        findmax(p->right);
    }
    void reverse_level_order()
    {
        queue<Node *> q;
        stack<Node *> s;
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            s.push(temp);
            if (temp == NULL)
            {
                q.push(NULL);
            }
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        while (!s.empty())
        {
            Node *temp = s.top();
            s.pop();
            if (temp == NULL)
            {
                cout << endl;
            }
            else
            {
                cout << temp->E << "\t";
            }
        }
    }
    bool find(Node *p,int data)
    {
        if(p==NULL)
        {
            return 0;
        }
        if(data==p->E)
        {
            return 1;
        }
        else if(data < p->E)
        {
            return find(p->left,data);
        }
        else
        {
            return find(p->right,data);
        }
    }
    Node *findmin(Node *p)
    {
        if (p == NULL)
            return NULL;
        if (p->left == NULL)
        {
            return p;
        }
        findmax(p->left);
    }
    void print(Node *p)
    {
        if (p == NULL)
        {
            return;
        }
        print(p->left);
        cout << p->E << endl;
        print(p->right);
    }
    Node *del(Node *p, int val, Node *prev = NULL)
    {
        if (p == NULL)
        {
            return NULL;
        }
        if (p->E == val && p == root)
        {
            if (p->left == NULL && p->right == NULL)
            {
                delete root;
                root = NULL;
            }
            else if (p->left == NULL && p->right != NULL)
            {
                root = p->right;
                delete p;
            }
            else if (p->right == NULL && p->left != NULL)
            {
                root = p->left;
                delete p;
            }
            else
            {
                root->E = findmin(root->right)->E;
                prev = root;
                del(root->right, root->E, prev);
            }
        }
        else if (p->E == val)
        {
            if (p->left == NULL && p->right == NULL)
            {
                delete p;
                p = NULL;
            }
            else if (p->left == NULL && p->right != NULL)
            {
                if (p == prev->left)
                {
                    prev->left = p->right;
                }
                else
                {
                    prev->right = p->right;
                }
                delete p;
            }
            else if (p->right == NULL && p->left != NULL)
            {
                if (p == prev->left)
                {
                    prev->left = p->left;
                }
                else
                {
                    prev->right = p->left;
                }
                delete p;
            }
            else
            {
                p->E = findmin(p->right)->E;
                prev = p;
                del(p->right, p->E, prev);
            }
        }
        else
        {
            prev = p;
            del(p->left, val, prev);
            del(p->right, val, prev);
        }
    }
    int tree_height(Node *p)
    {
        if (p == NULL)
        {
            return -1;
        }
        int sum1 = tree_height(p->left);
        int sum2 = tree_height(p->right);
        return 1 + (sum1 > sum2 ? sum1 : sum2);
    }
    int Node_count(Node *p)
    {
        if (p == NULL)
        {
            return 0;
        }
        return 1 + Node_count(p->left) + Node_count(p->right);
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
            cout << p->E << "\t";
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
    bool full_bin(Node *p)
    {
        if (p == NULL)
        {
            return true;
        }
        else if (p->left == NULL && p->right == NULL)
        {
            return true;
        }
        else if (p->left != NULL && p->right != NULL)
        {
            return full_bin(p->left) && full_bin(p->right);
        }
        else
        {
            return false;
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
    ~BStree()
    {
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
    BStree T;
    uint64_t start,end;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            T.insert(T.root,rand());
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