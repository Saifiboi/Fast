//============================================================================
// Name        : SAIF UR REHMAN
// ASSIGNMENT  : 03
// QUESTION    : 3
// FILE        : FRACTION.H
//============================================================================
/*
 * Fraction.h
 *
 *  Created on: Mar 27, 2023
 *      Author: safi
 */

// Header guard to prevent multiple inclusions of this file
#ifndef FRACTION_H_
#define FRACTION_H_

// Include necessary header files
#include<iostream>

// Using the std namespace
using namespace std;

// Class declaration
class Fraction {
	int numer;
	int denom;
	public:
	// Constructors
	Fraction();
	Fraction(int numer);
	Fraction(const Fraction &);
	Fraction(int numer,int denom);
	// Setter function
	void store(int numer,int denom);

	// Getter functions
	int getNumerator();
	int getDenominator();

	// Display function
	void Display();

	// Overloaded operators
	Fraction operator+(const Fraction &);
	Fraction operator-(const Fraction &);
	Fraction operator*(const Fraction &);
	Fraction operator/(const Fraction &);
	void operator+=(const Fraction &);
	void operator-=(const Fraction &);
	void operator*=(const Fraction &);
	void operator/=(const Fraction &);
	Fraction operator<<(int n);
	Fraction operator>>(int n);
	bool operator==(Fraction &);
	bool operator!=(Fraction &);
	bool operator<(Fraction &);
	bool operator>(Fraction &);
	bool operator<=(Fraction &);
	bool operator>=(Fraction &);
	int operator[](int n);
	Fraction operator++();
	Fraction operator++(int n);
	Fraction operator--();
	Fraction operator--(int n);
	void operator()(int m,int n=-55098765);
	Fraction* operator&();
	Fraction operator&&(const Fraction&);
	Fraction operator||(const Fraction&);
	Fraction* operator->();
	void operator->*(Fraction &F);

	// Destructor
	virtual ~Fraction();
};

#endif /* FRACTION_H_ */
