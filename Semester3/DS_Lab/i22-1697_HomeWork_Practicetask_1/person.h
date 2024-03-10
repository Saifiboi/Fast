#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;
class Person{
    string cnic;
    string name;
    string address;
public:
    Person()
    {

    }
    void set_cnic()
    {
        int num = rand()%10000000000000;
        this->cnic= to_string(num);
        this->name = "Abdullah";
        this->address="Islamabad.";
    }
    void set_cnic(int num)
    {
        int number = rand() % 1000000000000;
        this->cnic=to_string(num)+to_string(number);
        this->name = "Abdullah";
        this->address="Islamabad.";
    }
    string get_cnic()
    {
        return this->cnic;
    }
};


#endif 