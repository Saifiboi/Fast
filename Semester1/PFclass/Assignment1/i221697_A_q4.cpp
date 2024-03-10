/* Name :Saif ur rehman    Student ID: i221697
	Assignment#1*/
#include <iostream>

#include<iomanip>

using namespace std;

int main()
   {
   	char ch1, ch2 ,ch3 , ch4 , ch5 , ch6 , ch7 , ch8 ;		//Declaring Variables for storing Characters of a Word.
   	
   	
   	cout << "\n Enter the word with 8 characters : " ;		
   	
   	cin.get(ch1);							//Taking the Word as Input(lower Case).
   	
   	cin.get(ch2);
   	
   	cin.get(ch3);
   	
   	cin.get(ch4);
   	
   	cin.get(ch5);
   	
   	cin.get(ch6);
   	
   	cin.get(ch7);
   	
   	cin.get(ch8);
   	
   	
   	ch1 = ch1 - 32;							//Changing the Case of Characters of Word Using ASCII Code.
   	
   	ch2 = ch2 - 32;
   	
   	ch3 = ch3 - 32;
   	
   	ch4 = ch4 - 32;
   	
   	ch5 = ch5 - 32;
   	
   	ch6 = ch6 - 32;
   	
   	ch7 = ch7 - 32;
   	
   	ch8 = ch8 - 32;
   	cout << "Your entered word in capital case is : "<< ch1 <<ch2 << ch3 <<ch4 << ch5 << ch6 << ch7 << ch8 << endl;		//Displaying Word in Upper Case.
   }	
