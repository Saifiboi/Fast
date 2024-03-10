/*
 * Name ::SAif Ur rehman
 * Roll Number::i221697
 * Assignment :: 2
 * Section :: CY-A
 * Question 3
 */
#include<iostream>
using namespace std;
class FlightInfo {
private:
	int FlightNumber;
	char *Destination;
	float Distance;
	float Fuel;
	void calFuel();
public:
	FlightInfo();
	void feedInfo();
	void showInfo();
	float getFuel();
	~FlightInfo();
};
FlightInfo::FlightInfo() {
	this->Destination=NULL;

}
void FlightInfo::calFuel()
{
	if(this->Distance<=1000)
	{
		this->Fuel=500;
	}
	else if(this->Distance>1000 && this->Distance<=2000)
	{
		this->Fuel=1100;
	}
	else if(this->Distance>2000)
	{
		this->Fuel=2200;
	}
}
void FlightInfo::feedInfo()
{
	if(this->Destination!=NULL)
	{
		delete [] this->Destination;
	}
	this->Destination=new char[50];
	cout<<"\nWelcome to Info Feeding Portal:::\n";
	cout<<"\nEnter Flight Number:";
	cin>>this->FlightNumber;
	cin.ignore();
	cout<<"\nEnter Destination:";
	cin.getline(this->Destination,50);
	cout<<"\nEnter Distance:";
	cin>>this->Distance;
	this->calFuel();
}
void FlightInfo::showInfo()
{
	cout<<"\nWelcome to Data Report:::\n\n";
	cout<<"\nFlightNumber:::"<<this->FlightNumber;
	cout<<"\nDestination:::"<<this->Destination;
	cout<<"\nDistance:::"<<this->Distance;
	cout<<"\nFuel:::"<<this->Fuel<<endl;

}
float FlightInfo::getFuel()
{
	return this->Fuel;
}
FlightInfo::~FlightInfo() {
	delete []this->Destination;
}
int main()
{
	FlightInfo f1;
	f1.feedInfo();
	f1.showInfo();
	f1.getFuel();
}
