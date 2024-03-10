/*
 * Matrix.cpp
 *
 *  Created on: Mar 23, 2023
 *      Author: safi
 */

#include "Matrix.h"
using namespace std;
Matrix::Matrix(int r,int c) {
	cout<<"in constructor";
	this->rows=r;
	this->columns=c;
	this->matrix=new int *[this->rows];
	for(int i=0;i<this->rows;i++)
	{
		this->matrix[i]=new int [this->columns];
	}

}
void Matrix::operator=(const Matrix & M)
{
	for(int i=0;i<this->rows;i++)
	{
		delete [] this->matrix[i];
	}
	delete [] this->matrix;
	this->rows=M.rows;
	this->columns=M.columns;
	this->matrix=new int *[this->rows];
	for(int i=0;i<this->rows;i++)
	{
		this->matrix[i]=new int [this->columns];
		for(int j=0;j<this->columns;j++)
		{
			this->matrix[i][j]=M.matrix[i][j];
		}
	}
}
bool Matrix::operator==(const Matrix & M)
{
	bool res=1;
	if(this->rows==M.rows && this->columns==M.columns)
	{
		for(int i=0;i<this->rows;i++)
		{
			for(int j=0;j<this->columns;j++)
			{
				if(this->matrix[i][j]!=M.matrix[i][j])
				{
					res =0;
				}
			}
		}
		return res;
	}
	else
	{
		return 0;
	}
}
Matrix Matrix::operator+(int x)
{
	Matrix M(this->rows,this->columns);
	for(int i=0;i<M.rows;i++)
	{
		for(int j=0;j<M.columns;j++)
		{
			M.matrix[i][j]=this->matrix[i][j]+x;
		}
	}
	return M;
}
Matrix Matrix::operator-(int x)
{
	Matrix M(this->rows,this->columns);
	for(int i=0;i<M.rows;i++)
	{
		for(int j=0;j<M.columns;j++)
		{
			M.matrix[i][j]=this->matrix[i][j]-x;
		}
	}
	return M;
}
Matrix Matrix::operator+(const Matrix & M2)
{
	Matrix M(this->rows,this->columns);
	if(this->columns==M2.columns && this->rows==M2.rows)
	{
		for(int i=0;i<M.rows;i++)
		{
			for(int j=0;j<M.columns;j++)
			{
				M.matrix[i][j]=this->matrix[i][j]+M2.matrix[i][j];
			}
		}
	}
	return M;
}
Matrix Matrix::operator-(const Matrix & M2)
{
	Matrix M(this->rows,this->columns);
	if(this->columns==M2.columns && this->rows==M2.rows)
	{
		for(int i=0;i<M.rows;i++)
		{
			for(int j=0;j<M.columns;j++)
			{
				M.matrix[i][j]=this->matrix[i][j]-M2.matrix[i][j];
			}
		}
	}
	return M;
}
void Matrix::setvalues()
{
	cout<<"\nEnter "<<this->rows*this->columns<<" Values:";
	for(int i=0;i<this->rows;i++)
	{
		for(int j=0;j<this->columns;j++)
		{
			cin>>this->matrix[i][j];
		}
	}

}
void Matrix::Display()
{
	cout<<"\nThe matrix::\n";
	for(int i=0;i<this->rows;i++)
	{
		for(int j=0;j<this->columns;j++)
		{
			cout<<this->matrix[i][j]<<"\t";
		}
		cout<<endl;
	}

}
Matrix::~Matrix() {
	cout<<"in destructor";
	for(int i=0;i<this->rows;i++)
	{
		delete [] this->matrix[i];
	}
	delete [] this->matrix;
}

