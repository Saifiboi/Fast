/*
 * Name ::SAif Ur rehman
 * Roll Number::i221697
 * Assignment :: 2
 * Section :: CY-A
 * Question 7
 */
#include<iostream>
#include"Array.h"
using namespace std;
int main()
{
	int *arr=new int [5];
	for(int i=0;i<5;i++)
	{
		arr[i]=5-(i);
	}
	Array A1(arr,5);
//	A1.display();
//	Array A2=A1;
//	A2.display();
//	Array A3(5);
//	A3.display();
//	cout<<A1.getAt(4);
	A1.setAt(4, 13);
	A1.display();
//	cout<<A1.getAt(4);
//	Array A4=A1.subArr(2,3);
//	A4.display();
//	Array A4=A1.subArr(0);
//	A4.display();
//	int *p2=A1.subArrPointer(2, 2);
//	cout<<"The array::";
//	for(int i=0;i<2;i++)
//	{
//		cout<<p2[i]<<"\t";
//	}
//	cout<<endl;
//	delete []p2;
//	int *p2=A1.subArrPointer(2);
//	cout<<"The array::";
//	for(int i=0;i<A1.length()-2;i++)
//	{
//		cout<<p2[i]<<"\t";
//	}
//	cout<<endl;
//	delete []p2;
//	A1.push_back(5);
//	A1.display();
//	cout<<A1.pop_Back()<<endl;
//	A1.display();
//	cout<<A1.insert(2, 25);
//	A1.display();
//	cout<<A1.erase(2)<<endl;
//	A1.display();
//	cout<<A1.length();
//	A1.clear();
//	A1.display();
//	cout<<A1.value(4);
//	A1.assign(4, 5);
//	A1.display();
	Array A2;
//	A2.copy(A1);
//	A2.display();
	A2.copy(arr, 5);
//	cout<<A2.isEmpty()<<endl;
//	A2.clear();
//	cout<<A2.isEmpty();
//	A2.setAt(4, 3);
//	Array A3=A2.find(2);
//	A3.display();
//	cout<<A1.equal(A2);
	cout<<A1.sort()<<endl;
	A1.display();
	A1.reverse();
	A1.display();


	delete [] arr;
}
