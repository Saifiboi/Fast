/* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>

using namespace std;

int main()
  {
  	int num1,num2;
  	cout<<"\nColour Matching Checker!\n";
  	cout<<"\nEnter two numbers:";
  	cin>>num1>>num2;
  	
  	switch(num1)
  		{
  		case 1:
  		case 6:
  		case 7:
  		case 12:
  		case 17:
  		case 20:		//checking for green colour.
  		case 28:
  		case 33:
  			switch(num2)
  				{
  		 			case 1:
			  		case 6:
			  		case 7:
			  		case 12:
			  		case 17:
			  		case 20:
			  		case 28:
			  		case 33:
			  			cout<<"\nNumbers have Same colour.\n";
			  			break;
			  		default :
			  			cout<<"\nNumbers doesnot have same colour in the Grid.\n";
			  	}
			  break;
		case 2:
		case 11:
		case 13:
		case 18:		//checking for red colour.
		case 19:
		case 24:
		case 29:
		case 32:
			switch(num2)
				{	
					case 2:
					case 11:
					case 13:
					case 18:
					case 19:
					case 24:
					case 29:
					case 32:
					 	cout<<"\nNumbers have Same colour.\n";
			  			break;
			  		default :
			  			cout<<"\nNumbers doesnot have same colour in the Grid.\n";
			  	}
			  break;
		case 3:
		case 10:
		case 14:
		case 23:
		case 25:		//checking for blue colour.
		case 30:
		case 31:
		case 36:
		        switch(num2)
				{
					case 3:
					case 10:
					case 14:
					case 23:
					case 25:
					case 30:
					case 31:
					case 36:
					 	cout<<"\nNumbers have Same colour.\n";
			  			break;
			  		default :
			  			cout<<"\nNumbers doesnot have same colour in the Grid.\n";
			  	}
			  break;
		case 4:
		case 9:
		case 15:
		case 22:			//checking for orange colour.
		case 26:
		case 35:
			switch(num2)
				{
					case 4:
					case 9:
					case 15:
					case 22:
					case 26:
					case 35:
					 	cout<<"\nNumbers have Same colour.\n";
			  			break;
			  		default :
			  			cout<<"\nNumbers doesnot have same colour in the Grid.\n";
			  	}
			  break;
		case 5:
		case 8:
		case 16:
		case 21:			//checking for grey colour.
		case 27:			
		case 34:
			switch(num2)
				{
					case 5:
					case 8:
					case 16:
					case 21:
					case 27:
					case 34:
					 	cout<<"\nNumbers have Same colour.\n";
			  			break;
			  		default :
			  			cout<<"\nNumbers doesnot have same colour in the Grid.\n";
			  	}
			  	break;
		default :
			cout<<"\nNumber 1 is out of Grid!\n";
		}
					
	}			
						  		
  	
