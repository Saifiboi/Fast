#include<iostream>
using namespace std;
int main ()
{
	int units;
	float bill=0.0,tax=0.0;
	cout<<"\nEnter the number of units:";
	cin>>units;
	if(units>=0)
	{
		if (units<100)
			{	
				bill=9*units;
			}
		else if (units>100 && units<200)
			{	
				bill=11*units;
			}
		else if (units>200 && units<300)
			{	
				bill=9*units;
			}
		if (bill<750)
			{
				tax=5.0/100 *bill;
			}
		 else if (bill>750)
			{
				tax=7.0/100 *bill;
		
			}
		bill=bill+tax;
		cout<<"\nThe  totalbill is:"<<bill<<endl; 	
	}
	else
		cout<<"Invalid Input\n";
}
