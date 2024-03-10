#include<iostream>
using namespace std;
int main()
{
	int **m1=0;
	int **m2=0;
	int **m3=0;
	m1=new int *[4];
	m2=new int *[4];
	m3=new int *[4];
	for(int i=0;i<4;i++)
	{
		*(m1+i)=new int [4];
		*(m2+i)=new int [4];
		*(m3+i)=new int [4];
		
	}
	cout<<"\nEnter array 1:";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>*(*(m1+i)+j);
			*(*(m3+i)+j)=0;
		}
	}
	cout<<"\nEnter array 2:";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>*(*(m2+i)+j);
		}
	}
	for(int k=0;k<4;k++)
	{
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				*(*(m3+k)+i)+=*(*(m1+k)+j)*(*(*(m2+j)+i));
			}
		}
	}
	cout<<"\nThe Result is:\n";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<*(*(m3+i)+j)<<"\t";
			*(*(m1+i)+j)=0;
		}
		cout<<endl;
	}
	for(int i=0;i<4;i++)
	{
		delete [] *(m1+i);
		delete [] *(m2+i);
		delete [] *(m3+i);
		
	}
	m1=0;
	m2=0;
	m3=0;
	
}
