#include<iostream>
using namespace std;
int main()
{
	int arr[5][5]={{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
	int *ptr;
	ptr=&arr[0][0];
	
	for(int i=0,j=0;i<5;i++,j++)
	{
		*((ptr +i*5)+j)=0;
	}
	for(int i=0;i<5;i++)
	{	
		for(int j=0;j<5;j++)
			cout<<arr[i][j]<<"\t";
		cout<<endl;
	}
	
}
