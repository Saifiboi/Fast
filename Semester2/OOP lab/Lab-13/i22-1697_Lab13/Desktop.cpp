/*
 * Desktop.cpp
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#include "Desktop.h"

Desktop::Desktop(string c,string ms,string pro,string cn,float p):Computer(cn,p) {
	this->color=c;
	this->monitor_size=ms;
	this->processor=pro;


}
void Desktop::show()
{
	cout<<"\nColor:"<<this->color<<endl;
	cout<<"\nmonitor size:"<<this->monitor_size<<endl;
	cout<<"\nprocessor type:"<<this->processor<<endl;
}
Desktop::~Desktop() {
	// TODO Auto-generated destructor stub
}

