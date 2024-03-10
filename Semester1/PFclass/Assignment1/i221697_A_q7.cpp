/* Name :Saif ur rehman    Student ID: i221697
	Assignment#1*/
#include <iostream>

#include<iomanip>

using namespace std;

int main()
   {
   	int  number, sum = 0 ;						//declaring two variables.
   	
   	cout << "\nEnter first number :" ;				
   	
   	cin >> number ;							//taking 1st number.
   	
   	sum = sum + number ;						//updating sum according to 1st number.
   	
   	cout << "\nEnter second number :" ;				
   	
   	cin >> number ;							//taking 2nd number.
   	
   	sum = sum + number ;						//updating sum according to 2nd number.
   	
   	cout << "\nEnter third number :" ;
   	
   	cin >> number ;							//taking 3rd number.
   	
   	sum = sum + number ;						//updating sum according to 3rd number.
   	
   	cout << "\nEnter fourth number :" ;
   	
   	cin >> number ;							//taking 4rth number.
   	
   	sum = sum + number ;						//updating sum according to 4rth number.
   	
   	cout << "\nEnter fifth number :" ;
   	
   	cin >> number ;							//taking 5th number.
   	
   	sum = sum + number ;						//updating sum according to 5th number.
   	
   	cout << "\n the sum of numbers=" << sum << endl << "the average of numbers is =" << sum / 5.0 << endl ;		//displaying sum and average.
   }
