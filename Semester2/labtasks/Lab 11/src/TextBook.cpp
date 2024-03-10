/*
 * TextBook.cpp
 *
 *  Created on: Apr 5, 2023
 *      Author: safi
 */

#include "TextBook.h"
#include<iostream>
using namespace std;
TextBook::TextBook() {
	this->title="\0";
	this->author="\0";
	this->book_id=0;

}
TextBook::TextBook(string title,string author,int book)
{
	this->title=title;
	this->author=author;
	this->book_id=book;
}
void TextBook::setBook(string title,string author,int book)
{
	this->title=title;
	this->author=author;
	this->book_id=book;
}
void TextBook::Display()
{
	cout<<"Title="<<this->title;
	cout<<"\nAuthor="<<this->author;
	cout<<"\nBook_id="<<this->book_id;

}
TextBook::~TextBook() {
	// TODO Auto-generated destructor stub
}

