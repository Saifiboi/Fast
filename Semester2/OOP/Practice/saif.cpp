#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="hello my name is saifi";
	//cout<< sizeof("hello my name is saifi")<<endl<<sizeof(str);
	int arr=10;
	int *ptr=&arr;
	char arr2='A';
	char *ptr2=&arr2;
	ptr=static_cast<int>(ptr2);
	
}
