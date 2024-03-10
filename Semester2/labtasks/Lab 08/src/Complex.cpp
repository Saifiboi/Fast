/*
 * Complex.cpp
 *
 *  Created on: Mar 8, 2023
 *      Author: safi
 */

#include "Complex.h"

Complex::Complex(){
	this->real=1;
	this->imaginary=1;
	// TODO Auto-generated constructor stub

}
Complex::Complex(double r,double i) {
	this->real=r;
	this->imaginary=i;
	// TODO Auto-generated constructor stub

}
Complex::Complex(Complex & copy)
	{
		this->imaginary=copy.imaginary;
		this->real=copy.real;
	}

double Complex::getImaginary() const {
	return imaginary;
}

void Complex::setImaginary(double imaginary) {
	this->imaginary = imaginary;
}

double Complex::getReal() const {
	return real;
}

void Complex::setReal(double real) {
	this->real = real;
}

Complex addComplex(Complex &c1,Complex &c3)
{
	Complex C2;
	C2.real=c3.real+c1.real;
	C2.imaginary=c3.imaginary+c1.imaginary;

	return C2;

}
Complex subComplex(Complex &c1,Complex &c3)
{
	Complex C2;
	C2.real=c3.real-c1.real;
	C2.imaginary=c3.imaginary-c1.imaginary;

	return C2;

}

Complex mulComplex(Complex &c1,Complex &c3)
{
	Complex C2;
	C2.real=c3.real*c1.real-c3.imaginary*c1.imaginary;
	C2.imaginary=c3.real*c1.imaginary+c3.imaginary*c1.real;


	return C2;

}
