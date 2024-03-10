/*
 * String.h
 *
 *  Created on: Mar 15, 2023
 *      Author: safi
 */

#ifndef STRING_H_
#define STRING_H_
#include<iostream>
#include<cmath>
class String {
	int size;
	char* Stringptr;
public:
	String();
	String(char *);
	String(const String &);
	String(int x);
	char getAt(int i);
	void setAt(int i,char c);
	String substr(int pos,int len);
	String substr(int pos);
	void append(char a);
	void append(String str);
	void append(char *str);
	int length();
	char* tocstring();
	void display();
	bool isEmpty();
	void copy(const String&);
	void copy(const char *);
	int find(char);
	bool equal(String);
	int stoi();
	virtual ~String();

};

#endif /* STRING_H_ */
