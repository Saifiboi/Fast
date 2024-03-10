/*
 * IntegerList.cpp
 *
 *  Created on: Mar 15, 2023
 *      Author: safi
 */

#include "IntegerList.h"

IntegerList::IntegerList(int elements) {
	this->numElements=elements;
	this->list=new int[this->numElements];
	this->size=this->numElements;

}
IntegerList::IntegerList(IntegerList &copy)
{
	this->numElements=copy.numElements;
	this->list=new int [this->numElements];
	this->size=copy.size;
	for(int i=0;i<this->size;i++)
	{
		this->list[i]=copy.list[i];
	}
}
bool IntegerList::isValid(int subs){
	if(subs<this->size &&subs>=0)
	{
		return true;
	}
	return false;
}
int IntegerList::getElement(int subs)
{
	bool res=this->isValid(subs);
	if(res==1)
	{
		return this->list[subs];
	}
	else
	{
		exit(EXIT_FAILURE);
	}
}
void IntegerList::setElement(int subs, int val)
{
	bool res=this->isValid(subs);
	if(res==1)
	{
		this->list[subs]=val;
	}
	else
	{
		exit(EXIT_FAILURE);
	}
}
IntegerList::~IntegerList() {
	delete []this->list;
}

