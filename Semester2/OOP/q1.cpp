#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
srand(time(0));
	int *arr;
	arr=new int [1];
	arr[0]=5;
	cout<<arr[0]<<endl;
	cout<<40+rand()%(100-40)<<endl;
	delete [] arr;
	arr=0;
	//getchar();
}
