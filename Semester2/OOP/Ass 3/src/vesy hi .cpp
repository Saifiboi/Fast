#include<iostream>
using namespace std;
//class time{
//	int hrs;
//	int mins;
//	int secs;
//	bool merid;
//public:
//	time(int hrs=0,int mins=0,int secs=0,bool merid=0){
//		this->hrs=hrs;
//		this->mins=mins;
//		this->secs=secs;
//		this->merid=merid;
//	}
//	void print(){
//		if(merid==1)
//			cout<<"time="<<this->hrs<<":"<<this->mins<<":"<<this->secs<<"pm"<<endl;
//		else
//			cout<<"time="<<this->hrs<<":"<<this->mins<<":"<<this->secs<<"am"<<endl;
//	}
//};
//class miltime:public time{
//	int hrs;
//	int mins;
//	int secs;
//public:
//	miltime(int hrs=0,int mins=0,int secs=0):time(hrs%12,mins,secs,hrs/12){
//		if(hrs>23 || hrs<0)
//		{
//			exit(-1);
//		}
//		else if(mins>59 || mins<0)
//		{
//			exit(-1);
//		}
//		else if(secs>59 || secs<0)
//		{
//			exit(-1);
//		}
//		this->hrs=hrs;
//		this->mins=mins;
//		this->secs=secs;
//	}
//	void print(){
//		cout<<"Military time="<<this->hrs<<":"<<this->mins<<":"<<this->secs<<endl;
//	}
//};
//class timeclock:public miltime{
//	miltime t1;
//	miltime t2;
//public:
//	timeclock(int a,int b,int c,int d,int e,int f):t1(a,b,c),t2(d,e,f)
//	{
//
//	}
//	void print()
//};
//int main()
//{
//	int hrs,months,secs,h1,h2,h3;
//	cout<<"\nEnter  time 1:";
//	cin>>hrs>>months>>secs;
//	cout<<"\nEnter  time 2:";
//	cin>>h1>>h2>>h3;
//	timeclock t(hrs,months,secs,h1,h2,h3);
//}
int findGCD(int num1,int num2)
{
		if(num2==0)
		{
			return num1;
		}
		else{
			return findGCD(num2,num1%num2);
		}

}
int main()
{
	cout<<findGCD(10,15)<<endl;
}
