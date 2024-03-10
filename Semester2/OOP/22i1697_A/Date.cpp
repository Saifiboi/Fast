//============================================================================
// Name        : SAIF UR REHMAN
// ASSIGNMENT  : 03
// QUESTION    : 1
// FILE        : DATE.CPP
//============================================================================
/*
 * Date.cpp
 *
 *  Created on: Mar 3, 2023
 *      Author: safi
 */
#include "Date.h"
Date::Date() {
	day=1;
	month=1;
	year=1900;


}
Date::Date(int d,int m,int y)
{
	day=d;
	month=m;
	year=y;
}
Date::~Date() {
	day=0;
	month=0;
	year=0;
}
// Overloaded subtraction operator for Date class
void Date::operator-(Date & D)
{
	// Calculate the difference between two dates in months and days
	int num_years=0;
	int num_months=0,num_days=0,monthdiff=0,daydiff=0;
	if(this->year>D.year) // if the current year is greater than the given year
	{
		num_years=this->year-D.year;
		num_months+=(num_years*12);
		monthdiff=this->month-D.month;
		num_months+=monthdiff;
		daydiff=this->day-D.day;
		if(daydiff<0) // if day difference is negative
		{
			num_months--;
			num_days+=((noDays(D.month,D.year)-D.day)+this->day); // add remaining days of D's month and current day of the month
		}
		else // if day difference is positive
		{
			num_days+=daydiff;
		}
	}
	else if(D.year>this->year) // if the given year is greater than the current year
	{
		num_years=D.year-this->year;
		num_months+=(num_years*12);
		monthdiff=D.month-this->month;
		num_months+=monthdiff;
		daydiff=D.day-this->day;
		if(daydiff<0) // if day difference is negative
		{
			num_months--;
			num_days+=((noDays(this->month,this->year)-this->day)+D.day); // add remaining days of current month and D's day
		}
		else // if day difference is positive
		{
			num_days+=daydiff;
		}
	}
	else  // if both dates are in the same year
	{
		if(D.month<this->month) // if D's month is earlier in the year than current month
		{
			num_months=this->month-D.month;
			daydiff=this->day-D.day;
			if(daydiff<0) // if day difference is negative
			{
			num_months--;
			num_days+=((noDays(D.month,D.year)-D.day)+this->day); // add remaining days of D's month and current day of the month
			}
			else // if day difference is positive
			{
			num_days+=daydiff;
			}
		}
		else if(this->month<D.month) // if current month is earlier in the year than D's month
		{
			num_months=this->month-D.month;
			daydiff=this->day-D.day;
			if(daydiff<0) // if day difference is negative
			{
			num_months--;
			num_days+=((noDays(D.month,D.year)-D.day)+this->day); // add remaining days of D's month and current day of the month
			}
			else // if day difference is positive
			{
			num_days+=daydiff;
			}
		}
		else // if both dates are in the same month and year
		{
			num_months=0;
			num_days=this->day-D.day;
			if(num_days<0) // if day difference is negative
			{
				num_days*=(-1);
			}
		}
	}
	cout<<"\nMonths:"<<num_months<<"\tDays:"<<num_days<<endl;
	cout<<"OR";
	calweeks(D); // call calweeks function to calculate the difference in weeks
}
// Calculate the number of days between two dates
void Date::calweeks(Date &D)
{
	int num_days=0;
	int i=this->year;
	int j=this->month;
	// Check if the current year is less than the year of the second date
	if(i<D.year)
	{
		// Loop through years until second date year is reached
		while(i<=D.year)
		{
		// Check if the current month is the same as the month of the first date and year of first date
			if(j==this->month && i==this->year)
			{
				// Add remaining days in current month
				num_days+=(noDays(this->month,this->year)-this->day);
			}
			j++;
			// If current year is less than second date year, add all days in current year
			if(i<D.year)
			{
				while(j<=12)
				{
					num_days+=noDays(j,i);
					j++;
				}
			}
			// If current year is same as second date year, add all days in months before second date month and the second date day
			else
			{
				while(j<D.month)
				{
					num_days+=noDays(j,i);
					j++;
				}
				num_days+=D.day;
			}
			j=0;
			i++;
		}
	}
		// Check if the current year is greater than the year of the second date
	else if(i>D.year)
	{
		i=D.year;
		j=D.month;
		// Loop through years until current year is reached
		while(i<=this->year)
		{
		// Check if the current month is the same as the month of the second date and year of second date
			if(j==D.month && i==D.year)
			{
			// Add remaining days in current month
				num_days+=(noDays(D.month,D.year)-D.day);
			}
			j++;
			// If current year is less than second date year, add all days in current year
			if(i<this->year)
			{
				while(j<=12)
				{
					num_days+=noDays(j,i);
					j++;
				}
			}
		// If current year is same as first date year, add all days in months before first date month and the first date day
			else
			{
				while(j<this->month)
				{
					num_days+=noDays(j,i);
					j++;
				}
				num_days+=this->day;
			}
			j=0;
			i++;
		}
	}
		// If the years of both dates are the same
	else
	{
		// If the month of the first date is less than the month of the second date
		if(this->month<D.month)
		{
			i=this->month;
			// Add remaining days in current month
			num_days=noDays(i,this->year)-this->day;
			i++;
			// Add all days in months until second date month is reached
			while(i<D.month)
			{
				num_days=noDays(i,this->year);
				i++;
			}
			num_days+=D.day;
		}
		// If the month of the first date is greater than the month of the second date
		else if(this->month>D.month)
		{
			i=D.month;
			// Add remaining days in current month
			num_days=noDays(i,D.year)-D.day;
			i++;
			while(i<this->month)
			{
				num_days=noDays(i,D.year);
				i++;
			}
		// Add all days in months until first date month
			num_days+=this->day;
		}
		else
		{
			num_days+=this->day-D.day;
			if(num_days<0)
			{
				num_days*=(-1);
			}
		}
	}
	int weeks=num_days/7;
	num_days=num_days%7;
	cout<<"\nWeeks:"<<weeks<<"\tDays:"<<num_days<<endl;
}
void Date::dateahead()
{
	string date;
	Date input;
	string s="\0",copy;
	Date D;
	char *choicestr=0;
	int num=0, choice;
	int num_days=0;
	cout<<"\nEnter Date(comma separated):";
	cin>>date;
	copy=date;
	input.day=stoi(strtok(&copy[0],","));
	input.month=stoi(strtok(NULL,","));
	input.year=stoi(strtok(NULL,","));
	if(input.year<0)
	{
		cout<<"\nInvalid input !program aborted:";
		exit(-1);
	}
	if(input.month<0 || input.month>12)
	{
		cout<<"\nInvalid input !program aborted:";
		exit(-1);
	}
	if(input.day<0||input.day>noDays(input.month,input.year))
	{
		cout<<"\nInvalid input !program aborted:";
		exit(-1);
	}
	cout<<"\nEnter the era to move Ahaed:";
	cin >> num >> s;
	if(s =="\0")
	{
		cout<<"\nInvalid input!Program aborted:\n";
		exit(-1);
	}
	while(num<0)
	{
		cout<<"\nInvalid Number!Try again:";
		cin >> num >> s;
		if(s =="\0")
		{
			cout<<"\nInvalid input!Program aborted:\n";
			exit(-1);
		}
	}
	copy=s;
	choicestr=strtok(&copy[0],"\0");
	transform(copy.begin(), copy.end(), copy.begin(), ::toupper);
	if(copy=="MONTHS" || copy=="MONTH")
	{
		if(num>12)
		{
			D.year=input.year+num/12;
			D.month=input.month+num%12;
		}
		else
		{
			D.month=input.month+num;
		}
		if(D.month>12)
		{
			D.year++;
			D.month-=12;
		}
		if(input.day<noDays(D.month,D.year))
		{
			D.day=input.day;
		}
		else
		{
			D.day=input.day-noDays(D.month,D.year);
			D.month++;
		}
		cout<<"\n"<<num<<" "<<s<<" from the start date "<<date<<" is "<<D.day<<","<<D.month<<","<<D.year<<endl;
	}
	else if(copy=="YEARS" || copy=="YEAR")
	{
		D.year=input.year+num;
		D.month=input.month;
		if(input.day>noDays(D.month,D.year))
		{
			D.day=input.day-noDays(D.month,D.year);
			D.month++;
		}
		else
		{
			D.day=input.day;
		}
		cout<<"\n"<<num<<" "<<s<<" from the start date "<<date<<" is "<<D.day<<","<<D.month<<","<<D.year<<endl;
	}
	else if(copy=="WEEKS" || copy=="WEEK")
	{
		num_days=num*7;
		int i=input.month;
		int j=input.year;
		num_days-=(noDays(input.month,input.year)-input.day);
		i++;
		if(i==13)
		{
			i=1;
			j++;
		}
		while(num_days>noDays(i,j))
		{
			num_days-=(noDays(i,j));
			i++;
			if(i==13)
			{
				i=1;
				j++;
			}
		}
		D.year=j;
		D.month=i;
		D.day=num_days;
		cout<<"\n"<<num<<" "<<s<<" from the start date "<<date<<" is "<<D.day<<","<<D.month<<","<<D.year<<endl;
	}
	else
	{
		cout<<"\nInvalid input!Program aborted:\n";
		exit(-1);
	}



}
void Date::datebeyoned()
{
	int temp=0;
	string date;
	Date input;
	string s="\0",copy;
	Date D;
	char *choicestr=0;
	int num=0, choice;
	int num_days=0;
	cout<<"\nEnter Date(comma separated):";
	cin>>date;
	copy=date;
	input.day=stoi(strtok(&copy[0],","));
	input.month=stoi(strtok(NULL,","));
	input.year=stoi(strtok(NULL,","));
	if(input.year<0)
	{
		cout<<"\nInvalid input !program aborted:";
		exit(-1);
	}
	if(input.month<0 || input.month>12)
	{
		cout<<"\nInvalid input !program aborted:";
		exit(-1);
	}
	if(input.day<0||input.day>noDays(input.month,input.year))
	{
		cout<<"\nInvalid input !program aborted:";
		exit(-1);
	}
	cout<<"\nEnter the era to move Beyoned:";
	cin >> num >> s;
	if(s =="\0")
	{
		cout<<"\nInvalid input!Program aborted:\n";
		exit(-1);
	}
	while(num<0)
	{
		cout<<"\nInvalid Number!Try again:";
		cin >> num >> s;
		if(s =="\0")
		{
			cout<<"\nInvalid input!Program aborted:\n";
			exit(-1);
		}
	}
	copy=s;
	choicestr=strtok(&copy[0],"\0");
	transform(copy.begin(), copy.end(), copy.begin(), ::toupper);
	if(copy=="MONTHS" || copy=="MONTH")
	{
		if(num>12)
		{
			D.year=input.year-num/12;
			D.month=input.month-num%12;
		}
		else
		{
			D.month=input.month-num;
		}
		if(D.month<1)
		{
			D.year--;
			D.month+=12;
		}
		if(input.day<noDays(D.month,D.year))
		{
			D.day=input.day;
		}
		else
		{
			temp=input.day-noDays(D.month,D.year);
			D.month++;
			D.day=noDays(D.month,D.year)-(input.day+temp);
		}
		cout<<"\n"<<num<<" "<<s<<" from the start date "<<date<<" is "<<D.day<<","<<D.month<<","<<D.year<<endl;
	}
	else if(copy=="YEARS" || copy=="YEAR")
	{
		D.year=input.year-num;
		D.month=input.month;
		if(input.day>noDays(D.month,D.year))
		{
			temp=input.day-noDays(D.month,D.year);
			D.month++;
			D.day=noDays(D.month,D.year)-(input.day+temp);
		}
		else
		{
			D.day=input.day;
		}
		cout<<"\n"<<num<<" "<<s<<" from the start date "<<date<<" is "<<D.day<<","<<D.month<<","<<D.year<<endl;
	}
	else if(copy=="WEEKS" || copy=="WEEK")
	{
		num_days=num*7;
		int i=input.month;
		int j=input.year;
		num_days-=input.day;
		i--;
		if(i==0)
		{
			i=12;
			j--;
		}
		while(num_days>noDays(i,j))
		{
			num_days-=(noDays(i,j));
			i--;
			if(i==0)
			{
				i=12;
				j--;
			}
		}
		D.year=j;
		D.month=i;
		D.day=noDays(D.month,D.year)-num_days;
		cout<<"\n"<<num<<" "<<s<<" from the start date "<<date<<" is "<<D.day<<","<<D.month<<","<<D.year<<endl;
	}
	else
	{
		cout<<"\nInvalid input!Program aborted:\n";
		exit(-1);
	}



}
