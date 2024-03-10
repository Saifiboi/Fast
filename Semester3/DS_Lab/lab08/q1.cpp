#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Node{
    public:
    int E;
    Node *left; 
    Node *right;
    Node(int emp=0)
    {
        this->E=emp;
        this->left=NULL;
        this->right=NULL;
    }
};
class BStree{
    public:
    Node *root;
    BStree()
    {
        root =NULL;
    }
    void helper(Node * p)
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
    void insert(Node *&p,int data)
    {
        if(p==NULL)
        {
            Node * new_node=new Node(data);
            p=new_node;
            return ;
        }
        else if(p->E==data)
        {
            return;
        }
        else if(p->E>data)
        {
            
            insert(p->left,data);

        }
        else if(p->E<data)
        {
           
            insert(p->right,data);

        }
    }
    bool search(Node *p,int data)
    {
        if(p==NULL)
        {
            return 0;
        }
        else if(p->E==data)
        {
            return 1;
        }
        return search(p->left,data) || search(p->right,data);
    }
    bool is_Empty()
    {
        return root==NULL;
    }
    int findmax(Node *p)
    {
        if(p==NULL)
            return -1;
        if(p->right==NULL)
        {
            return p->E;    
        }
        findmax(p->right);
    }
    void reverse_level_order()
    {
        queue<Node*> q;
        stack<Node *>s;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            Node *temp=q.front();
            q.pop();
            s.push(temp);
            if(temp==NULL)
            {
                q.push(NULL);
            }
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
        while(!s.empty())
        {
            Node* temp=s.top();
            s.pop();
            if(temp==NULL)
            {
                cout<<endl;
            }
            else{
                cout<<temp->E<<"\t";
            }
        }

    }
    int findmin(Node *p)
    {
        if(p==NULL)
            return -1;
        if(p->left==NULL)
        {
            return p->E;    
        }
        findmax(p->left);
    }
    void print(Node *p)
    {
        if(p==NULL)
        {
            return;
        }
        print(p->left);
        cout<<p->E<<endl;
        print(p->right);
    }
    int tree_height(Node *p,int sum=-1)
    {
        if(p==NULL)
        {
            return sum;
        }
        return tree_height(p->left,sum+1)>tree_height(p->right,sum+1)?tree_height(p->left,sum+1):tree_height(p->right,sum+1);
    }
    ~BStree()
    {
        helper(root);
    }
};
int main()
{
    BStree T;
    T.insert(T.root,69);
    T.insert(T.root,62);
    T.insert(T.root,63);
    T.insert(T.root,72);
    T.insert(T.root,73);
    T.insert(T.root,79);
    T.reverse_level_order();


}