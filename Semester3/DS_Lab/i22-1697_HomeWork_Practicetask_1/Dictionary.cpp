#include<iostream>
#include"person.h"
#include<chrono>
using namespace std;

void dict_search()
{
    Person **dict= new Person*[10];
    for(int i=0;i<10;i++)
    {
        dict[i]= new Person[10000];
        for(int j=0;j<10000;j++)
        {
            dict[i][j].set_cnic(i);
        }
    }
    string number;
    cout<<"Enter The Number:";
    cin>>number;
    bool result = false;
    int temp=0;
    auto starting_time = std::chrono::high_resolution_clock::now();
    for(int i=0;i<10000;i++)
    {
        temp=(number[0]>='0' && number[0]<='9')?number[0]-'0':number[1]-'0';
        if(dict[temp][i].get_cnic()==number)
        {
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
    dict_search();
    auto ending_time = std::chrono::high_resolution_clock::now();
    chrono::duration<double> time_taken = ending_time - starting_time;
    cout << "Time For Whole Program: " << time_taken.count() << " seconds" << std::endl;
}
