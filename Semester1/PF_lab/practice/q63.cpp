#include<iostream>
using namespace std;
void funct(int ***);
int main()
{
	int **ptr=new int *[3];
	for(int i=0;i<3;i++)
	{
		ptr[i]=new int[3];
	}
	cout<<"\nEnter elements in 3*3 array:";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cin>>*(*(ptr+i)+j);
	}
	funct(&ptr);
	for(int i=0;i<3;i++)
	{
		delete[] ptr[i];
		ptr[i]=0;
	}
	delete[] ptr;
	ptr=0;
}
void funct(int ***arr)
{
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<*(*(*arr+i)+j)<<"\t";
		cout<<endl;
	}
	arr=0;
	
	
	
}
