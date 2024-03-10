/*
 * Name ::SAif Ur rehman
 * Roll Number::i221697
 * Assignment :: 2
 * Section :: CY-A
 * Question 2
 */
#include<iostream>
using namespace std;
class Car {
	float efficiency;
	float fuel_amount;
public:
	Car(float efficiency);
	void drive (float);
	float getFuelLevel();
	void tank(float);
	virtual ~Car();
};
using namespace std;
Car::Car(float efficiency) {
	this->efficiency=efficiency;
	this->fuel_amount=0;

}
void Car::drive (float km)
{
	this->fuel_amount-=(km/this->efficiency);
}
float Car::getFuelLevel(){
	return this->fuel_amount;
}
void Car::tank(float fuel_amount)
{
	this->fuel_amount+=fuel_amount;
}
Car::~Car() {
	// TODO Auto-generated destructor stub
}
int main() {;
int efficiency=0,fuel=0,km=0;
cout<<"\nEnter Efficiency of your car:";
cin>>efficiency;
while(efficiency<0)
{
	cout<<"Efficiency cant be negative input again:";
	cin>>efficiency;
}
Car myBeemer(efficiency);
cout<<myBeemer.getFuelLevel()<<endl;
cout<<"\nEnter fuel level:";
cin>>fuel;
while(fuel<0)
{
	cout<<"Fuel cant be negative input again:";
	cin>>fuel;
}
myBeemer.tank(fuel);
cout<<"\nFuel Level:"<<myBeemer.getFuelLevel()<<endl;
cout<<"\nEnter Km driven";
cin>>km;
while(fuel<0)
{
	cout<<"KM cant be negative input again:";
	cin>>km;
}
myBeemer.drive(km);
cout<<"\nFuel Level After drive:"<<myBeemer.getFuelLevel()<<endl;
cout<<"\nThanks For riding:::\n";
return 0;
}
