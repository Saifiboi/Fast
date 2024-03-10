/*
 * String.cpp
 *
 *  Created on: Mar 15, 2023
 *      Author: safi
 */

#include "String.h"
using namespace std;
String::String() {
	this->size=2;
	this->Stringptr=new char[this->size];
	this->Stringptr[0]='\0';

}
String::String(char *str)
{
	int i=0;
	while (str[i]!='\0')	//what if const dont have \0???
	{
		i++;
	}
	this->Stringptr=new char [i];
	this->size=i;
	for(int i=0;i<this->size;i++)
	{
		this->Stringptr[i]=str[i];
	}
}
String::String(const String & s)
{
	this->size=s.size;
	this->Stringptr=new char[size];
	for(int i=0;i<size;i++)
	{
		this->Stringptr[i]=s.Stringptr[i];
	}
}
String::String(int x)
{
	this->size=x;
	this->Stringptr=new char [this->size];
	cin.getline(this->Stringptr,this->size);
	cin.ignore();

}
char String::getAt(int i)
{
	return this->Stringptr[i];
}
void String::setAt(int i,char c)
{
	this->Stringptr[i]=c;
}
String String::substr(int pos,int len)
{
	String S;
	S.size=len;
	S.Stringptr=new char [S.size];
	for(int i=0;i<S.size;i++)
	{
		S.Stringptr[i]=this->Stringptr[pos+i];
	}
	return S;
}
String String::substr(int pos)
{
	String S;
	S.size=100;
	S.Stringptr=new char [S.size];
	int i=0;
	while(this->Stringptr[(pos+i)]!='\0')
	{
		S.Stringptr[i]=this->Stringptr[pos+i];
		i++;
	}
	this->Stringptr[i]='\0';
	return S;
}
void String::append(char a)
{
	char *temp=new char [this->size];
	int i=0;
	while(this->Stringptr[i]!='\0')
	{
		temp[i]=this->Stringptr[i];
		i++;
	}
	temp[i]='\0';
	delete [] this->Stringptr;
	this->size+=1;
	this->Stringptr=new char [size];
	 i=0;
	while(temp[i]!='\0')
	{
		this->Stringptr[i]=temp[i];
		i++;
	}
	this->Stringptr[i]=a;
	this->Stringptr[i+1]='\0';
	delete []temp;
}
void String::append(String str)
{
	char *temp=new char [this->size];
	int i=0;
	while(this->Stringptr[i]!='\0')
	{
		temp[i]=this->Stringptr[i];
		i++;
	}
	temp[i]='\0';
	delete [] this->Stringptr;
	this->size+=str.size;
	this->Stringptr=new char [this->size];
	 i=0;
	while(temp[i]!='\0')
	{
		this->Stringptr[i]=temp[i];
		i++;
	}
	int j=0;
	while(str.Stringptr[j]!='\0')
	{
		this->Stringptr[i]=str.Stringptr[j];
		j++;
		i++;
	}
	this->Stringptr[i]='\0';
	delete[]temp;
}
void String::append(char *str)
{
	int i=0;
	char *temp=new char [this->size];
	while(this->Stringptr[i]!='\0')
	{
		temp[i]=this->Stringptr[i];
		i++;
	}
	temp[i]='\0';
	i=0;
	while (str[i]!='\0')	//what if const dont have \0???
	{
		i++;
	}
	this->size+=i;
	delete [] this->Stringptr;
	this->Stringptr=new char [this->size];
	i=0;
	while(temp[i]!='\0')
	{
		this->Stringptr[i]=temp[i];
		i++;
	}
	int j=0;
	while(str[j]!='\0')
	{
		this->Stringptr[i]=str[j];
		j++;
		i++;
	}
	this->Stringptr[i]='\0';
	delete[]temp;


}
int String::length()
{
	int i=0;
	while(this->Stringptr[i]!='\0')
	{
		i++;
	}
	return i;
}
char *String ::tocstring()
{
	char *ptr=new char[this->size];
	int i;
	for(i=0;this->Stringptr[i]!='\0';i++)
	{
		ptr[i]=this->Stringptr[i];
	}
	ptr[i]='\0';
	return ptr;
}
void String::display()
{
	cout<<this->Stringptr;
}
bool String::isEmpty()
{
	if(this->Stringptr==NULL || this->Stringptr[0]=='\0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void String::copy(const String & S)
{
	delete [] this->Stringptr;
	this->size=S.size;
	this->Stringptr=new char[this->size];
	for(int i=0;S.Stringptr[i]!='\0';i++)
	{
		this->Stringptr[i]=S.Stringptr[i];
	}
}
void String::copy(const char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	delete [] this->Stringptr;
	this->size=i;
	this->Stringptr=new char [this->size];
	i=0;
	while(str[i]!='\0')
	{
		this->Stringptr[i]=str[i];
		i++;
	}
}
int String::find(char ch)
{
	bool check=0;
	for (int i=0;(this->Stringptr[i]!='\0');i++)
	{
		if(this->Stringptr[i]==ch)
		{
			check=1;
			return i;
		}
	}
	return 10000;

}
bool String::equal(String S)
{
	if(this->size==S.size)
	{
		bool res=1;
		for(int i=0;i<this->size;i++)
		{
			if(this->Stringptr[i]!=S.Stringptr[i])
			{
				res=0;
			}

		}
		return res;
	}
	else{
		return 0;
	}
}
int String::stoi()
{
	int size=this->length()-2;
	int dig=0;
	int number=0;
	for(int i=0;this->Stringptr[i];i++)
	{
		switch(this->Stringptr[i])
		{
				case '0':
					dig=0;
					break;
				case '1':
					dig=1;
					break;
				case '2':
					dig=2;
					break;
				case '3':
					dig=3;
					break;
				case '4':
					dig=4;
					break;
				case '5':
					dig=5;
					break;
				case '6':
					dig=6;
					break;
				case '7':
					dig=7;
					break;
				case '8':
					dig=8;
					break;
				case '9':
					dig=9;
					break;

		}
		number+=dig*pow(10,size);
		size--;
	}
	return number;

}
String::~String() {
	delete [] this->Stringptr;
}

