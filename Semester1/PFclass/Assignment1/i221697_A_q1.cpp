/* Name :Saif ur rehman    Student ID: i221697
	Assignment#1*/
#include <iostream>

using namespace std;

int main()
   {
   	int  eggsNum;	//variable for input of number of Eggs.
   	
 	int  pack_6, pack_12 ,pack_18 ,pack_24 , pack_30;		//Variables for holding no of Packs(for each category).
 	
   	cout << "Enter the number of Eggs :";
   	
   	cin >> eggsNum;							//Taking number of Eggs as Input.
   	
   	
   	pack_30 = eggsNum / 30;						//Calculating number of Packs (for each category).
   	
   	eggsNum = eggsNum % 30;
   	
   	pack_24 = eggsNum / 24;
   	
   	eggsNum = eggsNum % 24;
   	
   	pack_18 = eggsNum / 18;
   	
   	eggsNum = eggsNum % 18;
   	
   	pack_12 = eggsNum / 12;
   	
   	eggsNum = eggsNum % 12;
   	
   	pack_6 =  eggsNum /  6;
   	
   	eggsNum = eggsNum %  6;
   	
   	
   	cout << "\nPack of 30 Eggs are :" << pack_30;			//Displaying Number of Packs (for each Category).
   	
   	cout << "\nPack of 24 Eggs are :" << pack_24;
   	
   	cout << "\nPack of 18 Eggs are :" << pack_18;
   	
   	cout << "\nPack of 12 Eggs are :" << pack_12;
   	
   	cout << "\nPack of 6 Eggs are : " << pack_6 ;
   	
   	cout << "\nRemaining number of  Eggs are :" << eggsNum<<endl;		//Displaying Remaining Number of Eggs.
   }
