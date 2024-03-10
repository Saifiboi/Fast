/*
 * Array.cpp
 *
 *  Created on: Mar 18, 2023
 *      Author: safi
 */

#include "Array.h"
using namespace std;
Array::Array() {
	this->size=2;
	this->Arr=new int [this->size];
	for(int i=0;i<this->size;i++)
	{
		this->Arr[i]=0;
	}

}
Array::Array(int size)
{
	this->size=size;
	this->Arr=new int [this->size];
	cout<<"Enter "<<this->size<<" Elements of array:";
	for(int i=0;i<this->size;i++)
	{
		cin>>this->Arr[i];
	}
}
Array::Array(int *arr,int size)
{
	this->size=size;
	this->Arr=new int [this->size];
	for(int i=0;i<this->size;i++)
	{
		this->Arr[i]=arr[i];
	}
}
Array::Array(const Array &A1)
{
	this->size=A1.size;
	this->Arr=new int [this->size];
	for(int i=0;i<this->size;i++)
	{
		this->Arr[i]=A1.Arr[i];
	}
}
int Array::getAt(int i)
{
	return this->Arr[i];
}
void Array::setAt(int i,int val)
{
	this->Arr[i]=val;
}
Array Array::subArr(int pos,int siz)
{
	Array A1((&this->Arr[pos]),siz);
	return A1;

}
Array Array::subArr(int pos)
{
	Array A1;
	delete [] A1.Arr;
	A1.size=this->size-(pos);
	A1.Arr=new int [A1.size];
	for(int i=0;i<A1.size;i++)
	{
		A1.Arr[i]=this->Arr[pos+i];
	}
	return A1;
}
int *  Array::subArrPointer(int pos,int siz)
{
	int * p=new int [siz];
	for(int i=0;i<siz;i++)
	{
		p[i]=this->Arr[pos+i];
	}
	return p;
}
int * Array::subArrPointer(int pos)
{
	int *p;


	p=new int [this->size-(pos)];
	for(int i=0;i<this->size-(pos);i++)
	{
		p[i]=this->Arr[pos+i];
	}
	return p;
}
void Array::push_back(int a)
{
	int *p;
	p=new int [this->size];
	for(int i=0;i<this->size;i++)
	{
		p[i]=this->Arr[i];
	}
	delete [] this->Arr;
	this->size+=1;
	this->Arr=new int [this->size];
	int i=0;
	for(i=0;i<(this->size-1);i++)
	{
		this->Arr[i]=p[i];
	}
	this->Arr[i]=a;
}
int Array::pop_Back()
{
	int i;
	i=this->Arr[this->size-1];
	int *p;
	p=new int [this->size-1];
	for(int i=0;i<this->size-1;i++)
	{
		p[i]=this->Arr[i];
	}
	this->size-=1;
	delete [] this->Arr;
	this->Arr=new int [this->size];
	for(int i=0;i<this->size;i++)
	{
		this->Arr[i]=p[i];
	}
	delete []p;
	return i;
}
int Array::insert(int idx,int val)
{
	if(idx<0 || idx>=this->size)
	{
		return -1;
	}
	int i=0;
	int *p;
	p=new int [this->size];
	for(i=0;i<this->size;i++)
	{
		p[i]=this->Arr[i];
	}
	this->size+=1;
	delete [] this->Arr;
	this->Arr=new int [this->size];
	for(i=0;i<this->size;i++)
	{
		if(idx==i)
		{
			this->Arr[i]=val;
		}
		else if(idx>i)
		{
			this->Arr[i]=p[i];
		}
		else if(idx<size)
		{
			this->Arr[i]=p[i-1];
		}
	}
	delete [] p;
	return 1;
}
int Array::erase(int idx)
{
	if(idx<0 || idx>=this->size)
	{
		return -1;
	}
	int i=0;
	int *p;
	p=new int [this->size];
	for(i=0;i<this->size;i++)
	{
		p[i]=this->Arr[i];
	}
	this->size-=1;
	delete [] this->Arr;
	this->Arr=new int [this->size];
	for(i=0;i<this->size;i++)
	{
		if(idx>i)
		{
			this->Arr[i]=p[i];
		}
		else if(idx<=size)
		{
			this->Arr[i]=p[i+1];
		}
	}
	delete [] p;
	return 1;
}
int Array::length()
{
	return this->size;
}
void Array::clear()
{
	for(int i=0;i<this->size;i++)
	{
		this->Arr[i]=0;
	}
}
int Array::value(int idx)
{
	return this->Arr[idx];
}
void Array::assign(int idx,int val)
{
	this->Arr[idx]=val;
}
void Array::copy(const Array &Arr)
{
	delete [] this->Arr;
	this->size=Arr.size;
	this->Arr=new int [this->size];
	for(int i=0;i<this->size;i++)
	{
		this->Arr[i]=Arr.Arr[i];
	}
}
void Array::copy(int *arr,int siz)
{
	delete [] this->Arr;
	this->size=siz;
	this->Arr=new int [this->size];
	for(int i=0;i<this->size;i++)
	{
		this->Arr[i]=arr[i];
	}
}
void Array::display()
{
	cout<<"The Array::";
	for(int i=0;i<this->size;i++)
	{
		cout<<this->Arr[i]<<"\t";
	}
	cout<<endl;
}
bool Array::isEmpty()
{
	bool check=1;
	for(int i=0;i<this->size;i++)
	{
		if(this->Arr[i]!=0)
		{
			check=0;
			break;
		}
	}
	return check;
}
Array Array::find(int x)
{
	Array A1;
	for(int i=0;i<this->size;i++)
	{
		if(this->Arr[i]==x)
		{
			A1.push_back(i);
		}
	}

	A1.erase(1);
	A1.erase(0);
	return A1;
}
bool Array::equal(const Array & A1)
{
	if(A1.size!=this->size)
	{
		return 0;
	}
	else
	{
		bool check=1;
		for(int i=0;i<this->size;i++)
		{
			if(this->Arr[i]!=A1.Arr[i])
			{
				check=0;
				break;
			}
		}
		return check;
	}
}
int Array::sort()
{
	bool check=1;
	for(int i=0;i<this->size;i++)
	{
		if(i==0)
		{
			continue;
		}
		else
		{
			if(this->Arr[i]<this->Arr[i-1])
			{
				check=0;
				break;
			}
		}
	}
	if(check==1)
	{
		return check;
	}
	int temp=0;
	for(int i=0;i<this->size;i++)
	{
		for(int j=0;j<(this->size-1-i);j++)
		{
			if(this->Arr[j]>this->Arr[j+1])
			{
				temp=this->Arr[j+1];
				this->Arr[j+1]=this->Arr[j];
				this->Arr[j]=temp;
			}
		}
	}
	return 0;
}
void Array::reverse()
{
	int temp=0;
	for(int i=0;i<size/2;i++)
	{
		temp=this->Arr[i];
		this->Arr[i]=this->Arr[this->size-1-i];
		this->Arr[this->size-1-i]=temp;
	}
}
Array::~Array() {
	delete [] this->Arr;
}

