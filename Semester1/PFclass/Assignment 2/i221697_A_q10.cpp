 /* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>

using namespace std;

int main()
  {
  	char category,num_alpha;
  	short int item, price = 150;
  	
  	cout<<"FOOD CATEGORIES:\n";
  	cout<<"1.Burgers=B\n2.French Fries=F\n3.Pizza=P\n4.sandwiches=S\n";		//displaying Food Categories.
  	
  	cout<<"Please Enter appropriate alphabet for your chozen category;";		//Taking user input from given categories.
  	cin>>category;
  	
  	switch(category)
  		{
  			case 'b':			//Burger category.
  			case 'B':	
  				cout<<"\nBurger 1 Rs 200=1\n";
  				cout<<"Burger 2 Rs 250=2\n";
  				cout<<"Burger 3 Rs 300=3\n";		//displaying Burger types.
  				cout<<"Burger 4 Rs 350=4\n";
  				
  				cout<<"Please enter relevant number for your food item:";
  				cin>>item;				//Taking Burger type as input from user.
  				
  				switch(item)
  					{
  						case 1:
  							
  						case 2:			//cases of valid burger type.
  							
  						case 3:
  							
  						case 4:
  							cout<<"•For 1 Burger = A\n• For 2 Burgers = B\n• For 4 Burgers = C\n\nPlease enter requird number of selected item:";
  							cin>>num_alpha;
  							switch (num_alpha)
  								{
  									case 'A':		//case for 1 items.
  									case 'a':
  										price=price+item*50;
  										cout<<"\nThe bill is : "<<price<<endl;
  										break;
  									
  									case 'B':		//case for 2 items
  									case 'b':
  										price=2*(price+item*50);
  										cout<<"\nThe bill is : "<<price<<endl;
  										break;
  										
  									case 'c':		//case of 4 items.
  									case 'C':
  										price=4*(price+item*50);
  										cout<<"\nThe bill is : "<<price<<endl;
  										break;
  									default:		//error for invalid number of items.
	  										cout<<"\nInvalid Input!\n";
	  								}
	  						break;
	  						
  						default :		//case for invalid burger type.
  							cout<<"\nInvalid input!";
  					}
  				break;
  				
  				
  				
  			case 'f':		//French fries category.
  			case 'F':
  				cout<<"\nfry 1 Rs 200=1\n";
  				cout<<"fry 2 Rs 250=2\n";
  				cout<<"fry 3 Rs 300=3\n";
  				cout<<"fry 4 Rs 350=4\n";
  				cout<<"Please enter relevant number for your food item:";
  				cin>>item;
  				switch(item)
  					{
  						case 1:
  							
  						case 2:
  							
  						case 3:
  							
  						case 4:
  							cout<<"•For 1 French fry = A\n• For 2 French fries = B\n• For 4 french Fries = C\n\nPlease enter requird number of selected item:";
  							cin>>num_alpha;
  							switch (num_alpha)
  								{
  									case 'A':
  									case 'a':
  										price=price+item*50;
  										cout<<"\nThe bill is : "<<price<<endl;
  										break;
  									
  									case 'B':
  									case 'b':
  										price=2*(price+item*50);
  										cout<<"\nThe bill is : "<<price<<endl;
  										break;
  									case 'c':
  									case 'C':
  										price=4*(price+item*50);
  										cout<<"\nThe bill is : "<<price<<endl;
  										break;
  									default:
	  										cout<<"\nInvalid Input!\n";
	  							}
	  						break;
  						default:
	  						cout<<"\nInvalid Input!\n";
	  								
  					}
  					break;
  					
  					
  					
  				case 'p':	//Pizza category.
  				case 'P':
  					cout<<"Pizza 1 Rs 200=1\n";
	  				cout<<"Pizza 2 Rs 250=2\n";
	  				cout<<"Pizza 3 Rs 300=3\n";
	  				cout<<"Pizza 4 Rs 350=4\n";
	  				cout<<"Please enter relevant number for your food item:";
	  				cin>>item;
	  				switch(item)
	  					{
	  						case 1:
	  							
	  						case 2:
	  							
	  						case 3:
	  							
	  						case 4:
	  							cout<<"•For 1 Pizza = A\n• For 2 Pizzas = B\n• For 4 Pizzas = C\n\nPlease enter requird number of selected item:";
	  							cin>>num_alpha;
	  							switch (num_alpha)
	  								{
	  									case 'A':
	  									case 'a':
	  										price=price+item*50;
	  										cout<<"\nThe bill is : "<<price<<endl;
	  										break;
	  									
	  									case 'B':
	  									case 'b':
	  										price=2*(price+item*50);
	  										cout<<"\nThe bill is : "<<price<<endl;
	  										break;
	  									case 'c':
	  									case 'C':
	  										price=4*(price+item*50);
	  										cout<<"\nThe bill is : "<<price<<endl;
	  										break;
	  									default:
	  										cout<<"\nInvalid Input!\n";
	  								}
	  							break;
	  						default :
	  							cout<<"\nInvalid input!\n";
	  					} 
	  				 break;
	  				 
	  				 
	  				 
	  			case 's':		//Sandwitch category.
	  			case 'S':
	  				cout<<"Sandwich 1 Rs 200=1\n";
	  				cout<<"Sandwich 2 Rs 250=2\n";
	  				cout<<"Sandwich 3 Rs 300=3\n";
	  				cout<<"Sandwich 4 Rs 350=4\n";
	  				cout<<"Please enter relevant number for your food item:";
	  				cin>>item;
	  				switch(item)
	  					{
	  						case 1:
	  							
	  						case 2:
	  							
	  						case 3:
	  							
	  						case 4:
	  							cout<<"•For 1 Sandwich = A\n• For 2 Sandwich = B\n• For 4 Sandwich = C\n\nPlease enter requird number of selected item:";
	  							cin>>num_alpha;
	  							switch (num_alpha)
	  								{
	  									case 'A':
	  									case 'a':
	  										price=price+item*50;
	  										cout<<"\nThe bill is : "<<price<<endl;
	  										break;
	  									
	  									case 'B':
	  									case 'b':
	  										price=2*(price+item*50);
	  										cout<<"\nThe bill is : "<<price<<endl;
	  										break;
	  									case 'c':
	  									case 'C':
	  										price=4*(price+item*50);
	  										cout<<"\nThe bill is : "<<price<<endl;
	  										break;
	  									default:
	  										cout<<"\nInvalid Input!\n";
	  								}
	  							break;
	  						default :
	  							cout<<"\nInvalid input!";
	  					}
	  				break	;
	  			default :		//error for invalid category.
	  				cout<<"\nInvalid input!\n";
	  			}
	 }			
	  						
