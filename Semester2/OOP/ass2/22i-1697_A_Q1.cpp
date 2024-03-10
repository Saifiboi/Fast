/*
 * Name ::SAif Ur rehman
 * Roll Number::i221697
 * Assignment :: 2
 * Section :: CY-A
 * Question 1
 */

#include<iostream>
#include<string>
using namespace std;
class Employee {
	char *name;
	double salary;
public:
	Employee(char *name="\0",double =0.0);
	virtual ~Employee();
	char* getName() const;
	double getSalary() const;
};

using namespace std;
Employee::Employee(char *name,double salary) {
	this->name=name;
	this->salary=salary;

}

char* Employee::getName() const {
	return name;
}

double Employee::getSalary() const {
	return salary;
}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}
int main()
{
	char *name=new char [20];
	double salary;

	cout<<"\nPlease type the name (max 20 characters):";
	cin.getline(name,20);
	cout<<"\nPlease specify the salary:";
	cin>>salary;
	Employee E1(name,salary);
	cout<<"\nName of employee:"<<E1.getName();
	cout<<"\nSalary:"<<E1.getSalary();
	cout<<"\nThank you for testing Class Employee.\n";
	delete []name;
	name=0;
}

