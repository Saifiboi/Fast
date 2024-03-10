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
	friend Complex addComplex(Complex &c1,Complex &c3);
	friend Complex subComplex(Complex &c1,Complex &c3);
	friend Complex mulComplex(Complex &c1,Complex &c3);
};

#endif /* COMPLEX_H_ */
