//============================================================================
// Name        : Lab5.cpp
// Author      : Saifi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int pow(int b,int e)
{
	if(e==1)
	{
		return b;
	}
	if(e==0)
	{
		return 1;
	}
	else
	{
		return b*pow(b,e-1);
	}
}
void draw (char ch,int start)
{
	if(start==0)
		return;
	else
	{
		cout<<ch;
		draw(ch,start-1);
	}
}
void Pattern1(char ch,int lines,int start)
{
	if(start>lines)
	{
		return;
	}
	else
	{
		draw(' ',lines-start);
		draw (ch,start);
		cout<<endl;
		Pattern1(ch,lines,start+1);
	
			draw(' ',(lines-(start-1)));
			draw(ch,start-1);
			cout<<endl;

	}
}
int product(int a,int b)
{
	if(b==1)
	{
		return a;
	}
	if(b==0)
	{
		return 0;
	}
	else
	{
		return a+product(a,b-1);
	}
}
void draw2(int b,int c)
{
	if(c>=1)
	{
		cout<<(static_cast<char>(64+b))<<"\t";
		draw2(b+1,c-1);
	}
}
void Pattern2(int a,int b,int c)
{
	if(c<=a)
	{
		draw2(b,c);
		cout<<endl;
		Pattern2(a,b+c,c+1);
	}
}
bool SubString(char str1[],char str12[],int length1,int length2)
{
	if(str1[0]=='\0')
	{
		return 1;
	}
	else if(str12[0]=='\0')
	{
		return 0;
	}
	else
	{
		if(str1[0]==str12[0])
		{
				return SubString(&str1[1],&str12[1],length1-1,length2-1);
				length1=-1;

		}
		else
		{
			if(length1==-1)
			return 0;
			else
			{return SubString(&str1[0],&str12[1],length1-1,length2-1);
			length1=1;}
		}
	}
}
int reduce(int start,int number,int step)
{
	if(start==1)
	{
		if(start+step>number)
		{
			return start;
		}
		else if(start+step==number){
		return number;}
	}
	if(start+step>number)
	{
		number=start;
		return number;
	}
	if(start+step==number)
	{
		return number;
	}
	else
	{
		return reduce(start+step,number,step);
	}
}
int fit(int start,int number,int num2,int size)
{
	int res;
	if(number>num2)
	{
		res=reduce(start,num2,size);
	}
	else
	{
	res=reduce(start,number,size);
	if(num2==res)
	{
		return num2;
	}
	else if(num2<res)
	{
		fit(start,res,num2,size+2);
	}
	else{return res;}
	}

}
int fittest(int number)
{
	if(number==1)
		return 1;
	int res=fit(1,17,number,2);
	if (res==number)
	{
		return 1;
	}
	else
	{
			return 0;
	}
}
int main() {
//	//cout<<pow(5,3);
//Pattern1('*',5,1);
//	//cout<<product(5,3);
//	Pattern2(5,1,1);
//	draw2(1,3);
//	cout<<fittest(17);
//	cout<<SubString("hart","lmao",4,9);
	cout<<fittest(5);
	return 0;
}
