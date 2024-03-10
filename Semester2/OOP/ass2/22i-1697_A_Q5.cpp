/*
 * Name ::SAif Ur rehman
 * Roll Number::i221697
 * Assignment :: 2
 * Section :: CY-A
 * Question 5
 */
#include<iostream>
#include<string>
using namespace std;
class Address {
	const int HouseNumber;
	const int street;
	const int ApartmentNumber;
	const char *city;
	const char *state;
	int PostalCode;
public:
	Address(int HouseNumber,int street,char *city,char *state,int PostalCode);
	Address(int HouseNumber,int street,char *city,char *state,int PostalCode,int ApartmentNumber);
	void print() const;
	bool compareTo(Address a1)const;
	virtual ~Address();
};
Address::Address(int HouseNumber,int street,char *city,char *state,int PostalCode):HouseNumber(HouseNumber),city(city),street(street),state(state),PostalCode(PostalCode),ApartmentNumber(0){


}
Address::Address(int HouseNumber,int street,char *city,char *state,int PostalCode,int ApartmentNumber):HouseNumber(HouseNumber),city(city),street(street),state(state),PostalCode(PostalCode),ApartmentNumber(ApartmentNumber){


}
void Address::print() const
{
	if(this->ApartmentNumber==0)
	{
		cout<<this->HouseNumber<<","<<this->street;
	}
	else
	{
		cout<<this->HouseNumber<<","<<this->ApartmentNumber<<","<<this->street;
	}
	cout<<"\n"<<this->city<<","<<this->state<<","<<this->PostalCode<<endl;
}
bool Address::compareTo(Address a1)const
{
	if(this->PostalCode<a1.PostalCode)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Address::~Address() {
	// TODO Auto-generated destructor stub
}
int main()
{
	int house=0,street=0,post=0; 
	char *city, *state;
	city=new char [50];
	state=new char [50];
	cout<<"Enter House Number of house 1 :";
	cin>>house;
	while(house<0)
	{
		cout<<"House Number cant be negative input again:";
		cin>>house;
	}
	cout<<"Enter Street Number of house 1 :";
	cin>>street;
	while(street<0)
	{
		cout<<"Street Number cant be negative input again:";
		cin>>street;
	}
	cin.ignore();
	cout<<"Enter City of house 1 :";
	cin.getline(city,40);
	cout<<"Enter State of house 1 :";
	cin.getline(state,40);
	cout<<"Enter Postal code of house 1 :";
	cin>>post;
	while(post<0)
	{
		cout<<"Postal code cant be negative input again:";
		cin>>post;
	}
	Address a1(house,street,city,state,post);
	cout<<"Enter House Number of house 2 :";
	cin>>house;
	while(house<0)
	{
		cout<<"House Number cant be negative input again:";
		cin>>house;
	}
	cout<<"Enter Street Number of house 2 :";
	cin>>street;
	while(street<0)
	{
		cout<<"Street Number cant be negative input again:";
		cin>>street;
	}
	cin.ignore();
	cout<<"Enter City of house 2 :";
	cin.getline(city,40);
	cout<<"Enter State of house 2 :";
	cin.getline(state,40);
	cout<<"Enter Postal code of house 2 :";
	cin>>post;
	while(post<0)
	{
		cout<<"Postal code cant be negative input again:";
		cin>>post;
	}
	Address a2(house,street,city,state,post);
	cout<<"\nAddress 1::";
	a1.print();
	cout<<endl;
	cout<<"\nAddress 2::";
	a2.print();
	cout<<endl;
	cout<<"\nResult of Comparison is::"<<a1.compareTo(a2)<<endl;
}

