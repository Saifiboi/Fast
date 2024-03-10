//============================================================================
// Name        : SAIF UR REHMAN
// ASSIGNMENT  : 03
// QUESTION    : 2
// FILE        : MAIN.CPP
//===========================================================================2
// Including necessary header files
#include <iostream>
#include"Matrix.cpp"

using namespace std;

int main() {
	// Prompt user to input rows and columns of matrix 1
	char input;
	cout<<"\nWelcome to Matrix Portal:::\n";
	int rows,cols,scalar;
	cout<<"\nPlease enter the rows of matrix 1:";
	cin>>rows;
	// Validate user input for rows
	while(rows<0)
	{
		cout<<"\nInvalid Input!Rows can't be negative:Try Again:";
		cin>>rows;
	}
	// Prompt user to input columns of matrix 1
	cout<<"\nPlease enter the columns of matrix 1:";
	cin>>cols;
	// Validate user input for columns
	while(cols<0)
	{
		cout<<"\nInvalid Input!Columns can't be negative:Try Again:";
		cin>>cols;
	}
	// Create matrix M with user input rows and columns
	Matrix M(rows,cols);
	// Set values of matrix M using setvalues() function
	M.setvalues();
	// Prompt user to input rows and columns of matrix 2
	cout<<"\nPlease enter the rows of matrix 2:";
	cin>>rows;
	// Validate user input for rows
	while(rows<0)
	{
		cout<<"\nInvalid Input!Rows can't be negative:Try Again:";
		cin>>rows;
	}
	// Prompt user to input columns of matrix 2
	cout<<"\nPlease enter the columns of matrix 2:";
	cin>>cols;
	// Validate user input for columns
	while(cols<0)
	{
		cout<<"\nInvalid Input!Columns can't be negative:Try Again:";
		cin>>cols;
	}
	// Create matrix M1 with user input rows and columns
	Matrix M1(rows,cols);
	// Set values of matrix M1 using setvalues() function
	M1.setvalues();
	// Display matrix M and M1
	cout<<"\nDisplaying matrix 1:\n";
	M.Display();
	cout<<"\nDisplaying matrix 2:\n";
	M1.Display();
	// Perform matrix addition of M and M1
	cout<<"\nPerforming matrix1+matrix 2:\n";
	(M+M1).Display();
	// Perform matrix subtraction of M and M1
	cout<<"\nPerforming matrix1-matrix 2:\n";
	(M-M1).Display();
	// Prompt user to input scalar value for matrix multiplication
	cout<<"\nPerforming matrix1*scalar:\n";
	cout<<"\nEnter the scalar value:";
	cin>>scalar;
	(M*scalar).Display();
	// Prompt user to input scalar value for matrix multiplication
	cout<<"\nPerforming matrix2*scalar:\n";
	cout<<"\nEnter the scalar value:";
	cin>>scalar;
	(M1*scalar).Display();
	// Perform matrix multiplication of M and M1
	cout<<"\nPerforming matrix1*matrix 2:\n";
	(M*M1).Display();
	// Compare matrix M and M1
	cout<<"\nPerforming matrix1==matrix 2:\n";
	cout<<"\nResult="<<(M==M1);
	// Create matrix M2 with rows and columns
	Matrix M2(rows,cols);
	// Display matrix M2
	cout<<"\nDispalying new matrix:\n";
	M2.Display();
	// Assign values of matrix M to M2
	cout<<"\nNow performing matrix3=matrix1";
	M2=M;
	// Display matrix M2
	cout<<"\nDisplaying matrix3:\n";
	M2.Display();
	// Updating Matrix M
	cout<<"\nUpdating matrix 1 as follows:\n";
	M.setvalues();
	// Again Displaying matrix.
	cout<<"\nDisplaying matrix3 again:\n";
	M2.Display();
	// Performing Pre-increment.
	cout<<"\nPerforming matrix3 = ++matrix1:\n";
	M2=++M;
	cout<<"\nMatrix 3:\n";
	M2.Display();
	cout<<"\nMatrix 1:\n";
	M.Display();
	cout<<"\nPerforming matrix3 = matrix1++:\n";
	// Performing post-increment.
	M2=M++;
	cout<<"\nMatrix 3:\n";
	M2.Display();
	cout<<"\nMatrix 1:\n";
	M.Display();
	// Destructor Call
	cout<<"\nDestroying all matrices:\n";
}
