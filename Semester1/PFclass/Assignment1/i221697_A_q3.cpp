/* Name :Saif ur rehman    Student ID: i221697
	Assignment#1*/
#include <iostream>

#include<iomanip>

using namespace std;

int main()
   {
   	int num, dig1;			//Declaring Required Variables.
   	
   	cout << "\n Enter the  5-digit number : " ;
   	
   	cin >> num;			//Taking a 5 Digit number from input.		
   	
   	
   	dig1 = num % 10;		//Reversing Last Digit.
   	
   	num = num / 10;
   	
   	cout << "\n The modified number is : " << dig1 / 2;
   	
   	dig1 = num % 10;		//Reversing 4rth Digit Displaying According to instructions.
   	
   	num = num / 10;
   	
   	cout << dig1 / 2;
   	
   	dig1 = num % 10;		//Reversing 3rd Digit Displaying According to instructions.
   	
   	num = num / 10;
   	
   	cout << dig1 / 2;
   	
   	dig1 = num % 10;		//Reversing 2nd Digit Displaying According to instructions.
   	
   	num = num / 10;
   	
   	cout << dig1 / 2;
   	
   	dig1 = num % 10;		//Reversing 1st Digit and Displaying According to instructions.
   	
   	num = num / 10;
   	
   	cout << dig1 / 2 << endl;
   }
   	
   	 
   	
   	
   	
   	
