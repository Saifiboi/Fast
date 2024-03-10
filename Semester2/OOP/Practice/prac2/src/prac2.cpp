//============================================================================
// Name        : prac2.cpp
// Author      : Saif Ur rehman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class player
{
	int size;
int Id;
char name;
int *Scores; //scores for 5 matches
float Average;//Use to calculate average of scores
public:
//non parmeterized Constructor
player(int=2, char='j', int=0);//Parameterized Constructor
// ....... Utility Functions ........
float calAverage(void);
//...... Setter or Mutator Functions ......
void setId(int);
void setName(char);
// ..... Accessor or Getter functions .......
int getID(void);
char getName(void);
void print();
float getaverage();
void setscores();
~player(); //Destructor
};

player::player( int s, char n,int i)//Parameterized Constructor
{
cout << "\nInside parameterized Constructor";
Id = i;
name = n;
size =s;
Scores=new int [size];
cout<<"Enter Array:";
for (int i = 0; i < size; i++)
{
	cin>>Scores[i] ;
}
}
// ....... Utility Functions ........
float player::calAverage(void)
{
cout << "\nInside parameterized Constructor";
float s = 0;
for (int i = 0; i < size; i++)
{

s += Scores[i];
}
Average = s / size;
return Average;
}
//...... Setter or Mutator Functions ......
void player::setId(int i)
{
Id = i;
}
void player::setName(char c)
{
cout << "\nInside setName() function";
name = c;
}
// ..... Accessor or Getter functions .......
int player::getID()
{
cout << "\nInside getId() function\n";
return Id;
}
char player::getName(void)
{
return name;
}
void player::setscores()
{
	cout<<"Enter"<<size<<" Scores:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>Scores[i];
	}
}
float player::getaverage()
{
	return Average;
}
void player::print()
{
	cout<<"ID:"<<Id<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Score:";
	for(int i=0;i<size;i++)
	{
		cout<<Scores[i]<<"\t";
	}
	cout<<endl;
	cout<<"Average:"<<Average<<endl;
}

//Definition of Destructor
player::~player() //Destructor
{
cout << "\nInside Destructor that does nothing\n";
}
int main()//Driver or main() function
{
	player p1(3);
		player p2(4,'m',2);
		player p3(2,'n');
		p1.setId(1);
		p2.setId(2);
		p3.setId(3);
		p1.setName('m');
		p2.setName('n');
		p3.setName('o');
		p1.setscores();
		p2.setscores();
		p3.setscores();
		p1.calAverage();
		p2.calAverage();
		p3.calAverage();
//		cout<<p1.getID();
//		cout<<p2.getID();
//		cout<<p3.getID();
//		cout<<p1.getName();
//		cout<<p2.getName();
//		cout<<p3.getName();
//		cout<<p1.getaverage()<<endl;
//		cout<<p2.getaverage()<<endl;
//		cout<<p3.getaverage();
		p1.print();
		p2.print();
		p3.print();

}
