/*
 * Integer.cpp
 *
 *  Created on: Mar 16, 2023
 *      Author: safi
 */

#include "Integer.h"
#include"String.h"
#include<cmath>
using namespace std;
Integer::Integer()
{
	this->number=0;

}
Integer::Integer(int n)
{
	this->number=n;
}
Integer::Integer(String S)
{
	this->number=S.stoi();
}

int Integer::get() const
{
	return number;
}

void Integer::set(int Number)
{
	this->number = Number;
}
int Integer::bitCount()
{
	//Calcluating two's complement.
	int num=~(this->number);
	num+=1;
	int count=0;
	int bits=32;
	while(num && bits>0)
	{
		if(num & 1==1)//checking last bit is 1 or 0?
		{
			count++;
		}
		num=num>>1;
		bits--;
	}
	return count;
}
int Integer::compareTo(Integer I)
{
	if(this->number==I.number)
	{
		return 0;
	}
	else if(this->number<I.number)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}
double Integer::doubleValue()
{
	return static_cast<double>(this->number);
}
float Integer::floatValue()
{
	return static_cast<float>(this->number);
}
Integer Integer::plus(const Integer & B)
{
	Integer I;
	I.number=this->number+B.number;
	return I;
}
Integer Integer::minus(const Integer & B)
{
	Integer I;
	I.number=this->number-B.number;
	return I;
}
Integer Integer::multiple(const Integer & B)
{
	Integer I;
	I.number=this->number*B.number;
	return I;
}
Integer Integer::divide(const Integer & B)
{
	Integer I;
	I.number=this->number/B.number;
	return I;
}
int Integer::numberOfLeadingZeros(int i)
{
	int num=sizeof(int)*8;
	i=~i;	//calculated 2's complement.
	i+=1;
	if(i==0)
	{
		return num;
	}
	else
	{
		int count=0;
		while(i>>count!=0 && count<32)
		{
			count++;
		}
		return num-count;
	}

}
 int Integer::numberOfTrailingZeros(int i)
{
	int num=sizeof(int)*8;
	i=~i;	//calculated 2's complement.
	i+=1;
	if(i==0)
	{
		return num;
	}
	else
	{
		int count=0;
		while(i<<count!=0 && count<32)
		{
			count++;
		}
		return num-count;
	}

}
String Integer::toBinaryString(int i)
{
	int dig=0;
	int power=0;
	char * binary=new char [33];
	char  temp;
	char ch;
	while(i!=0 && power<32)
	{
		dig= i & 1;

		i=i>>1;
		switch(dig)
				{
			case 0:
				ch='0';
				break;
			case 1:
				ch='1';
				break;
		}
		binary[power]=ch;
		power++;
	}
	binary[power]='\0';

	for(int i=0;i<power/2;i++)
	{
		temp=binary[i];
		binary[i]=binary[(power-1)-i];
		binary[(power-1)-i]=temp;
	}
	String S(binary);
	return S;
}
String Integer::toHexString(int i)
{
	String S;
	int dig=0;
	int indices[100];
	int iter=0;
	char *hex="0123456789ABCDEF\0";
	if (i==0)
	{
		S.append('0');
		return S;
	}
	else
	{
		while(i>0)
		{
			dig=i%16;
			indices[iter]=dig;
			i/=16;
			iter++;

		}
		iter--;
		while(iter>=0)
		{
			S.append(hex[indices[iter]]);
			iter--;
		}
		return S;
	}
}
String Integer::toOctString(int i)
{
	String S;
	int dig=0;
	int indices[100];
	int iter=0;
	char *oct="01234567\0";
	if (i==0)
	{
		S.append('0');
		return S;
	}
	else
	{
		while(i>0)
		{
			dig=i%8;
			indices[iter]=dig;
			i/=8;
			iter++;
		}
		iter--;
		while(iter>=0)
		{
			S.append(oct[indices[iter]]);
			iter--;
		}
		return S;
	}
}
Integer::~Integer()
{
	cout<<"\nDestructor\n";
}


