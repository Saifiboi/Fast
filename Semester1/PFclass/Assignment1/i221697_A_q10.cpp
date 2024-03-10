/* Name :Saif ur rehman    Student ID: i221697
	Assignment#1*/
# include <iostream>

# include <iomanip>

# include <string>

using namespace std;

int main()
   {
   	int  no_dmand , no_spot , no_rsrvd ;						//Declaring Variables to store no of machines as input.
   	
   	int  price_dmnd , price_rsrvd , price_spot , total ;		//Declaring Variables for storing Monthly Cost of Machines After Calculating.
   	
   	cout << endl << setw (55) << "AWS Cloud Cost Calculator" ;			//Organizing Output.
   	
   	cout << endl << setw (55) << "*************************" ;
   	 
   	 
   	cout << "\nHow many On-demand machines you own:" << setw (6) << " " ;		//Taking Number of Machines (of Different Types) as Input.
   	
   	cin >> no_dmand ;
   	
   	cout << "How many Reserved machines you own:" << setw (7) << " " ;
   	
   	cin >> no_rsrvd ;
   	
   	cout << "How many Spot machines your own:" << setw (10) << " " ;
   	
   	cin >> no_spot ;
   	
   	
   	price_dmnd = no_dmand * 3 * 24 * 30 ;						//Calculating Monthly Cost for(each type of) machine.
   	
   	price_rsrvd = no_rsrvd * 2 * 24 * 30 ;
   	
   	price_spot = no_spot * 0.5 * 24 * 30 ;
   	
   	
   	cout << "\nCost of On-demand instances:" << setw (17) << "$" << price_dmnd ;		//Displaying Cost in Formatted output.
   
   	cout << "\nCost of Reserved instances:" << setw (18) << "$" << price_rsrvd ;
 
   	cout << "\nCost of Spot instances:" << setw (22) << "$" << price_spot ;
   	
   	
   	total = price_dmnd + price_rsrvd + price_spot ;						//Calculating total monthly Cost.
   	
   	cout << "\n\nTotal Monthly Cost of AWS Machines:" << setw (9) << "$" << total << endl ;		//Displaying total monthly Cost
   }
   
