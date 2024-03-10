#include<iostream>
using namespace std;
void funct(int []);
int main()
{
	int arr[10];
	cout<<"\nEnter 10 elements of array:";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	funct(arr);
}
void funct(int arr[])
{
	bool check=0;
	for(int i=0;i<10;i++)
	{
		check=0;
		for(int j=0;j<10;j++)
		{
			if(i==j)
			{
				cout<<arr[i]<<"\t";
				break;
			}
			else if(arr[i]==arr[j])
			{
				break;
			}
		}
		
	}
	cout<<endl;
}
