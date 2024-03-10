/* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>

using namespace std;

int main()
  {
  	int plyr1_choice,plyr2_choice;
  	cout<<"\nRock,Paper,Scissors Game!\n";
  	cout<<"Player 1 = ";
  	cin>>plyr1_choice;
  	cout<<"Player 2 = ";
  	cin>>plyr2_choice;
  	
  	
  	
  	switch(plyr1_choice)
  		{
  			case 1:		//Rock.
  							
  				switch(plyr2_choice)
  					{
  						case 2:			//paper.
  							
  							cout<<"\n Player 2 wins!\n";
  							break;
  							
  						case 3:			//scissor.
  						
  							cout<<"\n Player 1 wins!\n";
  							break;
  							
  							
  						case 1:			//Rock.	
  						
  							cout<<"\nGame Draw!\n";
  							break;
  							
  							
  						default:
  							cout<<"\nInvalid choice by player 2\n";
  					}
  				break;
  				
  				
  				
  			case 2:		//Paper.
  				
  				switch(plyr2_choice)
  					{
  						case 1:			//Rock.
  						
  							cout<<"\n Player 1 wins!\n";
  							break;
  							
  							
  						case 3:			//scissors.
  						
  							cout<<"\n Player 2 wins!\n";
  							break;
  							
  						case 2:			//Paper.
  						
  							cout<<"\nGame Draw!\n";
  							break;
  							
  							
  						default:
  							cout<<"\nInvalid choice by player 2\n";
  					}
  				break;
  				
  				
			case 3:			//Scissors.
			
  				switch(plyr2_choice)
  					{
  						case 1:			//Rock.
  						
  							cout<<"\n Player 2 wins!\n";
  							break;
  							
  							
  						case 2:			//Paper.
  						
  							cout<<"\n Player 1 wins!\n";
  							break;
  							
  							
  						case 3:			//Scissors.
  							cout<<"\nGame Draw!\n";
  							break;
  							
  						default:
  							cout<<"\nInvalid choice by player 2\n";
  					}
  				break;
  				
  				
  				
  			default:
  				cout<<"\nInvalid choice !\n";
  		}
  }
  							
