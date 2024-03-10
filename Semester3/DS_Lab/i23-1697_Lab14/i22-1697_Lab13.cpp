#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student
{
private:
    string name;
    int m_ability;
    int bravery;
    int cunning;
    int intelligence;
    int loyalty;
    string house;
public:
    Student(string name,int m,int b,int c,int i,int l,string h="")
    {
        this->name=name;
        m_ability=m;
        bravery=b;
        cunning=c;
        intelligence=i;
        loyalty=l;
        house=h;
    }
    Student(const Student &S)
    {
        this->name=S.name;
        m_ability=S.m_ability;
        bravery=S.bravery;
        cunning=S.cunning;
        intelligence=S.intelligence;
        loyalty=S.loyalty;
        house=S.house;
    }
    Student(){}
    void find_house()
    {
        if((bravery>m_ability||bravery>cunning||bravery>intelligence)&&(loyalty>m_ability||loyalty>cunning||loyalty>intelligence))
        {
            house="gryffindor";
        }
        if((m_ability>bravery||m_ability>cunning||m_ability>intelligence)&&(loyalty>bravery||loyalty>cunning||loyalty>intelligence))
        {
            house="Hufflepuff";
        }
        if((m_ability>bravery||m_ability>cunning||m_ability>intelligence)&&(intelligence>bravery||intelligence>cunning||intelligence>loyalty))
        {
            house="Ravenclaw";
        }
        if((cunning>loyalty||cunning>bravery||cunning>intelligence)&&(m_ability>loyalty||m_ability>bravery||m_ability>intelligence))
        {
            house="Slytherin";
        }
    }
    void update_house(string h)
    {
        house=h;
    }
    void display_student()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Magical Ability:"<<m_ability<<endl;
        cout<<"Bravery:"<<bravery<<endl;
        cout<<"Cunning:"<<cunning<<endl;
        cout<<"Intelligence:"<<intelligence<<endl;
        cout<<"House:"<<house<<endl;
    }
    bool operator==(Student S)
    {
        return this->name==S.name;
    }
};
template <class T>
class Node
{    
    public:
    T data;
    Node<T>* next; 
    Node(T &data)
    {
        data=data;
        next=NULL;
    }
};
class AdjList{
    
    public:
    Node<Student>* head;
    Node<Student>* tail;
    AdjList()
    {
        head=NULL;
        tail=NULL;
    }
    void insert(Student &tempo)
    {
        Node<Student>* temp=new Node<Student>(tempo);
        if(head==NULL)
        {
            head = tail = temp;
        }
        else 
        {
            tail->next=temp;
            tail=temp;
        }

    }
    void display_adj_List()
    {
        Node<Student>* curr=head;
        while(curr!=NULL)
        {
            curr->data.display_student();
            curr=curr->next;
        }
        cout<<endl;
    }
};
class graph
{
public:
    vector<AdjList>arr;
    int vert;
    graph(vector<Student> &V)
    {
        vert=V.size();
        for(int i=0;i<V.size();i++)
        {
            arr.push_back(*(new AdjList()));
            arr[i].insert(V[i]);
        }
    }
    void insert_in_graph(Student &V)
    {
        arr.push_back(*(new AdjList()));
        arr[arr.size()-1].insert(V);
        vert=arr.size();
    }
    void insert_Edge(Student src,Student dest)
    {
        for(int i=0;i<vert;i++)
        {
            if(arr[i].head->data==src)
            {
                arr[i].insert(dest);
            }
            if(arr[i].head->data==dest)
            {
                arr[i].insert(src);
            }
        }
    }
    void showgraphstrct()
    {
        cout<<"Graph="<<endl;
        for(int i=0;i<vert;i++)
        {
            arr[i].display_adj_List();
        }
    }
    ~graph(){}
};

void sort(vector<Student> &V)
{
    for(int i=0;i<V.size();i++)
    {
        V[i].find_house();
    }
}
int main()
{
    srand(time(0));
    vector<Student> st;
    st.push_back(Student("Harry",rand()%10,rand()%10,rand()%10,rand()%10,rand()%10));
    st.push_back(Student("Ron",rand()%10,rand()%10,rand()%10,rand()%10,rand()%10));
    st.push_back(Student("Hermione",rand()%10,rand()%10,rand()%10,rand()%10,rand()%10));
    st.push_back(Student("Draco",rand()%10,rand()%10,rand()%10,rand()%10,rand()%10));
    graph G(st);
    G.insert_Edge(st[0],st[1]);
    G.insert_Edge(st[0],st[2]);
    G.insert_Edge(st[1],st[2]);
    G.insert_Edge(st[3],st[0]);
    G.showgraphstrct();
    sort(st);
    cout<<"\nVector Display"<<endl;
    for(int i=0;i<st.size();i++)
    {
        cout<<endl;
        st[i].display_student();
    }

}


