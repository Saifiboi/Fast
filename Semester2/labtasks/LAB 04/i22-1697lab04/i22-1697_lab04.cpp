//============================================================================
// Name        : LAB.cpp
// Author      : Saifi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cstring>
using namespace std;
int Factorial(int n)
{
	if((n==1)||(n==0))
		return 1;
	else
	return n*(Factorial(n-1));
}
int fibonacci(int x)
{
	if((x==0)||(x==1))
	{
		return x;
	}
	else
	{
		return fibonacci(x-1)+fibonacci(x-2);
	}
}
int findGCD(int num1,int num2)
{
	if(num1>num2)
	{
		if(num1%num2==0)
			return num2;
		else
			return findGCD(num2,num1%num2);
	}
	else
	{
		if(num2%num1==0)
			return num1;
		else
			return findGCD(num1,num2%num1);
	}

}
bool Elfish(char word[],char elf[],int index)
{
	if(index==2)
	{
			if( strchr(word,elf[index])!=0)
				return true;
			else
				return false;
	}
	else{
		if( strchr(word,elf[index])!=0)
			return  Elfish(word,elf,index+1);
		else
			return false ;
	}



}

bool LinearSearch(int array[],int find,int size)
{
	if(array[size-1]==find)
		return 1;
	else if(size==1)
		return 0;
	else
		return LinearSearch(array,find,--size);
}
//int main() {
////	//cout<<Factorial(5);
////	int n;
//////	cout<<"\nEnter the number of entries:";
//////	cin>>n;
//////	if(n<0)
//////		n=-n;
//////	for(int i=0;i<n;i++)
//////	{
//////		cout<<fib(i)<<"\t";
////	cout<<findGCD(15,10);
////
////
////	return 0;
////	cout<<elfish("tastefu","elf",0);
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	cout<<LinearSearch(arr,8,10);
//}

