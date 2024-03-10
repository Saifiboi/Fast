/* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>

using namespace std;

int main()
  {
   const float PIE=3.14159;
   float parameter1,parameter2;		//variables that can take input in all cases.
   double area;
   int choice;
   cout<< "\n Area Calculator of geometric shapes!\n";						//variable for taking choice.
   cout<<"\nEnter your choice(1-4):";
   cin>>choice;
   
   
   switch (choice)
   	{
   		case 1:				//case for calculation of area of circle.
   			cout<<"\nEnter the radius of circle:";
   			cin>>parameter1;
   			if (parameter1>=0)
   				{
   					area=PIE*parameter1*parameter1;
   					cout<<"\nArea of circle = "<<area<<endl;
   				}
   			else
   				cout<<"Invalid Radius!radius can't be negative\n";
   			break;
   			
   			
   			
   		case 2:				//case for calcualtion of area of rectangle.
   					
   			cout<<"\nEnter the length and width of rectangle:";
   			cin>>parameter1>>parameter2;
   			
   			if (parameter1>=0 && parameter2>=0)
   				{
   					area=parameter1*parameter2;
   					cout<<"\nArea of Rectangle = "<<area<<endl;
   				}
   			else
   				cout<<"Invalid Length or width!They can't be negative\n";
   				
   			break;
   			
   			
   			
   		case 3:					//case for calculation of area of triangle.
   			
   			cout<<"\nEnter the Base and Height of triangle:";
   			cin>>parameter1>>parameter2;
   			if (parameter1>=0 && parameter2>=0)
   				{
   					area=0.5*parameter1*parameter1;
   					cout<<"\nArea of triangle = "<<area<<endl;
   				}
   			else
   				cout<<"Invalid base or height!They can't be negative\n";
   			break;
   			
   			
   			
   		case 4:			//case is set to end the program.
   		
   			cout<<"Program Ends!\n";
   			break;
   			
   		
   		
   		default:		//case to display error for invalid input.
   			cout<<"Invalid Choice!Not in Range\n";
   	}
   }
   			
