/*
 * Money.cpp
 *
 *  Created on: Mar 29, 2023
 *      Author: safi
 */

#include "Money.h"
using namespace std;
ostream& operator<< (ostream &os,Money& right);
istream& operator>> (istream & in,Money& right);
Money::Money() {
	this->dollars=0;
	this->sents=0;

}
Money::Money(int dollar, int cents)
{
	this->dollars=dollar;
	this->sents=cents;
	int temp=0;
	if(this->sents>100)
	{
		temp=this->sents/100;
		this->dollars+=temp;
		this->sents=this->sents%100;
	}
}
Money Money::operator+(const Money &obj)
{
	Money M;
	M.dollars=this->dollars+obj.dollars;
	M.sents=this->sents+obj.sents;
	int temp=0;
	if(M.sents>100)
	{
		temp=M.sents/100;
		M.dollars+=temp;
		M.sents=M.sents%100;
	}
	return M;
}
Money Money::operator-(const Money &obj)
{
	Money M;
	if(this->dollars>obj.dollars)
	{
		M.dollars=this->dollars-obj.dollars;
		M.sents=this->sents-obj.sents;
		if(M.sents<0)
		{
			M.sents=M.sents*(-1);
			M.sents=100-M.sents;
			M.dollars=M.dollars-1;
		}
	}
	else if(this->dollars==obj.dollars)
	{
		if(this->sents>=obj.sents)
		{
			M.sents=this->sents-obj.sents;
			M.dollars=0;
		}
		else
		{
			cout<<"\nInvalid Minus:";
			exit(0);
		}
	}
	else
	{
		cout<<"\nInvalid Minus:";
		exit(0);
	}
	return M;
}
const Money Money::operator=(const Money &obj)
{
	this->dollars=obj.dollars;
	this->sents=obj.sents;
	return *this;
}
void Money::operator++ ()
{
	this->sents++;
	if(this->sents==100)
	{
		this->dollars++;
		this->sents=0;
	}
	this->dollars++;
}
void Money::operator++ (int x)
{
	this->sents++;
	if(this->sents==100)
	{
		this->dollars++;
		this->sents=0;
	}
	this->dollars++;
}
void Money::operator-- ()
{
	if(this->dollars==1)
	{
		if(this->sents>0)
		{
			this->sents--;
			this->dollars=0;
		}
		else
		{
			cout<<"\nInvalid Minus:";
			exit(0);
		}
	}
	else if(this->dollars>1)
	{
		this->sents--;
		if(this->sents<0)
		{
			this->sents=this->sents*(-1);
			this->sents=100-this->sents;
			this->dollars=this->dollars-1;
		}
		this->dollars--;
	}
	else
	{
		cout<<"\nInvalid Minus:";
		exit(0);
	}



}
void Money::operator-- (int x)
{
	if(this->dollars==1)
	{
		if(this->sents>0)
		{
			this->sents--;
			this->dollars=0;
		}
		else
		{
			cout<<"\nInvalid Minus:";
			exit(0);
		}
	}
	else if(this->dollars>1)
	{
		this->sents--;
		if(this->sents<0)
		{
			this->sents=this->sents*(-1);
			this->sents=100-this->sents;
			this->dollars=this->dollars-1;
		}
		this->dollars--;
	}
	else
	{
		cout<<"\nInvalid Minus:";
		exit(0);
	}

}
void Money::operator*= (const Money& right)
{
	this->dollars=this->dollars*right.dollars;
	this->sents=this->sents*right.sents;
	int temp=0;
	if(this->sents>100)
	{
			temp=this->sents/100;
			this->dollars+=temp;
			this->sents=this->sents%100;
	}
}
bool Money::operator!= (const Money& right)
{
	if((this->dollars==right.dollars)&&(this->sents==right.sents))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
bool Money::operator> (const Money& right)
{
	if((this->dollars==right.dollars))
	{
		if(this->sents>right.sents)
			return 1;
		else
			return 0;
	}
	else if(this->dollars>right.dollars)
	{
		return 1;
	}
	else
		return 0;
}

Money::~Money() {
	// TODO Auto-generated destructor stub
}
ostream& operator<< (ostream &os,Money& right)
{
	os<<"\nDollars:"<<right.dollars;
	os<<"\nCents:"<<right.sents<<endl;
	return os;
}
istream& operator>> (istream & in,Money& right)
{
	cout<<"\nENter Dollars and sents:";
	in>>right.dollars;
	in>>right.sents;
	return in;
}
