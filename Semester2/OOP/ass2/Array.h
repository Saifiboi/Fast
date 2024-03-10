/*
 * Array.h
 *
 *  Created on: Mar 18, 2023
 *      Author: safi
 */

#ifndef ARRAY_H_
#define ARRAY_H_
#include<iostream>
class Array {
	int size;
	int *Arr;
public:
	Array();
	Array(int size);
	Array(int *arr,int size);
	Array(const Array &);
	int getAt(int i);
	void setAt(int i,int val);
	Array subArr(int pos,int siz);
	Array subArr(int pos);
	int * subArrPointer(int pos,int siz);
	int * subArrPointer(int pos);
	void push_back(int a);
	int pop_Back();
	int insert(int idx,int val);
	int erase(int idx);
	int length();
	void clear();
	int value(int idx);
	void assign(int idx,int val);
	void copy(const Array & Arr);
	void copy(int * arr,int siz);
	void display();
	bool isEmpty();
	Array find(int x);
	bool equal(const Array &);
	int sort();
	void reverse();
	virtual ~Array();
};

#endif /* ARRAY_H_ */
