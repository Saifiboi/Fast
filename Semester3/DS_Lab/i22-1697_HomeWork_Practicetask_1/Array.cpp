#include<iostream>
#include "person.h"
#include<chrono>
using namespace std;
void linear_search()
{
    Person *P_arr= new Person[100000];
    for(int i=0;i<100000;i++)
    {
       P_arr[i].set_cnic();
    }
    string number;
    cout<<"Enter The Number:";
    cin>>number;
    bool result=false;
    auto starting_time = std::chrono::high_resolution_clock::now();
    for(int i=0;i<100000;i++)
    {
        if(number == P_arr[i].get_cnic()){
            result = true;
            break;
        }
    }
    auto ending_time = std::chrono::high_resolution_clock::now();
    chrono::duration<double> time_taken = ending_time - starting_time;
    cout << "Execution time Taken by linear search: " << time_taken.count() << " seconds" << std::endl;
    cout<<"Result of Linear Search is:"<<result<<endl;
}
int main()
{
    auto starting_time = std::chrono::high_resolution_clock::now();
    linear_search();
    auto ending_time = std::chrono::high_resolution_clock::now();
    chrono::duration<double> time_taken = ending_time - starting_time;
    cout << "Time For Whole Program: " << time_taken.count() << " seconds" << std::endl;
}
