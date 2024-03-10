
/* Name :Saif ur rehman    Student ID: i221697
	Assignment#3*/
#include <iostream>

using namespace std;

int main(){
	int num;
	cout<<"\nEnter the length of pattern maximum 9:";			
	cin>>num;
	while(num<1 ||num>9)			//validating and taking right input.
	{
		cout<<"\nLength out of range or negative!try again:";
		cin>>num;
	}

	for(int i=0,m=num-1;i<num;i++,m--){		//loop for upper isoceles triangle.
		for(int j=1;j<=m;j++){		//m represent left outer spaces.
			cout<<"  ";
		}
		for(int k=1;k<=i+1;k++){	//i+1 is the values to be printed in upper left right triangle.
			cout<<k<<" ";
		}
		for(int w=i;w>=1;w--){		//i represent values that are to be printed on upper right triangle. 
			cout<<w<<" ";
		}
		cout<<endl;
	}
	
	for(int i=1,q=num-1;i<=num;i++,q--){		//loop for lower right triangle.
		for(int j=1;j<=i;j++){		//loop for spaces.
			cout<<"  ";
		}
		for(int k=1;k<=q;k++){		//loop for printing numbers.
			cout<<k<<" ";
		}
		cout<<endl;
	}







	return 0;
}
