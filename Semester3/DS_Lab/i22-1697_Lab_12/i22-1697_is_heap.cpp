#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Heap
{
private:
    int *h;
    int curr_size;
    int capacity;
public:
    
Heap(int capacity)
{ 
    this->capacity=capacity;
    curr_size=0;
    h=new int [capacity];
}
void heapify()
{
    for (int i = curr_size; i >= 1; i /= 2)
        {
            if ( i/2 >=1 && h[i] > h[i / 2])
            {
                int temp = h[i];
                h[i] = h[i / 2];
                h[i / 2] = temp;
            }
            else
            {
                break;
            }
        }
}
void insert(int data)
{
    if(curr_size<capacity)
    {
        h[++curr_size]=data;
        heapify();
    }
    else{
        cout<<"Heap is at maximum capacity:";
    }
    
}
void delete_max()
{
    h[1] = h[curr_size--];
    for (int i = 1; i < curr_size;)
    {
        if (i * 2 < curr_size && i * 2 + 1 <= curr_size)
        {
            if (h[i * 2] > h[i * 2 + 1])
            {
                if (h[i * 2] > h[i])
                {
                    int temp = h[i];
                    h[i] = h[2 * i];
                    h[2 * i] = temp;
                    i = 2 * i;
                }
                else{
                    break;
                }
            }
            else
            {
                if (h[i * 2 + 1] > h[i])
                {
                    int temp = h[i];
                    h[i] = h[2 * i + 1];
                    h[2 * i + 1] = temp;
                    i = 2 * i + 1;
                }
                else{
                    break;
                }
            }
        }
        else
        {
            if (h[i * 2] > h[i])
            {
                int temp = h[i];
                h[i] = h[2 * i];
                h[2 * i] = temp;
                i = 2 * i;
            }
            else{
                    break;
                }
        }
    }
}
void sort_heap()
{
    int i=0;
    int * new_arr= new int [curr_size];
    int temp_var=curr_size;
    while(curr_size>=1)
    {
        new_arr[(temp_var-1)-i]=h[1];
        delete_max();
        i++;
    }
    cout<<endl;
    for(int i=0;i<temp_var;i++)
    {
        cout<<new_arr[i]<<"\t";
    }
    cout<<endl;
}
void clear()
{
    curr_size=0;
}
bool is_Empty()
{
    if(curr_size==0)
    {
        return 1;
    }
    return 0;
}
void print()
{
    for(int i=1;i<=curr_size;i++)
    {
        cout<<h[i]<<"\t";
    }
    cout<<endl;
}
~Heap()
{
    delete [] h;
    curr_size=0;
}
};


int main()
{
   Heap he(30);
   he.insert(5);
   he.insert(3);
   he.insert(17);
   he.insert(10);
   he.insert(84);
   he.insert(19);
   he.insert(6);
   he.insert(22);
   he.insert(9);
//    he.print();
//    he.delete_max();
//    he.delete_max();
//    he.print();
   he.sort_heap();

}
