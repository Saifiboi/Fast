/* Name :Saif ur rehman    Student ID: i221697
	Assignment#4*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int pie_calc();					//function prototype.
int main()

{
	int result;
	result=pie_calc();			//function calling.
	if(result==-1)		//displaying results according to function output.
	{
		cout<<"\nWe did not found the number of terms to get 3.14 value\n";
	}
	else
	{
		cout<<"\nIn "<<result<<" terms we have calculated 3.14\n";
	}
	return 0;
		
}
int pie_calc()
{
	bool check_val=0;
	int term=0,prev_term,j=1;
	float value=0.0;
	char usr_choice;
	
	cout<<"\nTerm#"<<setw(16)<<" "<<"Value of n\n";
	do{
	
			for(int i=1;i<=5;i++,j+=2)
			{
				term++;			//counting terms.
				if(term==1 ||term-2==prev_term)
				{
					prev_term=term;		//in odd terms.
					value+=4.00/j;
					if(value >= 3.14 && value<=3.15)
					{
						check_val=1;	//checking for pie value.
						break;
					}
					
				}
				else
				{
					value-=4.00/j;		//value update for even terms.
					if(value >= 3.14 && value<=3.15)
					{
						check_val=1;	//checking for pie value.
						break;
					}
				}
				cout<<endl<<term<<setw(20)<<" "<<setprecision(3)<<value<<endl;		//displaying tabular data.
				
			}
			if(check_val == 1)
			{
					break;
			}
			else		//taking input after 5 terms if pie not reached.
			{
				cin>>usr_choice;
				while((usr_choice!='c' && usr_choice!='C') && (usr_choice!='s' && usr_choice!='S'))		//input validation.
				{
					cout<<"Invalid input !Try again\n";
					cin>>usr_choice; 
				}
			}
		}while((usr_choice !='S') &&( usr_choice!='s'));
	if(check_val==1)		//returning to main.
		return term;
	else
		return -1;
	
}

