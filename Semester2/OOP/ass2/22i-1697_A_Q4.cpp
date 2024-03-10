/*
 * Name ::SAif Ur rehman
 * Roll Number::i221697
 * Assignment :: 2
 * Section :: CY-A
 * Question 3
 */
#include<iostream>
using namespace std;
class Employee2 {
	char *name;
	float HourlyWage;
	float WorkedHours;
	float ExtraHours;
public:
	Employee2();
	void setName();
	void setHourlyWage();
	float wageCalculator();
	virtual ~Employee2();
};
Employee2::Employee2() {
	this->name=NULL;

}
void Employee2::setName()
{
	if(this->name!=NULL)
	{
		delete [] this->name;
	}
	this->name=new char[50];
	cout<<"\nPlease enter employee's name then press Enter:";
	cin.get(this->name,50);
	cin.ignore();
}
void  Employee2::setHourlyWage()
{
	cout<<"Please enter hourly wage then press Enter :";
	cin>>this->HourlyWage;
}
float Employee2::wageCalculator()
{
	float sum=0;
	cout<<"\nWELCOME TO WAGECALCULATOR  PORTAL:::\n";
	cout<<"Please enter hours worked then press Enter:";
	cin>>this->WorkedHours;
	cout<<"\n\n\n";
	cout<<"Paycheck for employee "<<this->name;
	cout<<"\n\n";
	cout<<"Hours worked:"<<this->WorkedHours;
	cout<<"\n Hourly wage:"<<this->HourlyWage;
	if(this->WorkedHours>40 )
	{
		cout<<"\nOvertime hours:"<<this->WorkedHours-40;
		cout<<"\nOvertime hourly wage:"<<1.5*this->HourlyWage;
		sum+=(40)*(this->HourlyWage);
		sum+=(this->WorkedHours-40)*(1.5*this->HourlyWage);
	}
	else
	{
		sum+=(this->WorkedHours)*(this->HourlyWage);
	}
	cout<<"\n\n";
	cout<<"Total payment:"<<sum<<endl;
	return sum;
}
Employee2::~Employee2() {
	delete []this->name;
}
int main()
{
	Employee2 e1;
	e1.setName();
	e1.setHourlyWage();
	e1.wageCalculator();

}

