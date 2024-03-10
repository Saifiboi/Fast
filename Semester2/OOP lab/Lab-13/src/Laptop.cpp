/*
 * Laptop.cpp
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#include "Laptop.h"

Laptop::Laptop(string c,string ms,string w,string pro,string cn,float p):Computer(cn,p) {
	this->color=c;
	this->size=ms;
	this->weight=w;
	this->processor=pro;


}
void Laptop::show()
{
	cout<<"\nColor:"<<this->color<<endl;
	cout<<"\nsize:"<<this->size<<endl;
	cout<<"\nWeight:"<<this->weight<<endl;
	cout<<"\nprocessor type:"<<this->processor<<endl;
}
Laptop::~Laptop() {
	// TODO Auto-generated destructor stub
}
