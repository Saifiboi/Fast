#include<iostream>
using namespace std;
void Hop(int direction,int &x,int &y,int &carrot,int &prev,bool &check);
int main()
{
	const int ARRAY=10;
	int x,y,carrot,direction,prev=4;
	bool check=0;
	cout<<"X-coordinates:";
	cin>>x;
	while(x<0 || x>10)
	{
		cout<<"\nInvalid Input!Try Again:";
		cin>>x;
	}
	cout<<"Y-coordinates:";
	cin>>y;
	while(y<0 || y>10)
	{
		cout<<"\nInvalid Input!Try Again:";
		cin>>y;
	}
	cout<<"carrot:";
	cin>>carrot;
	while(carrot<0)
	{
		cout<<"\nInvalid Input!Try Again:";
		cin>>carrot;
	}
	cout<<"Output:\n";
	while(check==0)
	{
		cout<<"Bunny at location "<<x<<","<<y<<" with "<<carrot<<" carrots\n";
		if(carrot>0)
		{
			cout<<"direction=";
			cin>>direction;
			while(direction<0 || direction>3)
			{
				cout<<"\nInvalid direction!try Again:";
				cin>>direction;
			}
			
			Hop(direction,x,y,carrot,prev,check);
		}
		else
		{
			cout<<"Bunny Cant hop:\n";
			check=1;
		}
	}
	
}
void Hop(int direction,int &x,int &y,int &carrot,int &prev,bool &check)
{
	if(carrot>0)
	{
		switch(direction)
		{
			case 0:
				if(prev==1)
				{
					cout<<"\nBunny can't hop:\n";
					check=1;
				}
				else
				{
					y+=1;
					if(y>=10 || y<=0)
					{
						cout<<"\nGrid limit exceeds, Bunny cannot hop:\n";
						check=1;
					}
					else
					{ 	
						carrot-=1;
						cout<<"\nHop:\n";
					}
					prev=direction;
				}
					break;
			case 1:
				x+=1;
				if(x>=10 || x<=0)
				{
					cout<<"\nGrid limit exceeds, Bunny cannot hop:\n";
					check=1;
				}
				else
				{ 	
					carrot-=1;
					cout<<"\nHop:\n";
				}
				prev=direction;
				break;
			case 2:
				y-=1;
				if(y>=10 || y<=0)
				{
					cout<<"\nGrid limit exceeds, Bunny cannot hop:\n";
					check=1;
				}
				else
				{ 	
					carrot-=1;
					cout<<"\nHop:\n";
				}
				prev=direction;
				break;
			case 3:
				if(prev!=2 && prev!=4)
				{
					cout<<"\nBunny can't hop:";
					check=1;
				}
				else
				{
					x-=1;
					if(x>=10 || x<=0)
					{
						cout<<"\nGrid limit exceeds, Bunny cannot hop:\n";
						check=1;
					}
					else
					{ 	
						carrot-=1;
						cout<<"\nHop:\n";
					}
					prev=direction;
				}
				break;
			default:
				cout<<"\nThe bunny cannot hop\n";
				check=1;
				break;
		}
	}
	else 
	{
		cout<<"\nbunny cannot hop\n";
		check=1;
	}
}
