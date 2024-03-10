#include <iostream>
#include <queue>
using namespace std;
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
    bool is_digmpty()
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
        // if (balance_factor(p) < -1)
        // {
        //     if (data > p->right->dig)
        //     {
        //         p = rotate_left(p);
        //     }
        //     else
        //     {
        //         p->right = rotate_right(p->right);
        //         p = rotate_left(p);
        //     }
        // }
        // else if (balance_factor(p) > 1)
        // {
        //     if (data < p->left->dig)
        //     {
        //         p = rotate_right(p);
        //     }
        //     else
        //     {
        //         p->left = rotate_left(p->left);
        //         p = rotate_right(p);
        //     }
        // }
        return p;
    }
    void breath_first(queue<Node *> q)
    {
        if (q.empty())
        {
            return;
        }
        else
        {
            Node *p = q.front();
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
    bool find(Node *p, int data)
    {
        if (p == NULL)
        {
            return 0;
        }
        if (data == p->dig)
        {
            return 1;
        }
        else if (data < p->dig)
        {
            return find(p->left, data);
        }
        else
        {
            return find(p->right, data);
        }
    }
    int findmin(Node *p)
    {
        if (p == NULL)
            return -1;
        if (p->left == NULL)
        {
            return p->dig;
        }
        return findmin(p->left);
    }
    int findmax(Node *p)
    {
        if (p == NULL)
            return -1;
        if (p->right == NULL)
        {
            return p->dig;
        }
        return findmax(p->right);
    }
    Node *del(Node *p, int val)
    {
        if (p == NULL)
        {
            return NULL;
        }
        if (p->dig == val)
        {
            if (p->left == NULL && p->right == NULL)
            {
                delete p;
                p = NULL;
                return p;
            }
            else if (p->left == NULL && p->right != NULL)
            {
                Node *temp = p->right;
                delete p;
                return temp;
            }
            else if (p->right == NULL && p->left != NULL)
            {
                Node *temp = p->left;
                delete p;
                return temp;
            }
            else
            {
                p->dig = findmin(p->right);
                p->right = del(p->right, p->dig);
            }
        }
        else if (p->dig < val)
        {
            p->right = del(p->right, val);
        }
        else if (p->dig > val)
        {
            p->left = del(p->left, val);
        }
        if (balance_factor(p) < -1)
        {
            if (p->right->right != NULL)
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
            if (p->left->left != NULL)
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
    ~avl()
    {
        // root = del(root);
    }
};
int main()
{
    avl T;
    T.root = T.insert_node(T.root, 10);
    T.root = T.insert_node(T.root, 8);
    T.root = T.insert_node(T.root, 13);
    T.root = T.insert_node(T.root, 12);
    T.root = T.insert_node(T.root, 14);
    T.root = T.insert_node(T.root, 16);
    T.root = T.insert_node(T.root, 18);

    // T.insert_node(T.root, 1);
    // T.insert_node(T.root, 3);
    // T.insert_node(T.root, 5);
    // T.insert_node(T.root, 7);
    // T.insert_node(T.root, 9);
    // T.insert_node(T.root, 11);
    // T.insert_node(T.root, 13);
    // T.insert_node(T.root, 15);
    // queue<Node *> q;
    // q.push(T.root);
    // T.breath_first(q);
    // cout << endl;
    // T.root = T.del(T.root, 11);
    queue<Node *> q1;
    q1.push(T.root);
    int level = 1;
    int size = q1.size();
    while(!q1.empty())
    {
        for(int i=0;i<size;i++)
        {
            Node * temp=q1.front();
            q1.pop();
            if(temp->left==NULL && temp->right==NULL)
            {
                cout<<"\nLevel ="<<level<<endl;
                return 0;
            }
            if(temp->left!=NULL)
            {
                q1.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q1.push(temp->right);
            }
        }
        size=q1.size();
        level++;
    }
    // cout<<level_no<<endl;
    // cout<<endl;
    // T.root=T.del(T.root, 8);
    // T.breath_first(q);
}
