#include<iostream>
using namespace std;
int main()
{
	float price,ernd_amnt,tax;
	int quantity;
	cout<<"\nEnter price of chocolate :";
	cin>>price;
	cout<<"\nEnter the quantity:";
	cin>>quantity;
	ernd_amnt=price*quantity;
	cout<<"\nthe earned amount is:"<<ernd_amnt;
	tax=0.1*ernd_amnt;
	ernd_amnt=ernd_amnt-tax;
	cout<<"\nThe Earned amount after deduction of tax is:"<<ernd_amnt<<endl;
}
