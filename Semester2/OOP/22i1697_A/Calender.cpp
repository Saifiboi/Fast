//============================================================================
// Name        : SAIF UR REHMAN
// ASSIGNMENT  : 03
// QUESTION    : 1
// FILE        : CALENDER.CPP
//============================================================================
/*
 * Calender.cpp
 *
 *  Created on: Apr 3, 2023
 *      Author: safi
 */

#include "Calender.h"

Calender::Calender() {
	// TODO Auto-generated constructor stub

}
void Calender::Display(int month, int year)
{
    string mn = nameMonth(month); // Get month name based on number
    cout << setw(23) << mn << endl << endl; // Display month name
    cout << "   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";  // Display day names

	// get the number of days in the month
		int numDays = noDays(month, year);  // Get number of days in the month

	// get the first day of the month
	int firstDay = Daynum(1, month, year);  // Get the day number of the first day of the month

	// create a 2D array to store the dates in a calendar format
	int calendar[6][7] = {0};	//maximumly a month can lie in 6 weeks.
	int row = 0, col = firstDay;  // Initialize the row and column for the first day of the month

	for (int day = 1; day <= numDays; day++) {
	    calendar[row][col] = day;  // Store the day in the calendar array
	    col++;
	    if (col > 6) {  // If the column exceeds the limit, move to the next row
		col = 0;
		row++;
	    }
	}

	// display the calendar
	for (int i = 0; i < 6; i++) {  // Loop through each row
	    for (int j = 0; j < 7; j++) {  // Loop through each column
		if (calendar[i][j] == 0) {  // If the day is not part of the current month, display empty space
		    cout << setw(5) << "";
		} else {  // If the day is part of the current month, display the day number
		    cout << setw(5) << calendar[i][j];
		}
	    }
	    cout << endl; // End the row
	 }
}
// Function to print calendar
void Calender::printCal()
{
    int year,choice,month;

    // Take input year
    cout<<"\nEnter the year you want to print:";
    cin>>year;

    // Validate input year
    while(year<0)
    {
        cout<<"\nInvalid Input!Year can't be negative try again:";
        cin>>year;
    }

    // Ask for choice to see full year or one month calendar
    cout<<"Wanna see full year calender or 1 month(Hit 0 for year and 1 for month):";
    cin>>choice;

    // Validate input choice
    while(choice<0 || choice>1)
    {
        cout<<"\nInvalid choice!Try a valid one:";
        cin>>choice;
    }

    // If user wants to see one month calendar
    if(choice==1)
    {
        // Take input month
        cout<<"\nEnter the number of month for calender:";
        cin>>month;

        // Validate input month
        while(month<1 || month>12)
        {
            cout<<"\nInvalid Month !Try a valid one:";
            cin>>month;
        }

        // Display calendar of selected month and year
        Display(month,year);
    }

    // If user wants to see full year calendar
    else
    {
        // Display year header
        cout<<endl<<setw(20)<<"Year:"<<year<<endl;

        // Display calendar of each month in selected year
        for(month=1;month<=12;month++)
        {
            Display(month,year);
            cout<<endl;
        }
    }
}

// Destructor
Calender::~Calender() {
    // TODO Auto-generated destructor stub
}


