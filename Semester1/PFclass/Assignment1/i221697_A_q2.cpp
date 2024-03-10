/* Name :Saif ur rehman    Student ID: i221697
	Assignment#1*/
#include <iostream>

#include<iomanip>

using namespace std;

int main()
   {
   	int  x, h, k, b;			//declaration of input variables.
   	
   	int y, z, a, c;				//declaration of output variables.

	float  g;
	  	
   	cout << "\nEnter the value of x :" ;
   	
   	cin >> x;
   	
   	cout << "\nEnter the value of h :" ;		//taking input for input variables.
   	
   	cin >> h;
   	
   	cout << "\nEnter the value of k :" ;
   	
   	cin >> k;
   	
   	cout << "\nEnter the value of b :" ;
   	
   	cin >> b;
   	
   							//Calculating Output and storing in Variables.
   	a = 12 * x;
   	
   	y = x * x * x * x ;
   	
   	z = 5 * x  +  14 * y  +  6 * k;
   	
   	g = (h + 12) / (4.0 * k);
   	
   	c =(a * a * a) / ( (b * b) * (k * k * k * k) );			//typecasting will be involved in some cases which is out of scope.
   	
   												//Displaying Output.
   	cout << "\nThe value of y ( i.e x * x * x * x ) is : " << setw(34) << y << endl;
   	
   	cout << "\nThe value of z (i.e 5 * x  +  14 * y  +  6 * K) is : " << setw(27) <<  z << endl;
   	
   	cout << "\nThe value of a is (i.e 12 * x ) : " << setw(43) << a << endl;
   	
   	cout << "\nThe value of c [i.e (a * a * a) / ( (b * b) * (k * k * k * k) )] is : " << setw(7) << c << endl;
   	
   	cout << "\nThe value of g [i.e (h + 12) / (4.0 * k)] is : " << setw(35) << g << endl;
   }
