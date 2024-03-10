/* Name :Saif ur rehman    Student ID: i221697
	Assignment#1*/
# include <iostream>

# include <iomanip>

using namespace std;

int main()
   {
   	const  float   OMC_MARGIN = 3.68 , DEALRS_CMISION = 7.00 , IFEM = 4.76 ;		//Declaring Constants.
   	
   	float   ptrlium_lvy_prcnt , sals_tax , supply_cst , total ;				//Declaring variables for taking input.
   	
   	cout << "\nEnter MOSGAS PSO Weighted average cost of supply :" ;			//Taking Input.
   	
   	cin >> supply_cst ;
   	
   	cout << "\nPetrolium levy % : " ;
   	
   	cin >> ptrlium_lvy_prcnt ;
   	
   	cout << "\nSales Tax % :" ;
   	
   	cin >> sals_tax ;
   	
   	total = supply_cst + IFEM + OMC_MARGIN + DEALRS_CMISION + ( ptrlium_lvy_prcnt / 100 * supply_cst ) + ( sals_tax / 100 * supply_cst ) ; //Calculating Output.
   	
   	cout << "\nMax EX-Depot Sale Price = " << setprecision (2) << fixed << total << endl ;		//Displaying Output.
   }
   	
   	
