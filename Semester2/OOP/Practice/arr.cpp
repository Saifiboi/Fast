#include<iostream>
using namespace std;
int sum(int arr[],int size)
{
	if(size==1)
		return arr[0];
	else
		return arr[0]+sum(&arr[1],--size);
}
int main()
{
	int arr[10];
	cout<<"\nEnter 10 elements:";
	for(int i=0;i<10;i++)
	
		cin>>arr[i];
	cout<<sum(arr,10)<<"\t";
}
