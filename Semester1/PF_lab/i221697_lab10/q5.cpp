#include<iostream>
using namespace std;
int main()
{
	float sum=0;
	int choice_type=0, choice_toppings,j=0;
	do
		{
		int choice_flavor=0;
		cout<<"Enter Your choice 1 for cup 2 for cone 3 for exit:";
		cin>>choice_type;
		if(choice_type==1||choice_type==2)
		{	if(choice_type==1)
				sum+=20;
			else
				sum+=10;
		
			cout<<"\nEnter your choice for flavour\n1.chocolate\n2.strawberry\n3.mint chocolate\n4.vanilla\n5.coolie n cream\n6.mango\n \n 0 for exit default is chocolate for 1st time:";
			do
			{
				cin>>choice_flavor;
				switch(choice_flavor)
				{
					case 0:
						break;
					case 1:
					case 4:
						j=1;
						sum+=40;
						cout<<"\nEnter again! 0 to exit";
						break;
					case 2:
					case 6:
						j=1;
						sum+=50;
						cout<<"\nEnter again! 0 to exit";
						break;
					case 3:
					case 5:
						j=1;
						sum+=60;
						cout<<"\nEnter again! 0 to exit";
						break;
					
					default:
						cout<<"\nInvalid Input!\ntry again";
						continue;
				}
			
			}while(choice_flavor!=0);
			if(j==0)
				sum+=40;
			
			cout<<"\nEnter Your toppings\n1.sprinkles\n2.chocolate chips\n3.chocolate syrup\n4.nuts\n5.M&Ms\n 0 for exit but at least once:";
						do
						{
							
							cin>>choice_toppings;
							switch(choice_toppings)
							{
								case 0:
									break;
								case 1:
									sum+=10;
									cout<<"\nEnter again! 0 to exit";
									break;
								case 2:
								case 3:
									sum+=15;
									cout<<"\nEnter again! 0 to exit";
									break;
								case 4:
								case 5:
									sum+=20;
									cout<<"\nEnter again! 0 to exit";
									break;
								
								default:
									cout<<"\nInvalid Input!\ntry again";
									continue;
							}
						}while(choice_toppings!=0);
		}
		else if (choice_type<1 || choice_type>3)
		{
			cout<<"Invalid input!:choose again\n";
			continue;
		}
		else
			break;
	}while(choice_type!=0);
	cout<<"\nThe total bill is:"<<sum;
	cout<<"\nProgram exited!\n";
}
