/*
 * TextBook.h
 *
 *  Created on: Apr 5, 2023
 *      Author: safi
 */

#ifndef TEXTBOOK_H_
#define TEXTBOOK_H_
#include<string>
using namespace std;
class TextBook {
	string title;
	string author;
	int book_id;
public:
	TextBook();
	TextBook(string title,string author,int book);
	void setBook(string title,string author,int book);
	void Display();
	virtual ~TextBook();
};

#endif /* TEXTBOOK_H_ */
