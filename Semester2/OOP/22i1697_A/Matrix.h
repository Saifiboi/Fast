//============================================================================
// Name        : SAIF UR REHMAN
// ASSIGNMENT  : 03
// QUESTION    : 2
// FILE        : MATRIX.H
//============================================================================
/*
 * Matrix.h
 *
 *  Created on: Mar 23, 2023
 *      Author: safi
 */

// Header guard to prevent multiple inclusion of the header file
#ifndef MATRIX_H_
#define MATRIX_H_

#include<iostream>
#include<cstring>
#include<cstdlib>

// Matrix class definition
class Matrix {
	int rows; // Number of rows in the matrix
	int columns; // Number of columns in the matrix
	int **matrix; // Pointer to the matrix

public:
	// Constructor to initialize matrix with given rows and columns
	Matrix(int r, int c);
	// Function to set the size of the matrix
	void setsize(int x, int y);

	// Function to deallocate the memory of the matrix
	void mdelloc();

	// Function to allocate memory for the matrix
	void malloc();

	// Overloaded assignment operator
	void operator=(const Matrix &);

	// Overloaded equality operator
	bool operator==(const Matrix &);

	// Overloaded addition operator
	Matrix operator+(const Matrix &);

	// Overloaded post-increment operator
	Matrix operator++(int x);

	// Overloaded pre-increment operator
	Matrix & operator++();

	// Overloaded subtraction operator
	Matrix operator-(const Matrix &);

	// Overloaded scalar multiplication operator
	Matrix operator*(int);

	// Overloaded matrix multiplication operator
	Matrix operator*(Matrix &);

	// Function to set the values of the matrix
	void setvalues();

	// Function to display the matrix
	void Display();

	// Virtual destructor to deallocate the memory of the matrix
	virtual ~Matrix();

	// Getter and setter functions for rows and columns
	int getColumns() const;
	void setColumns(int columns);
	int getRows() const;
	void setRows(int rows);

};

#endif /* MATRIX_H_ */
