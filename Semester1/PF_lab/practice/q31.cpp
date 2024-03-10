#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	int num,test,score,stdscr;
	cout<<"\nEnter number of students:";
	cin>>num;
	cout<<"Enter number of tests for students:";
	cin>>test;
	int i=1,j=1;
	do{
		cout<<"\nEnter the name of student "<<i<<":";
		cin>>name;
		j=1;
		stdscr=0;
		do{
			cout<<"\nEnter the score of test"<<j<<":";
			cin>>score;
			stdscr+=score;
			j++;
		}while(j<=test);
		cout<<"The average of score of student "<<i<<" is:"<<static_cast<float>(stdscr/test)<<endl;
		i++;
	}while(i<=num);
	
}
