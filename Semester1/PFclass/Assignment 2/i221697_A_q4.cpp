/* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>

using namespace std;

int main()
  {
  	int nrml_calories;
  	float fats,fat_calories,prcntge;
  	
  	cout<<"\n Caleroies Calculator!\n";
  	cout<<"\nEnter the number of calories:";
  	cin>>nrml_calories;
  	
  	cout<<"\nEnter the Grams of Fats:";
  	cin>>fats;
  	
  	fat_calories = fats*9;			//calculating Fat calories.
  	
  	prcntge=(fat_calories/nrml_calories)*100;	//calculating Percentage of Fat calories from total calories.
  	
  	cout<<"\n Percentage of calories come from fats are :"<<prcntge<<endl;
  	if (prcntge<30)
  		{
  			cout<<"\nFood is low in Fats.\n";
  		}
  }
