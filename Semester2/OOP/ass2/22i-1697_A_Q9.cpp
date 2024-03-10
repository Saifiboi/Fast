/*
 * Name ::SAif Ur rehman
 * Roll Number::i221697
 * Assignment :: 2
 * Section :: CY-A
 * Question 7
 */
#include<iostream>
#include"Integer.h"
#include<iomanip>
using namespace std;
int main()
{
	Integer I;
//	Integer I2(9);
	I.set(10);
	//cout<<I.get()<<endl;
	//cout<<I.bitCount();
	//cout<<I.compareTo(I2);
	//cout<<I.doubleValue()/I2.floatValue();
//	Integer I3=I.plus(I2);
//	cout<<I3.get();
//	Integer I3=I.minus(I2);
//	cout<<I3.get();
//	Integer I3=I.multiple(I2);
//	cout<<I3.get();
//	Integer I3=I.divide(I2);
//	cout<<I3.get();
//	cout<<I.numberOfLeadingZeros(-10);
//	cout<<I.numberOfTrailingZeros(-16);
//	String S=I.toBinaryString(-10);
//	String S=I.toHexString(12345);
	String S=I.toOctString(20);

	S.display();
}

