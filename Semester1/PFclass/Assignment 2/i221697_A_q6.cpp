/* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>

using namespace std;

int main()
  {
  	char num_check;
  	int num1,num2,num3,num4,greater;
  	
  	cout<<"\nGreater Number Calculator!\n";
  	cout<<"\nEnter your choice (0 for \'3\'  numbers and \'1\' for 4 numbers) :";
  	cin>>num_check;
  	
  	if(num_check=='0')		//finding largest if choice is 3 numbers.
  		{
  			cout<<"\nEnter three numbers:";
  			cin>>num1>>num2>>num3;
  			
  			greater=((num1>num2)&&(num1>num3))?num1:((num2>num1)&&(num2>num3))?num2:((num3>num1)&&(num3>num2))?num3:0;  //finding largest by using ternary operator.
  			
  			(greater!=0)?cout<<"\n"<<greater<<" is greater among given three numbers.\n":cout<<"\nlargest input is given twice.\n";
  		}
  	else if (num_check=='1')		//finding largest in case of 4 numbers.
  		{
  			cout<<"\nEnter Four numbers:";
  			cin>>num1>>num2>>num3>>num4;
  			
  			greater= ((num1>num2)&&(num1>num3)&&(num1>num4)) ? num1: ((num2>num1)&&(num2>num3)&&(num2>num4)) ? num2 : ((num3>num1)&&(num3>num2)&&(num3>num4)) ? num3 : ((num4>num1)&&(num4>num2)&&(num4>num3)) ? num4 : 0 ;						//finding largest by using ternary operator.
  			
  			
  			(greater!=0)?cout<<"\n"<<greater<<" is greater among given four numbers.\n":cout<<"\nlargest input is given more than once.\n";
  	        }
  	 else 
  	 	cout<<"\nInvalid input!\n";
  }
