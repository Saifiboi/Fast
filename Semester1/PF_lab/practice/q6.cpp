#include<iostream>
using namespace std;
int main()
{
	int matrix[2][2];
	int *p=&matrix[0][0];
	cout<<"\nFill the 2 D ARRAY:";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>*((p+(2*i))+j);
		}
	}
	int *arr=new int[2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			*(arr+i)+=*((p+(2*i))+j);
		}
	}
	for(int i=0;i<2;i++)
	{
		cout<<"\nSum"<<i+1<<":"<<arr[i]<<endl;
	}
	delete[] arr;
	arr=0;

	p=0;
}
