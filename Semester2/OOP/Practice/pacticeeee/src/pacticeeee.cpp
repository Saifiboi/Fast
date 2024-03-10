//============================================================================
// Name        : pacticeeee.cpp
// Author      : Saif Ur rehman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void draw(int n,char ch)
{
	if(n<=0)
	{
		return;
	}
	else
	{
		cout<<ch;
		draw(n-1,ch);
	}
}
void draw2(int n,char ch)
{
	if(n<=0)
	{
		return;
	}
	else
	{
		cout<<ch;
		draw2(n-1,ch+1);
	}
}
void pattern(int start,int end)
{
	if(start<=end)
	{
		draw(end-start,' ');
		draw((2*start)-1,'*');
		cout<<endl;
		pattern(start+1,end);
		if(start!=end)
		{
			draw(end-start,' ');
			draw((2*start)-1,'*');
			cout<<endl;
		}
	}

}
void pattern2(int start,int end,char ch)
{
	if(start<=end)
	{
		draw2(start,ch);
		cout<<endl;
		pattern2(start+1,end,ch+start);
	}

}
int main() {
	pattern2(1,5,'A');
	return 0;
}
