/*
 * Block.cpp
 *
 *  Created on: Mar 8, 2023
 *      Author: safi
 */

#include "Block.h"

Block::Block() {
	Blockcount++;
	// TODO Auto-generated constructor stub

}

const string& Block::getColors() const {
	return colors;
}

void Block::setColors(const string &colors) {
	this->colors = colors;
}

int Block::getHeight() const {
	return height;
}

void Block::setHeight(int height) {
	this->height = height;
}

int Block::getLength() const {
	return length;
}

int Block::getWidth() const {
	return width;
}

void Block::setWidth(int width) {
	this->width = width;
}

Block::Block(int length,int width,int height,string colors,string name):material(name)
{
	Blockcount++;
	this->length=length;
	this->width=width;
	this->height=height;
	this->colors=colors;
	getVolume();
	getSurfaceArea();

}
int Block::getVolume()
{
	volume=length*width*height;
	return volume;
}
int Block::getSurfaceArea()
{
	sarea=2*(length*width + length*height + width*height);
	return sarea;
}
void Block::print ()
{
	cout<<"\nLength:"<<length;
	cout<<"\nWidth:"<<width;
	cout<<"\nHeight:"<<height;
	cout<<"\nMaterial:"<<material;
	cout<<"\nColor:"<<colors;
	getVolume();
	cout<<"\nVolume:"<<volume;
	getSurfaceArea();
	cout<<"\nSurface Area:"<<sarea;
}


