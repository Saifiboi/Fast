/*
 * Complex.h
 *
 *  Created on: Mar 8, 2023
 *      Author: safi
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {
	double real;
	double imaginary;
public:
	Complex();
	Complex(double,double);
	Complex(Complex & copy);
	double getImaginary() const;
	void setImaginary(double imaginary);
	double getReal() const;
	void setReal(double real);
	Complex addComplex(double r);
	Complex addComplex(Complex &c1);
	Complex subComplex(double r);
	Complex subComplex(Complex &c1);
	Complex mulComplex(Complex &c1);
	Complex mulComplex(double n);
};

#endif /* COMPLEX_H_ */