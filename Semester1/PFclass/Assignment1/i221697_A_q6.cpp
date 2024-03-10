/* Name :Saif ur rehman    Student ID: i221697
	Assignment#1*/
#include <iostream>

#include<iomanip>

using namespace std;

int main()
   {
   	float price1 ,price2 ,price3 ,price4 ,price5 ,totalprice ;		//Declaring Variables for Taking prices as input.
   	
   	cout << "\nPrice of item 1 = $" ;					//Taking Prices of items as Input.
   	
   	cin >> price1 ;
   	
   	cout << "\nPrice of item 2 = $" ;
   	
   	cin >> price2;
   	
   	cout << "\nPrice of item 3 = $" ;
   	
   	cin >> price3 ;
   	
   	cout << "\nPrice of item 4 = $" ;
   	
   	cin >> price4 ;
   	
   	cout << "\nPrice of item 5 = $" ;
   	
   	cin >> price5 ;
   	
   	totalprice = price1 + price2 + price3 + price4 + price5 ;		//Calculating Total of All Prices.
   	
   	cout << endl << setw (100) << setfill ('*') << " " << endl;		//Arranging and Displaying Output in Tabular Form.
   	
   	cout << "ITEM" << setw (20) << setfill (' ') << right << "PRICE" << setw (20) << right << "SALESTAX(17%)" << setw(20) << right << "TOTAL PRICE" << endl;
   	
   	
   	cout << 1    << setw (23) << right << setprecision (2) << fixed << price1      << setw (20) << right << setprecision (3) << fixed << 0.17 * price1      << setw (19) << right << setprecision (2)
   	 
   	<< fixed <<  price1 + ( 0.17 * price1 ) << endl << endl ;
   	
   	
   	
   	cout << 2    << setw (23) << right << setprecision (2) << fixed << price2      << setw (20) << right << setprecision (3) << fixed << 0.17 * price2      << setw (19) << right << setprecision (2)
   	 
   	<< fixed << price2 + ( 0.17 * price2 ) << endl << endl ;
   	
   	
   	
   	cout << 3    << setw (23) << right << setprecision (2) << fixed << price3      << setw (20) << right << setprecision (3) << fixed << 0.17 * price3      << setw (19) << right << setprecision (2)
   	 
   	<< fixed << price3 + ( 0.17 * price3 ) << endl << endl ;
   	
   	
   	
   	cout << 4    << setw (23) << right << setprecision (2) << fixed <<  price4     << setw (20) << right << setprecision (3) << fixed << 0.17 * price4      << setw (19) << right << setprecision (2) 
   	
   	<< fixed << price4 + ( 0.17 * price4 ) << endl << endl ;
   	
   	
   	
   	cout << 5    << setw (23) << right << setprecision (2) << fixed << price5      << setw (20) << right << setprecision (3) << fixed << 0.17 * price5      << setw (19) << right << setprecision (2) 
   	
   	<< fixed << price5 + ( 0.17 * price5 ) << endl << endl ;
   	
   	
   	cout << "Total"    << setw (19) << right << setprecision (2) << fixed << totalprice      << setw (19) << right << setprecision (3) << fixed << 0.17 * totalprice        << setw (19) << right <<
   	
   	setprecision  (2) << totalprice + ( 0.17 * totalprice ) << endl ;
   } 
   	
