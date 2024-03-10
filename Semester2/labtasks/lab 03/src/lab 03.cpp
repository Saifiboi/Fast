//============================================================================
// Name        : lab.cpp
// Author      : Saifi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int *CalculateSum(int **p1,int m,int n)
{
	int *sum=new int [m];
	for(int i=0;i<m;i++)
	{
		sum[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum[i]+=p1[i][j];
		}
	}
	return sum;
}

int main() {
	int nrows,ncols;
	cout<<"\nEnter the number of rows and columns:";
	cin>>nrows>>ncols;
	int **arr=new int *[nrows];
	for(int i=0;i<nrows;i++)
	{
		arr[i]=new int [ncols];
	}
	int *res=CalculateSum(arr,nrows,ncols);
	for(int i=0;i<nrows;i++)
	{
		cout<<res[i]<<"\t";
	}
	cout<<endl;
	for(int i=0;i<nrows;i++)
	{
		delete [] arr[i];
	}
	delete [] arr;
	arr=0;
}
