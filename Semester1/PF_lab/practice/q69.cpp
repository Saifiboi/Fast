#include<iostream>
using namespace std;
int *dupElements(int arr[],int size,int &counter);
int main()
{
    int arr[9],*ptr=0,counter=0;
    cout<<"\nEnter the elements of array:";
    for(int i=0;i<9;i++)
    {
      	cin>>arr[i];
    }
    ptr=dupElements(arr,9,counter);
    cout<<"\n{";
    for(int i=0;i<counter;i++)
    {
    	if(i==counter-1)
    	{
    		cout<<ptr[i];
    	}
    	else
    	{
        	cout<<*(ptr+i)<<",";
        }
    }
    cout<<"}\n";
}
int *dupElements(int arr[],int size,int &counter)
{
    int *ptr=0,iter=0;
    
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==j)
            {
                continue;
            }
            else if(arr[i]==arr[j] && j>i)
            {
                iter++;
                break;
            }
             else if(arr[i]==arr[j] && i>j)
            {
                break;
            }
        }
    }
    counter=iter;
    ptr=new int [counter];
    for(int i=0,k=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==j)
            {
                continue;
            }
            else if(arr[i]==arr[j] && j>i)
            {
                ptr[k]=arr[i];
                k++;
                break;
            }
             else if(arr[i]==arr[j] && i>j)
            {
                break;
            }
        }
    }
    return ptr;
}
