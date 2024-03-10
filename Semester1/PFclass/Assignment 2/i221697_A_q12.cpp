/* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>
#include<string>

using namespace std;

int main()
  {
  	 unsigned short instruction, op,right_op,left_op,temp;
  	 
  	cout<<"\nEnter a 16 bit instruction:";
  	cin>>instruction;		//Taking 16 bit instruction.
  	
  	right_op=instruction &63;	//Retreiving last 6 bits from 16 bits instruction (right operand).
  	
  	instruction>>=6;		//shifting bits towars right by 6 places.
  	
  	
  	
  	left_op=instruction&63;		//Retreiving last 6 bits from 16 bits instruction(left operand).		
  	
  	instruction>>=6;		//shifting bits towars right by 6 places
  	
  	
  	op=instruction&15;		//Retreiving last 4 bits from 16 bits instruction(operation).
  	
  	switch(op)
  		{
  			case 0:
  				cout<<"\nRight Operand = "<<right_op<<endl;
  				break;
  			case 1:
  				cout<<"\nLeft Operand = "<<left_op<<endl;
  				break;
  			case 2:
  			
  				cout<<"\nEnter input for Right Operand ranging(0_63)i.e 6 bits :";
  				cin>>temp;
  				if (temp>0&&temp<63)
  					
  						right_op=temp;	
  					
  				else
  					cout<<"\nInvalid Input!\n";
  				break;
  			case 3:
  			
  				cout<<"\nEnter input for left Operand ranging(0_63)i.e 6 bits :";
  				cin>>temp;
  				if (temp>0&&temp<63)
  					
  						left_op=temp;	
  					
  				else
  					cout<<"\nInvalid Input!\n";
  				break;
  			case 4:
  				cout<<left_op<<" + "<<right_op<<
  				" = "<<left_op+right_op<<endl;
  				break;
  			case 5:
  				if(right_op>left_op)
  					cout<<right_op<<" - "<<left_op<<" = "<<right_op-left_op<<endl;
  				else
  					cout<<left_op<<" - "<<right_op<<" = "<<left_op-right_op<<endl;
  				break;
  			case 6:
  					cout<<right_op<<" * "<<left_op<<" = "<<right_op*left_op<<endl;
  				break;
  			case 7:
  				if(right_op>left_op)
  					cout<<right_op<<" / "<<left_op<<" = "<<right_op/left_op<<endl;
  				else
  					cout<<left_op<<" / "<<right_op<<" = "<<left_op/right_op<<endl;
  				break;	
  			case 8:
  				if(right_op>left_op)
  					cout<<right_op<<" % "<<left_op<<" = "<<right_op%left_op<<endl;
  				else
  					cout<<left_op<<" % "<<right_op<<" = "<<left_op%right_op<<endl;
  				break;
  			case 9:
  				 cout<<left_op<<" | "<<right_op<<" = "<<(left_op|right_op)<<endl;
  				 break;
  			case 10:
  				 cout<<left_op<<" & "<<right_op<<" = "<<(left_op&right_op)<<endl;
  				 break;
  			case 11:
  				 cout<<left_op<<" ^ "<<right_op<<" = "<<(left_op^right_op)<<endl;
  				 break;
  			case 12:
  				temp=(~right_op);
  				cout<<" ~ "<<right_op<<" = "<<temp<<endl;
  				break;
  			case 13:
  				temp=(~left_op);
  				cout<<" ~ "<<left_op<<" = "<<temp<<endl;
  				break;
  			case 14:
  			  	cout<<left_op<<" << "<<right_op<<" = "<<(left_op<<right_op)<<endl;
  			  	break;
  			case 15:
  			  	cout<<left_op<<" >> "<<right_op<<" = "<<(left_op>>right_op)<<endl;
  			  	break;
  			 }
 }
  				
