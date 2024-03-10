#include<iostream>
#include<list>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v1;
	v1.push_back(1100);
	v1.push_back(90);
	sort(v1.begin(),v1.end());
	vector<int> ::iterator iter;
	for(iter=v1.begin();iter!=v1.end();iter++)
	{
		cout<<*iter<<"\t"<<*iter<< endl;
	}

	cout<<endl;

}
