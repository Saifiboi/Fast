//============================================================================
// Name        : lab.cpp
// Author      : Saifi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<ctime>
#include<string>
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
string Diagonal(int ** matrix,int rows,int columns)
{
	bool check=0;
	for(int i=1;i<rows;i++)
	{
		for(int j=0;j<i-1;j++)
		{
			if(matrix[i][j]!=0)
				check=1;
		}

	}
	if(check==0)
		return "upper";
	else
		return "notupper";
}
int **MatrixSum(int **MatrixA,int **MatrixB,int rows,int cols)
{
	static int **MatrixC=new int *[rows];
	for(int i=0;i<rows;i++)
	{
		MatrixC[i]=new int [cols];
	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			MatrixC[i][j]=MatrixA[i][j]+MatrixB[i][j];
		}
	}
	return MatrixC;

}
void ThreeD(int ***ptr,int pages,int rows ,int columns)
{
	ptr=new  int **[pages];
	for(int i=0;i<pages;i++)
	{
		ptr[i]=new int *[rows];

	}
	for(int i=0;i<pages;i++)
	{
		for(int j=0;j<rows;j++)
		{
			ptr[i][j]=new int [columns];
		}
	}
}
int ***Square(int ***p,int pages,int rows,int columns)
{
	int ***ptr=new  int **[pages];
			for(int i=0;i<pages;i++)
			{
				ptr[i]=new int *[rows];

			}
			for(int i=0;i<pages;i++)
			{
				for(int j=0;j<rows;j++)
				{
					ptr[i][j]=new int [columns];
				}
			}
			for(int i=0;i<pages;i++)
						{
							for(int j=0;j<rows;j++)
							{
								for(int k=0;k<columns;k++)
								{
									ptr[i][j][k]=p[i][j][k]*p[i][j][k];
								}
							}
						}
		return ptr;
}

int main() {
srand(time(0));
	int nrows,ncols,pages;
	cout<<"\nEnter the number of pages rows and columns:";
	cin>>pages>>nrows>>ncols;
////	int **arr=new int *[nrows];
////	for(int i=0;i<nrows;i++)
////	{
////		arr[i]=new int [ncols];
////	}
////	for(int i=0;i<nrows;i++)
////	{
////		for(int j=0;j<ncols;j++)
////		{
////			arr[i][j]=rand()%100;
////		}
////	}
////	string res=Diagonal(arr,nrows,ncols);
////
////	cout<<res;
////	cout<<endl;
////	for(int i=0;i<nrows;i++)
////	{
////		delete [] arr[i];
////	}
////	delete [] arr;
////	arr=0;
////
//	int **MatrixA=new int *[nrows], **MatrixB=new int *[nrows];
//	for(int i=0;i<nrows;i++)
//	{
//		MatrixA[i]=new int [ncols];
//		MatrixB[i]=new int [ncols];
//	}
//	for(int i=0;i<nrows;i++)
//	{
//		for(int j=0;j<ncols;j++)
//		{
//			MatrixA[i][j]=rand()%100;
//			MatrixB[i][j]=rand()%100;
//		}
//	}
//	int **MatrixC=MatrixSum(MatrixA,MatrixB,nrows,ncols);
//	for(int i=0;i<nrows;i++)
//		{
//			delete [] MatrixA[i];
//			delete [] MatrixA[i];
//		}
//	delete []MatrixA;
//	delete []MatrixB;
//	MatrixA=0;
//	MatrixB=0;
//	int ***ptr=0;
//	ThreeD(ptr,3,4,4);
	int ***ptr=0;
	ptr=new  int **[pages];
		for(int i=0;i<pages;i++)
		{
			ptr[i]=new int *[nrows];

		}
		for(int i=0;i<pages;i++)
		{
			for(int j=0;j<nrows;j++)
			{
				ptr[i][j]=new int [ncols];
			}
		}
		for(int i=0;i<pages;i++)
			{
				for(int j=0;j<nrows;j++)
				{
					for(int k=0;k<ncols;k++)
					{
						ptr[i][j][k]=rand()%100;
					}
				}
			}
	int ***res=Square(ptr,pages,nrows,ncols);
	for(int i=0;i<pages;i++)
				{
					for(int j=0;j<nrows;j++)
					{
						for(int k=0;k<ncols;k++)
						{
							cout<<res[i][j][k]<<"\t";
						}
					}
				}
}
