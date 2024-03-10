#include<iostream>
using namespace std;
int main()
{
	int bill=0;
	bool check1=0,check2=0;
	char usr_choice,scoop,topping;
	cout<<"\n\nWelcome to icecream shop\n\n";
	cout<<"1.Cup\n2.Cone\n3.exit.";
	do{
		cout<<"\nEnter your choice:";
		cin>>usr_choice;
		switch(usr_choice)
		{
			case '1':
				check1=1;
				bill+=20;
				cout<<"\n\nScoop Flavours:\n";
				cout<<"1.chocolate\n2.strawberry\n3.mint chocolate\n4.vanilla\n5.cookie n cream\n6.mango.\n";
					do{
						cout<<"Enter Flavour of scoop 0 to exit:";
						cin>>scoop;
						switch(scoop)
						{
							case '1':
							case '4':
								check2=1;
								bill+=40;
								break;
							case '2':
							case '6':
								check2=1;
								bill+=50;
								break;
							case '3':
							case '5':
								check2=1;
								bill+=60;
								break;
							case '0':
								break;
						}
					}while(scoop!='0');
					if(check2==1)
					{
						cout<<"\n\nTopping Menu:";
						cout<<"\n1.sprinkles\n2.chocolate chips\n3.chocolate syrup\n4.Nuts\n5.M&Ms.\n";
						do{
							cout<<"Enter Your Topping 0 to exit:";
							cin>>topping;
							switch(topping)
							{
								case '1':
									bill+=10;
									break;
								case '2':
								case '3':
									bill+=15;
									break;
								case '4':
								case '5':
									bill+=20;
									break;
								case '0':
									break;
							}
						}while(topping!='0');
					}
				
				break;
			case '2':
				check1=1;	
				cout<<"\n\nScoop Flavours:\n";
				cout<<"1.chocolate\n2.strawberry\n3.mint chocolate\n4.vanilla\n5.cookie n cream\n6.mango.\n";
				do{
					cout<<"Enter Flavour of scoop 0 to exit:";
					cin>>scoop;
					switch(scoop)
					{
						case '1':
						case '4':
							check2=1;
							bill+=40;
							break;
						case '2':
						case '6':
							check2=1;
							bill+=50;
							break;
						case '3':
						case '5':
							check2=1;
							bill+=60;
							break;
						case '0':
							break;
					}
				}while(scoop!='0');
				if(check2==1)
				{
					cout<<"\n\nTopping Menu:";
					cout<<"\n1.sprinkles\n2.chocolate chips\n3.chocolate syrup\n4.Nuts\n5.M&Ms.\n";
					do{
						cout<<"Enter Your Topping 0 to exit:";
						cin>>topping;
						switch(topping)
						{
							case '1':
								bill+=10;
								break;
							case '2':
							case '3':
								bill+=15;
								break;
							case '4':
							case '5':
								bill+=20;
								break;
							case '0':
								break;
						}
					}while(topping!='0');
				}		
				bill+=10;
				break;
			case '3':
				if(check1==1 && check2==1)
				{
					cout<<"\nThe Bill="<<bill<<endl;	
				}
				else
				{
					cout<<"\nnot choosen all components.\n";
				}
				cout<<"\nProgram exited successfully\n";
				break;
		}
	}while(usr_choice!='3');
	
		
	
	
}
