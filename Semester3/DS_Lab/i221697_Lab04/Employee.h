#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    int emp_id;
    string emp_name;
    string nic;
    double salary;
    double bonus;
    Employee(int emp_id=0,string name="\0",string n="\0",double salary=0.0,double bonus =0.0)
    {
        this->emp_id=emp_id;
        this->emp_name=name;
        this->nic=n;
        this->salary=salary;
        this->bonus=bonus;
    }
    void print()
    {
        cout<<endl<<"ID:"<<this->emp_id;
        cout<<endl<<"Name:"<<this->emp_name;
        cout<<endl<<"NIC:"<<this->nic;
        cout<<endl<<"Salary:"<<this->salary;
        cout<<endl<<"Bonus:"<<this->bonus;
    }
};