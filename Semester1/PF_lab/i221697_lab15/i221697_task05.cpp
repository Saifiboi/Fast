#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr=new int [10];
	for (int i=0;i<10;i++)
	{
		*(ptr+i)=i+1;
	}
	for (int i=0;i<10;i++)
	{
		cout<<*(ptr+i)<<"\t";
	}
	cout<<endl;
	delete ptr;
	ptr=0;
}
