#include<iostream>
using namespace std;
int main()
{	int numstudnt,counter=1,counter2=1,testnum,testscore,sum=0;
	cout<<"\nEnter the number of students:";
	cin>>numstudnt;
	cout<<"\nEnter the number of test:";
	cin>>testnum;
	if(numstudnt>0 &&testnum>0)
	{
		do{
		cout<<"\nEnter the test scores of student no"<<counter<<" :";
			counter2=1;
			sum=0;
			while(counter2<=testnum){
				cout<<"\nEnter the score of test"<<counter2<<":";
				cin>>testscore;
				sum+=testscore;
				counter2++;
				
			}
		cout<<"\nThe average of tset score is:"<<static_cast<float>(sum)/testnum;
		
		counter++;
		}while(counter<=numstudnt);
		
	}
	else
	cout<<"\nInvalid number of students!\n";
	return 0;
}
