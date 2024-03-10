#include<iostream>
using namespace std;
void reverse(int [][3]);
int main()
{
	int arr[3][3];
	cout<<"\nFill the 2 D ARRAY:";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	reverse(arr);
}
void reverse(int arr[][3])
{
	int arr2[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			arr2[i][j]=arr[2-i][2-j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr2[i][j]<<"\t";
		}
		cout<<endl;
	}
		
}
