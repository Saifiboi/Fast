//============================================================================
// Name        : SAIF UR REHMAN
// ASSIGNMENT  : 03
// QUESTION    : 2
// FILE        : MATRIX.CPP
//============================================================================
/*
 * Matrix.cpp
 *
 *  Created on: Mar 23, 2023
 *      Author: safi
 */

#include "Matrix.h"
using namespace std;
Matrix::Matrix(int r,int c) {
	this->rows=r;
	this->columns=c;	//Dumping Input/Arguement.
	this->malloc();		//allocating memory.
	for(int i=0;i<this->rows;i++)		//Looping through matrix and assigning 0.
	{
		for(int j=0;j<this->columns;j++)
		{
			matrix[i][j]=0;
		}
	}

}
void Matrix::setsize(int x,int y)
{
	this->rows=x;
	this->columns=y;	//Dumping Parameters.
	this->mdelloc();	//Deleting Previous one.
	this->malloc();		//Creating New one.
}
void Matrix::operator=(const Matrix & M)
{
	this->mdelloc();		//Deallocating Previous Memory.	
	this->rows=M.rows;
	this->columns=M.columns;	//Dumping Arguements.
	this->malloc();
	for(int i=0;i<this->rows;i++)		//Copying Memory index by index.
	{
		for(int j=0;j<this->columns;j++)
		{
			this->matrix[i][j]=M.matrix[i][j];
		}
	}
}
bool Matrix::operator==(const Matrix & M)
{
	bool res=1;
	if(this->rows==M.rows && this->columns==M.columns)	//Checking Matrix Sizes are equal.
	{
		for(int i=0;i<this->rows;i++)
		{
			for(int j=0;j<this->columns;j++)
			{
				if(this->matrix[i][j]!=M.matrix[i][j])		//Checking if any element of both matrices are not equal.
				{
					res =0;
				}
			}
		}
		return res;		//returning boolean calculation.
	}
	else
	{
		return 0;
	}
}
Matrix Matrix::operator+(const Matrix & M2)
{
	Matrix M(this->rows,this->columns);
	if(this->columns==M2.columns && this->rows==M2.rows)	//Checking if sizes are equal.
	{
		for(int i=0;i<M.rows;i++)
		{
			for(int j=0;j<M.columns;j++)		//Adding index by index values.
			{
				M.matrix[i][j]=this->matrix[i][j]+M2.matrix[i][j];
			}
		}
		return M;		//returning calculated matrix.
	}
	else
	{
		cout<<"\nInvalid Operation::\n";
		return M;
	}
}
Matrix Matrix::operator-(const Matrix & M2)
{
	Matrix M(this->rows,this->columns);
	if(this->columns==M2.columns && this->rows==M2.rows)		//Checking if sizes are equal.	
	{
		for(int i=0;i<M.rows;i++)	//Adding index by index values.
		{
			for(int j=0;j<M.columns;j++)
			{
				M.matrix[i][j]=this->matrix[i][j]-M2.matrix[i][j];
			}
		}
		return M;	//returning calculated matrix.
	}
	else
	{
		cout<<"\nInvalid Operation::\n";
		return M;
	}
}
void Matrix::setvalues()
{
	    string input,copy;//copy to use in strtok function
	    int iter = 0, *integer;	//iter for iteration in loops.
	    int size = this->rows * this->columns;
	    cout << "\nEnter " << size << " values (comma separated): ";
	    cin >> input;
	    copy=input;
	    char *token = strtok(&copy[0], ",");
	    while (token != NULL) {
	        iter++;
	        token = strtok(NULL, ",");
	    }
	    if (iter != size) {
	        cout << "\nBound error! Program aborted." << endl;
	        exit(0);
	    }
	    integer = new int[size];
	    iter = 0;
	    token=NULL;
	    copy=input;
	    token = strtok(&copy[0], ",");
	    while (token != NULL) {
	        integer[iter] = stoi(token);
	        iter++;
	        token = strtok(NULL, ",");
	    }
	    for (int i = 0; i < this->rows; i++) {
	        for (int j = 0; j < this->columns; j++) {
	            this->matrix[i][j] = integer[(i * this->columns) + j];
	        }
	    }
	    delete[] integer;

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
void Matrix::mdelloc()
{
	for(int i=0;i<this->rows;i++)
	{
		delete [] this->matrix[i];
	}
	delete [] this->matrix;
	this->matrix=0;
}
void Matrix::malloc()
{
	this->matrix=new int *[this->rows];
	for(int i=0;i<this->rows;i++)
	{
		this->matrix[i]=new int [this->columns];
	}
}

int Matrix::getColumns() const {
	return columns;
}

void Matrix::setColumns(int columns) {
	this->columns = columns;
	this->mdelloc();
	this->malloc();
}

int Matrix::getRows() const {
	return rows;
}

void Matrix::setRows(int rows) {
	this->rows = rows;
	this->mdelloc();
	this->malloc();
}
Matrix  Matrix::operator*(int x)
{
	Matrix M(this->rows,this->columns);
	for(int i=0;i<M.rows;i++)
	{
		for(int j=0;j<=M.columns;j++)
		{
			M.matrix[i][j]=x*this->matrix[i][j];
		}
	}
	return M;

}
Matrix  Matrix::operator*(Matrix & M1)
{
	Matrix M(this->rows,M1.columns);
	if(this->columns==M1.rows)
	{
		for(int i=0;i<M.rows;i++)
		{
			for(int j=0;j<M.columns;j++)
			{
				M.matrix[i][j]=0;
			}
		}
		for(int i=0;i<this->rows;i++)
		{
			for(int j=0;j<this->rows;j++)
			{
				for(int k=0;k<this->columns;k++)
				{
					M.matrix[i][j]+=this->matrix[i][k]*M1.matrix[k][j];
				}
			}
		}
		return M;
	}
	else
	{
		cout<<"\nInvalid Operation::\n";
		return M;
	}
}
Matrix & Matrix::operator++()
{
	for(int i=0;i<this->rows;i++)
	{
		for(int j=0;j<this->columns;j++)
		{
			this->matrix[i][j]++;
		}
	}

	return *this;
}
Matrix Matrix::operator++(int x)
{
	Matrix temp(this->rows,this->columns);
	for(int i=0;i<this->rows;i++)
	{
		for(int j=0;j<this->columns;j++)
		{
			temp.matrix[i][j]=this->matrix[i][j];
			this->matrix[i][j]++;
		}
	}

	return temp;
}
Matrix::~Matrix() {
	this->mdelloc();
}
