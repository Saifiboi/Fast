/* Name :Saif ur rehman    Student ID: i221697
	Assignment#1*/
#include <iostream>

#include<iomanip>

using namespace std;

int main()
   {
   	int N1, N2, N3, N4, N5, scale;						//DEclaring Variables for input.
   	
   	cout << "\nInput five numbers ranging(1 to 10) : " << endl ;
   	
   	cin >> N1 >> N2 >> N3 >> N4 >> N5;					//Taking Numbers as Input.
   	
   	cout << "\nEnter the scale :" ;
   	
   	cin >> scale;								//Taking Scale as Input.
   	
   	cout<<"BAR CHART OUTPUT \n";
   	
   	cout << setw ((N1*scale)+1) << setfill ('*') << " " <<			//Displaying Bar Chart according to the Given Input.
   	
   	endl << setw ((N2*scale)+1) << setfill ('*') << " " <<
   	
   	endl << setw ((N3*scale)+1) << setfill ('*') << " " <<
   	
   	endl << setw ((N4*scale)+1) << setfill ('*') << " " <<
   	
   	endl << setw ((N5*scale)+1) << setfill ('*') << " " <<endl;
   }
