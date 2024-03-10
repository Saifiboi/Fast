#include<iostream>
using namespace std;
int main()
{
    int **ptr=new int *[3];
    for(int i=0;i<3;i++)
    {
        *(ptr+i)=new int [3];
    }
    cout<<"\nEnter 9 elements of array[3][3]:";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>*(*(ptr+i)+j);
    }
    int *large;
    large=&ptr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
             if(ptr[i][j]>(*large))
             {
                 large=&ptr[i][j];
             }
    }
    cout<<"\nThe Largest number:"<<(*large)<<endl;
    large=0;
    for(int i=0;i<3;i++)
    {
        delete[] *(ptr+i);
        ptr[i]=0;
    }
    delete[] ptr;
    ptr=0;
    
}
