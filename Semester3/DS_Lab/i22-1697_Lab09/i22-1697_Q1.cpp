#include <iostream>
#include <queue>
#include<stack>
#include<cmath>
using namespace std;
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
    void helper(Node *p)
    {
        // if(p==NULL)
        // {
        //     return;
        // }
        // else if(p->left==NULL && p->right==NULL)
        // {
        //     delete p;
        // }
        // helper(p->left);
        // helper(p->right);
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
    int balance_factor(Node *p)
    {
        return tree_height(p->left) - tree_height(p->right);
    }
    bool balanced_tree(Node *p)
    {
        if (p == NULL)
        {
            return 1;
        }
        if (balance_factor(p) < -1 || balance_factor(p) > 1)
        {
            return false;
        }
        return balanced_tree(p->left) && balanced_tree(p->right);
    }
    bool degenerate_tree(Node *p)
    {
        if (p == NULL)
        {
            return 1;
        }
        else if (p->left != NULL && p->right != NULL)
        {
            return false;
        }

        return degenerate_tree(p->left) && degenerate_tree(p->right);
    }
    int count_leaves(Node *p)
    {
        if(p->left==NULL && p->right==NULL)
        {
            return 1;
        }
        else{
            return count_leaves(p->left)+count_leaves(p->right);
        }
    }
    bool is_complete(Node *p)
    {
       return full_bin(p) && pow(2,tree_height(p))==count_leaves(p); 
    }
    ~BStree()
    {
        helper(root);
    }
};
int main()
{
    BStree T;
    T.insert(T.root, 8);
    T.insert(T.root, 4);
    T.insert(T.root, 12);
    T.insert(T.root, 2);
    T.insert(T.root, 6);
    T.insert(T.root, 10);
    T.insert(T.root, 14);

    T.insert(T.root, 1);
    T.insert(T.root, 3);
    T.insert(T.root, 5);
    T.insert(T.root, 7);
    T.insert(T.root, 9);
    T.insert(T.root, 11);
    T.insert(T.root, 13);
    T.insert(T.root, 15);
    // T.reverse_level_order();
    // T.print(T.root);
    // T.del(T.root, 73);
    // cout << endl;
    // T.print(T.root);
    cout << T.tree_height(T.root) << endl;
    // queue<Node *>q;
    // q.push(T.root);

    // // cout << endl;
    // // cout << T.Node_count(T.root) << endl;
    // T.breath_first(q);
    // cout << endl;
    // cout << "is full bin" << T.full_bin(T.root) << endl;
    // cout << "Is Balanced " << T.balanced_tree(T.root) << endl;
    // cout<< " IS Degenerate "<<T.degenerate_tree(T.root)<<endl;
    cout << "Is Complete" << T.is_complete(T.root) << endl;
}