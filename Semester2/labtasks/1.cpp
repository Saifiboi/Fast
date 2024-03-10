#include<iostream>
using namespace std;
class player{
int Id;// > .
char name;// > .
int size;// > non static data members
int *Scores;// > .
float Average;// > .
static int count; //static data members
public:
player(int = 0, char = 'a', int s=2, int * = NULL);//Q. Default constructor with default parameters
// ....... Utility Functions ........
float calAverage(void);
void print() const;
//...... Setter or Mutator Functions ......
void setId(int);
void setName(char);
void setsize(int);
void setScores(int *);//interesting
// ..... Accessor or Getter functions .......
int getID(void) const;
char getName(void) const;
float getAverage(void);
int getsize(void) const;
//How to write getscores function ?????
static void showcount(); // static function

~player(); //Destructor
};
 void player::showcount()
{
//cout << name;
cout << "\nValue of count" << count;
}
//////////////////////// . . . define class functions out of line/scope . . . ////////
int player::count = 0;//assigning value to static data member of class
player::player(int i, char n, int s, int * arr)//Q. Default Constructor with default parameters
{
cout << "\nInside parameterized Constructor";
Id = i;
name = n;
size = s;
if (arr == NULL)
{

Scores = new int[size];
cout<<"Enter values of 2 player";
for (int i = 0; i < size; i++)
{
cin >> Scores[i];
}
}
else
{
Scores = new int[size];
cout << "Enter values of "<<size<< " students";
for (int i = 0; i < size; i++)
{
cin >> Scores[i];
}
}
player::calAverage();//calculating average in constructor
count++;
}
// ....... Utility Functions ........
float player::calAverage(void)
{
cout << count;
cout << "\nInside CalculateAverage() Function\n";
int s = 0;
for (int i = 0; i < size; i++)
{
s += Scores[i];
}
Average = float(s) / size;
return Average;
}
void player::print() const
{
cout << "\n................................";
cout << "\nInside print() function";
cout << "\nName of player is : " << name;
cout << "\nID of player is : " << Id;
cout << "\nTotal matches played are : " << size;
cout << "\nScores of player is: ";
for (int i = 0; i < size; i++)
{
cout << Scores[i] << " ";
}
cout << endl;
cout << "\nAverage of player is: " << Average;
cout << "\n................................\n";
}
//...... Setter or Mutator Functions ......
void player::setId(int i)

{
cout << "\nInside setId() function";
Id = i;
}
void player::setName(char c)
{
cout << "\nInside setName() function";
name = c;
}
void player::setsize(int s)
{
cout << "\nInside setsize() function";
size = s;
}
void player::setScores(int *arr)
{
cout << "\nInside setScores() function";
delete[] Scores;
Scores = new int[size];
for (int i = 0; i < size; i++)
{
Scores[i] = arr[i];
}
}
// ..... Accessor or Getter functions .......
int player::getID(void) const
{
cout << "\nInside getId() function\n";
return Id;
}
char player::getName(void) const
{
cout << "\nInside getName() function\n";
return name;
}
float player::getAverage()///an interesting fact inside function
{
cout << "\nInside getAverage() function\n";
player::calAverage();
return Average;
}
int player::getsize(void) const
{
return size;
}
//Definition of Destructor
player::~player() //Destructor
{
cout << "\nInside Destructor that does nothing\n";

delete[] Scores;
count--;
}

int main()
{
// write your implementsation code here
player::showcount();
player p1;
p1.showcount();
}
