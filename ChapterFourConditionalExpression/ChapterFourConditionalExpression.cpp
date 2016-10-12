// ChapterFourConditionalExpression.cpp : Defines the entry point for the console application.
//

/*
	This program calculates a consultant's charges at $50
	per hour, ofr a minimum of 5 hours. The ? : operator
	adjusts to 5 if less than 5 hours were worked.
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//----Global Variables---------------------------------------------------------------------

	const double PAY_RATE = 50.0;	// Hourly pay rate
	const double MIN_HOURS = 5;		// Minimum billable hours
	double	hours,					// Hours worked
			charges;				// Total charges

	//----Display (Get hours worked)-----------------------------------------------------------

	cout << "How many hours were worked? ";
	cin >> hours;

	//----Determine the hours to charge for----------------------------------------------------

	hours = hours < MIN_HOURS ? MIN_HOURS : hours;

	//----Calculate and display the charges----------------------------------------------------

	charges = PAY_RATE * hours;

	cout << fixed << showpoint << setprecision(2)
		<< "The charges are $" << charges << endl;
    return 0;
}

