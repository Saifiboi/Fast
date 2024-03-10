#include <iostream>
#include <stack>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class AdjList
{
public:
    Node *head;
    Node *tail;
    AdjList()
    {
        head = NULL;
        tail = NULL;
    }
    void insert(int data)
    {
        if (head == NULL)
        {
            head = new Node(data);
            tail = head;
        }
        else
        {
            Node *temp = new Node(data);
            tail->next = temp;
            tail = temp;
        }
    }
    void Display()
    {
        for (Node *curr = head; curr != NULL; curr = curr->next)
        {
            cout << curr->data << "\t";
        }
        cout << endl;
    }
};
class Graph
{
public:
    AdjList *arr;
    int vert;
    Graph(int nodes)
    {
        arr = new AdjList[nodes];
        vert = nodes;
        for (int i = 0; i < vert; i++)
        {
            arr[i].insert(i);
        }
    }
    void insertEdge(int source, int dest)
    {
        if (source < vert && dest < vert)
        {
            arr[source].insert(dest);
            // arr[dest].insert(source);
        }
        else
        {
            cout << "Not a Valid Vertex of graph:\n";
        }
    }
    // for undirected graphs
    // bool check_cycles()
    // {
    //     bool *visited = new bool[vert];
    //     int *parent = new int[vert];
    //     for (int i = 0; i < vert; i++)
    //     {
    //         visited[i] = 0;
    //         parent[i] = -1;
    //     }
    //     queue<AdjList> Q;
    //     Q.push(arr[0]);
    //     visited[0] = 1;
    //     parent[0] = 0;
    //     while (!Q.empty())
    //     {
    //         AdjList temp = Q.front();
    //         Node *current = temp.head->next;
    //         Q.pop();
    //         while (current != NULL)
    //         {
    //             if (visited[current->data] == 1 && parent[temp.head->data] != current->data)
    //             {
    //                 return true;
    //             }
    //             else if (visited[current->data] != 1)
    //             {
    //                 Q.push(arr[current->data]);
    //                 visited[current->data] = 1;
    //                 parent[current->data] = temp.head->data;
    //             }
    //             current = current->next;
    //         }
    //     }
    //     return 0;
    // }
    //for directed graphs
    bool check_cycles()
    {
        bool *visited = new bool[vert];
        bool *is_instack = new bool[vert];
        for (int i = 0; i < vert; i++)
        {
            visited[i] = 0;
            is_instack[i] = 0;
        }
        for (int i = 0; i < vert; i++)
        {
            stack<AdjList> Q;
            Q.push(arr[i]);
            visited[i] = 1;
            is_instack[i] = 1;
            while (!Q.empty())
            {
                AdjList temp = Q.top();
                Node *current = temp.head->next;
                while (current != NULL)
                {
                    if (visited[current->data] == 1 && is_instack[current->data] == 1)
                    {
                        return true;
                    }
                    else if (visited[current->data] != 1)
                    {
                        Q.push(arr[current->data]);
                        visited[current->data] = 1;
                        is_instack[current->data] = 1;
                        current = arr[current->data].head;
                    }
                    current = current->next;
                }
                AdjList check = Q.top();
                Q.pop();
                is_instack[check.head->data] = 0;
            }
        }
        return 0;
    }
    void showGraphStrct()
    {
        if (arr != NULL)
        {
            cout << "Graph is shown as Below\n";
            for (int i = 0; i < vert; i++)
            {
                arr[i].Display();
            }
        }
        else
            cout << "Empty Graph";
    }
    ~Graph()
    {
        delete[] arr;
        vert = 0;
    }
};
int main()
{
    Graph g(5);
    g.insertEdge(1, 0);
    g.insertEdge(0, 2);
    g.insertEdge(3, 1);
    // // g.insertEdge(2, 3);
    g.insertEdge(2, 3);
    g.insertEdge(3, 4);
    g.showGraphStrct();
    cout << g.check_cycles() << endl;
}