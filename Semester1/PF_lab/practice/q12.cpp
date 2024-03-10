#include<iostream>
using namespace std;
int main()
{
	int arr[10],choice,counter=0;
	cout<<"\nEnter 10 elements of array:";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter Your choice :";
	cin>>choice;
	for(int i=0;i<10;i++)
	{
		for(int j=i;j<10;j++)
		{
			if(arr[i]+arr[j]==choice)
			{
				cout<<arr[i]<<","<<arr[j]<<endl;
				counter++;
			}
		}
	}
	cout<<"\nNuber of pairs whose sum equals to "<<choice<<":"<<counter<<endl;
}
