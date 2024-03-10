#include<iostream>
using namespace std;
//void input(int arr[][6],int size);
void inputf(int image[][2],int size);
void filter(int arr[][6],int image[][2],int size1);
void output(int arr[][6],int size);
int main()
{
	int arr[6][6]={{1,1,0,1,1,0},{1,1,0,1,1,0},{1,1,0,1,1,0},{1,1,0,1,1,0},{1,1,0,1,1,0},{1,1,0,1,1,0}};
	//input(arr,6);
	int image[2][2];
	inputf(image,2);	
	filter(arr,image,6);
	output(arr,6);
}
/*void input(int arr[][6],int size)
{
	cout<<"\nEnter "<<size<<"*"<<size<<" array of image:\n";
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
			cin>>arr[i][j];
	}
}*/
void inputf(int image[][2],int size)
{
	cout<<"\nEnter Filter matrix:\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>image[i][j];
		}
	}
}
void filter(int arr[][6],int image[][2],int size1)
{
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size1;j++)
		{
			if(i==size1-1 || j==size1-1)
			{
				arr[i][j]=0;
			}
			else if(arr[i][j]==image[0][0] && arr[i][j+1]==image[0][1] && arr[i+1][j]==image[1][0] && arr[i+1][j+1]==image[1][1])
			{
				arr[i][j]=1;
			}
			else
			{
				arr[i][j]=0;
			}
		}
	}
}
void output(int arr[][6],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
			cout<<arr[i][j]<<"\t";
		cout<<endl;
	}

}
