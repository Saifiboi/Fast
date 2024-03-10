//============================================================================
// Name        : SAIF UR REHMAN
// ASSIGNMENT  : 03
// QUESTION    : 3
// FILE        : FRACTION.CPP
//============================================================================
/*
 * Fraction.cpp
 *
 *  Created on: Mar 27, 2023
 *      Author: safi
 */

#include "Fraction.h"
using namespace std;
int gcd(int m,int n);
Fraction::Fraction() {
	this->numer=0;		//Default constructor.
	this->denom=1;

}
Fraction::Fraction(int numer) {
	this->numer=numer;
	this->denom=1;		//parameterized constructor with only numerator.

}
Fraction::Fraction(int numer,int denom) {		//Parameterized constuctor having both parameters.
	this->store(numer, denom);
	int temp=0;
	if(this->denom<0)	//normalizing in sign.
	{
		this->numer*=(-1);
		this->denom*=(-1);
	}
	if(this->numer<0)		//calculating gcd for normalizing.
	{
		temp=gcd(this->numer*(-1),this->denom);
	}
	else
	{
		temp=gcd(this->numer,this->denom);
	}
	if(temp!=this->denom){		//normalizing the fraction.
		this->numer/=temp;
		this->denom/=temp;
	}
}
Fraction::Fraction(const Fraction & F)
{
		this->store(F.numer, F.denom);
		int temp=0;
		if(this->denom<0)
		{
			this->numer*=(-1);
			this->denom*=(-1);
		}
		if(this->numer<0)
		{
			temp=gcd(this->numer*(-1),this->denom);
		}
		else
		{
			temp=gcd(this->numer,this->denom);
		}
		if(temp!=this->denom){
			this->numer/=temp;
			this->denom/=temp;
		};
}
void Fraction::store(int numer,int denom)
{
	if(denom==0)
	{
		cout<<"\nRutime error !program aborted:\n";
		exit(0);
	}
	this->denom=denom;
	this->numer=numer;
	int temp=0;
	if(this->denom<0)
	{
		this->numer*=(-1);
		this->denom*=(-1);
	}
	if(this->numer<0)
	{
		temp=gcd(this->numer*(-1),this->denom);
	}
	else
	{
		temp=gcd(this->numer,this->denom);
	}
	if(temp!=1){
		this->numer/=temp;
		this->denom/=temp;
	}
}
Fraction Fraction::operator+(const Fraction &Arg){		//overloadin+ operator.
	Fraction Ret;
	Ret.store((this->numer*Arg.denom)+(Arg.numer*this->denom), this->denom*Arg.denom);
	return Ret;
}
Fraction Fraction::operator-(const Fraction &Arg){	//overloadin- operator.
	Fraction Ret;
	Ret.store((this->numer*Arg.denom)-(Arg.numer*this->denom), this->denom*Arg.denom);
	return Ret;
}
Fraction Fraction::operator*(const Fraction &Arg){		//overloadin* operator.
	Fraction Ret;
	Ret.store(this->numer*Arg.numer, this->denom*Arg.denom);
	return Ret;
}
Fraction Fraction::operator/(const Fraction &Arg){
	Fraction Ret;
	Ret.store(this->numer*Arg.denom, this->denom*Arg.numer);
	return Ret;
}
void Fraction::operator+=(const Fraction &Arg){		//overloadin+= operator.
	this->store((this->numer*Arg.denom)+(Arg.numer*this->denom), this->denom*Arg.denom);
}
void Fraction::operator-=(const Fraction &Arg){		//overloadin-= operator.
	this->store((this->numer*Arg.denom)-(Arg.numer*this->denom), this->denom*Arg.denom);
}
void Fraction::operator*=(const Fraction &Arg){
	this->store(this->numer*Arg.numer, this->denom*Arg.denom);
}
void Fraction::operator/=(const Fraction &Arg){		//overloadin/= operator.
	this->store(this->numer*Arg.denom, this->denom*Arg.numer);
}
Fraction Fraction::operator<<(int n)		//overloadin<< operator.
{
	Fraction F;
	F.store(this->numer<<n, this->denom<<n);
	return F;
}
Fraction Fraction::operator>>(int n)	//overloadin>>operator.
{
	Fraction F;
	F.store(this->numer>>n, this->denom>>n);
	return F;
}
bool Fraction::operator==(Fraction & F)		//overloadin== operator.
{
	if((this->numer==F.numer)&&(this->denom==F.denom))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool Fraction::operator!=(Fraction & F)		//overloadin!= operator.
{
	if((this->numer==F.numer)&&(this->denom==F.denom))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
bool Fraction::operator<(Fraction &F)		//overloadin< operator.
{
	float temp1,temp2;
	temp1=static_cast<float>(this->numer)/this->denom;
	temp2=static_cast<float>(F.numer)/F.denom;
	if(temp1<temp2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool Fraction::operator>(Fraction &F)		//overloadin> operator.
{
	float temp1,temp2;
	temp1=static_cast<float>(this->numer)/this->denom;
	temp2=static_cast<float>(F.numer)/F.denom;
	if(temp1<=temp2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
bool Fraction::operator<=(Fraction &F)		//overloadin<= operator.
{
	float temp1,temp2;
	temp1=static_cast<float>(this->numer)/this->denom;
	temp2=static_cast<float>(F.numer)/F.denom;
	if(temp1<=temp2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool Fraction::operator>=(Fraction &F)		//overloadin>= operator.
{
	float temp1,temp2;
	temp1=static_cast<float>(this->numer)/this->denom;
	temp2=static_cast<float>(F.numer)/F.denom;
	if(temp1<temp2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int  Fraction::operator[](int n)		//overloadin[]operator.
{
	if(n==0)
	{
		return this->numer;
	}
	else if(n==1)
	{
		return this->denom;
	}
	else
	{
		cout<<"\nInvalid Index:";
		return -1;
	}
}
Fraction Fraction::operator++()		//overloadin++ pre increment operator.	
{
	this->store(this->numer+this->denom, this->denom);
	return *this;
}
Fraction Fraction::operator++(int n)	//overloadin++ post increment operator.
{
	Fraction F;
	F.store(this->numer, this->denom);
	this->store(this->numer+this->denom, this->denom);
	return F;
}
Fraction Fraction::operator--()		//overloadin-- pre increment operator.
{
	this->store(this->numer-this->denom, this->denom);
	return *this;
}
Fraction Fraction::operator--(int n)	//overloadin-- post increment operator.
{
	Fraction F;
	F.store(this->numer, this->denom);
	this->store(this->numer-this->denom, this->denom);
	return F;
}void Fraction::operator()(int m,int n)		//overloadin() operator.
{
	if(n==-55098765)
	{
		this->store(m, this->denom);
	}
	else
	{
		this->store(m, n);
	}
}
Fraction* Fraction::operator&()		//overloadin& operator.
{
	return this;
}
Fraction Fraction::operator&&(const Fraction& F) 	//overloadin&& operator.
{
	Fraction F1;
	F1.store(this->numer&&F.numer, this->numer&&F.numer);
	return F1;
}
Fraction Fraction::operator||(const Fraction& F)	//overloadin|| operator.
{
	Fraction F1;
	F1.store(this->numer||F.numer, this->denom||F.denom);
	return F1;
}
Fraction* Fraction::operator->()	//overloadino-> operator.
{
	return this;
}
void Fraction::operator->*(Fraction &F)		//overloadin->* operator.
{
	F.denom=this->denom;
	F.numer=this->numer;
}
int Fraction::getNumerator()		//Getter for numerator.
{
	return this->numer;
}
int Fraction::getDenominator()		//Getter for Denomenator.
{
	return this->denom;
}
void Fraction::Display()		//Displaying the Fraction.
{
	if((this->numer==0)||this->denom==1)
	{
		cout<<this->numer<<endl;
	}
	else
	{
		cout<<this->numer<<"/"<<this->denom<<endl;
	}
}
Fraction::~Fraction() {
	// TODO Auto-generated destructor stub
}
int gcd(int m,int n)		//calculating gcd through recursion.
{
	int temp;
	if(n==0)
	{
		return m;
	}
	else
	{
		temp=m;
		m=n;
		n=temp%n;
		return gcd(m,n);
	}
}

