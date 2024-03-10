/*
 * Matrix.h
 *
 *  Created on: Mar 23, 2023
 *      Author: safi
 */

#ifndef MATRIX_H_
#define MATRIX_H_
#include<iostream>
class Matrix {
	int rows;
	int columns;
	int **matrix;

public:
	Matrix(int r,int c);
	void operator=(const Matrix &);
	bool operator==(const Matrix &);
	Matrix operator+(int x);
	Matrix operator-(int x);
	Matrix operator+(const Matrix &);
	Matrix operator-(const Matrix &);
	void setvalues();
	void Display();
	virtual ~Matrix();
};

#endif /* MATRIX_H_ */
