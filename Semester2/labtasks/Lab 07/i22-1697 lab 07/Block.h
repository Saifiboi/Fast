/*
 * Block.h
 *
 *  Created on: Mar 8, 2023
 *      Author: safi
 */

#ifndef BLOCK_H_
#define BLOCK_H_
#include <string>
#include<iostream>
using namespace std;
class Block {
	int length;
	int width;
	int height;
	int volume;
	int sarea;
	string material;
	string colors;

public:
	static int Blockcount;
	Block();
	Block(int ,int ,int ,string,string ="Card");
	const string& getColors() const;
	void setColors(const string &colors);
	int getHeight() const;
	void setHeight(int height);
	int getLength() const;
	int getWidth() const;
	void setWidth(int width);
	int getVolume();
	int getSurfaceArea();
	void print () ;
};
int Block::Blockcount=0;
#endif /* BLOCK_H_ */
