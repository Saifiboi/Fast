/* Name :Saif ur rehman    Student ID: i221697
	Assignment#4*/
#include<iostream>
using namespace std;
bool isalpha(char);
bool isdigit(char);
bool isalnum(char);		//prototypes of functions.
bool isxdigit(char);
bool islower(char);
bool isupper(char);
bool isspace(char);
int main()
{
	char ch;
	bool alpha,digit,alnum,xdigit,lower,upper,space;
	cout<<"\nEnter the character:";
	ch=cin.get();
	while((ch>=0 && ch<=31 )|| ch==127)		//validating for printable character.
	{
		cout<<"\nInvalid input !Please enter the printable character!Try again:";
		cin>>ch;
	}
	alpha=isalpha(ch);
	digit=isdigit(ch);
	alnum=isalnum(ch);
	xdigit=isxdigit(ch);		//calling mutiple functions for single character.
	lower=islower(ch);
	upper=isupper(ch);
	space=isspace(ch);
	if(space==1)
	{
		cout<<"\nThe character is a space\n";
	}
	else if(alnum==1)
	{
		if(xdigit==1)
		{
			if(digit==1)	//narrow down to digit.
			{
				cout<<"\nThe character is a numeric digit and also representing hexadecimal number\n";
			}
			if(lower==1)	//narrow down character from a to f.
			{
				cout<<"\nThe character is in lower case and also representing hexadecimal number\n";
			}
			else if(upper==1)	//narrow down character from A to F.
			{
				cout<<"\nThe character is in upper case and also representing hexadecimal number\n";
			}
		}
		else if(alpha==1)
		{
			if(lower==1)	//narrow down to lower case beyoned f.
			{
				cout<<"\nThe character is in lower case \n";
			}
			else if(upper==1)	//narrow down to upper case beyoned F.
			{
				cout<<"\nThe character is in upper case \n";
			}
		}
	}
	
}
bool isalpha(char ch)
{
	if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
		return 1;
	else
		return 0;
}
bool isdigit(char ch)
{
	if(ch>='0' && ch<='9')
		return 1;		//returning true or false according to function definition in assignment.
	else
		return 0;
}
bool isalnum(char ch)
{
	if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')||(ch>='0' && ch<='9'))
		return 1;
	else
		return 0;
}
bool isxdigit(char ch)
{
	if((ch>='A' && ch<='F')||(ch>='a' && ch<='f')||(ch>='0' && ch<='9'))
		return 1;
	else
		return 0;
}
bool islower(char ch)
{
	if(ch>='a' && ch<='z')
		return 1;
	else
		return 0;
}
bool isupper(char ch)
{
	if(ch>='A' && ch<='Z')
		return 1;
	else
		return 0;
}
bool isspace(char ch)
{
	if(ch ==' ')
		return 1;
	else
		return 0;
}



	
