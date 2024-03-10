#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string std_id;
    string std_name;
    double cgpa;
    int age;
    Student(string std_id="\0",string name="\0",double cgpa=0.0,double age =0.0)
    {
        this->std_id=std_id;
        this->std_name=name;
        this->cgpa=cgpa;
        this->age=age;
    }
    void print()
    {
        cout<<endl<<"ID:"<<this->std_id;
        cout<<endl<<"Name:"<<this->std_name;
        cout<<endl<<"cgpa:"<<this->cgpa;
        cout<<endl<<"age:"<<this->age;
    }
};