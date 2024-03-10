#include<iostream>
using namespace std;
int power(int a,int b);
int chtoi(char ch);
char itoch(int dig);
int main()
{
	char ch1[20],ch2[20];
	bool check=0;
	cout<<"\nEnter number 1:";
	cin>>ch1;
	cout<<"\nEnter number 2:";
	cin>>ch2;
	int num1=0,num2=0,length=0;
	int i=0;
	while(ch1[i]!='\0')
	{
		if(ch1[i]<'0' || ch1[i]>'9')
		{
			cout<<"Invalid Input first number!cant convert:\n";
			return 3;
		}
		length++;
		i++;
	}
	
	for(i=0;i<=length-1;i++)
	{
		num1+=chtoi(ch1[i])*power(10,length-(i+1));
	}
	i=0;
	length=0;
	while(ch2[i]!='\0')
	{
		if(ch2[i]<'0' || ch2[i]>'9')
		{
			cout<<"Invalid Input second number!cant convert:\n";
			return 4;
		}
		length++;
		i++;
	}
	
	for(i=0;i<=length-1;i++)
	{
		num2+=chtoi(ch2[i])*power(10,length-(i+1));
	}
	
	int total=0,backup;
	total=num1+num2;
	char result[20];
	backup=total;
	int dig=0;
	i=0;
	while(backup>0)
	{
		dig=backup%10;
		backup=backup/10;
		result[i]=itoch(dig);
		i++;
	}
	result[i]='\0';
	
	char extra[20];
	i=0;
	length=0;
	while(result[i]!='\0')
	{
		length++;
		i++;
	}
	int j=0;
	for(i=0,j=length-1;j>=0;j--,i++)
	{
		extra[i]=result[j];
	}
	extra[i]='\0';
	cout<<"\nThe Result:"<<extra<<endl;
	
}
int power(int a,int b)
{
	int prod=1;
	for(int i=1;i<=b;i++)
	{
		prod*=a;
	}
	return prod;
}
int chtoi(char ch)
{
	switch(ch)
	{
		case '0':
			return 0;
			break;
		case '1':
			return 1;
			break;
		case '2':
			return 2;
			break;
		case '3':
			return 3;
			break;
		case '4':
			return 4;
			break;
		case '5':
			return 5;
			break;
		case '6':
			return 6;
			break;
		case '7':
			return 7;
			break;
		case '8':
			return 8;
			break;
		case '9':
			return 9;
			break;
			
	}
}
char itoch(int dig)
{
	switch(dig)
	{
		case 0:
			return '0';
			break;
		case 1:
			return '1';
			break;
		case 2:
			return '2';
			break;
		case 3:
			return '3';
			break;
		case 4:
			return '4';
			break;
		case 5:
			return '5';
			break;
		case 6:
			return '6';
			break;
		case 7:
			return '7';
			break;
		case 8:
			return '8';
			break;
		case 9:
			return '9';
			break;
	}	
}
