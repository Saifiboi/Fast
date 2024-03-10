//============================================================================
// Name        : SAIF UR REHMAN
// ASSIGNMENT  : 03
// QUESTION    : 3
// FILE        : MAIN.CPP
//============================================================================
#include<iostream>
#include "Fraction.cpp" // assuming that the class definition is in "Fraction.h"
using namespace std;

int main() {
	int numer, denom,val;
	cout<<"\nEnter the numerator and denominator of Fraction f1:";
	cin>>numer>>denom;
	// create some fraction objects
	Fraction f1(numer, denom);
	cout<<"\nEnter the numerator and denominator of Fraction f2:";
	cin>>numer>>denom;
	Fraction f2(numer, denom);

	// display the fractions
	cout << "f1 = ";
	f1.Display();
	cout << "f2 = ";
	f2.Display();

	// perform some arithmetic operations
	Fraction f3 = f1 + f2;
	Fraction f4 = f1 - f2;
	Fraction f5 = f1 * f2;
	Fraction f6 = f1 / f2;

	// display the results
	cout << "f1 + f2 = ";
	f3.Display();
	cout << "f1 - f2 = ";
	f4.Display();
	cout << "f1 * f2 = ";
	f5.Display();
	cout << "f1 / f2 = ";
	f6.Display();
	cout<<"\nChecking compound operators:";
	cout<<"\nf1+=f2:::f1=";
	f1 += f2;
	f1.Display();
	cout<<"\nf1-=f2:::f1=";
	f1 -= f2;
	f1.Display();
	cout<<"\nf1*=f2:::f1=";
	f1 *= f2;
	f1.Display();
	cout<<"\nf1/=f2:::f1=";
	f1 /= f2;
	f1.Display();


	cout<<"\nChecking Bitwise shifts:";
	cout<<"\nEnter the values to shift:";
	cin>>val;
	cout<<"\nf1<<"<<val<<"=";
	(f1<<val).Display();
	cout<<"\nEnter the values to shift:";
	cin>>val;
	cout<<"\nf1>>"<<val<<"=";
	(f1>>val).Display();

	// perform some comparison operations
	if (f1 == f2) {
		cout << "f1 == f2" << endl;
	} else if (f1 != f2) {
		cout << "f1 != f2" << endl;
	}

	if (f1 < f2) {
		cout << "f1 < f2" << endl;
	} else if (f1 > f2) {
		cout << "f1 > f2" << endl;
	} else {
		cout << "f1 and f2 are equal" << endl;
	}

	// use the subscript operator to get the numerator and denominator
	cout << "f1[0] = " << f1[0] << endl;
	cout << "f1[1] = " << f1[1] << endl;
	cout<<"\nChecking logical && operator:";
	cout<<"\nf1&&f2=";
	(f1&&f2).Display();
	cout<<"\nChecking logical || operator:";
	cout<<"\nf1||f2=";
	(f1||f2).Display();
	cout<<"\nChecking address & operator:";
	cout<<"\n&f1=";
	cout<<(&f1);
	// use the function call operator to set a new value for the fraction

	cout<<"\nUse of ()operator:::\n";
	cout<<"\nEnter the numerator and denominator of Fraction f2:";
	cin>>numer>>denom;
	f1(numer, denom);
	cout << "f1 = ";
	f1.Display();

	// use the increment and decrement operators
	Fraction f7 = ++f1;
	Fraction f8 = f2--;
	cout << "++f1 = ";
	f7.Display();
	cout << "f2-- = ";
	f8.Display();
	cout<<"f2=";
	f2.Display();

	// use the arrow and arrow-star operators
	cout<<"\nTesting -> operator::";
	cout<<"\nf1=";
	f1->Display();
	cout<<"\nTesting ->* operator::";
	cout<<"\nApplied f1->*f2 and f2=";
	f1->*(f2);
	f2.Display();

	return 0;
}
