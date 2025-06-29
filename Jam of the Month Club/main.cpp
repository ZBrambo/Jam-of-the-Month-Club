/*
* Jam of the Month
* Author: Zachary Bram
* Language: C++
*		This program is meant to take the user's input for what
*		monthly package they own and how many jams, jellies,
*		and preserves they are getting.
* 
*		Each package has different prices and monthly jam limits.
*		The program also validates the user's input to make sure 
*		they are inputting proper values.
*/


/*
* IMPROVEMENTS TO CODE IN FUTURE
*	GET RID OF DUPLICATE CODE WITHIN THE SWITCH CASES. CAN BE HANDLED BETTER
*	CREATE FUNCTIONS TO REDUCE CODE SIZE AND INCREASE MAINTAINABILITY
*	INPUT FOR NUMBER OF JAMS FAILS WITH INPUT VALIDATION
*/



#include <iostream>
using namespace std;


// Start of main code
int main()
{
	// Package A values
	const int PACKAGE_A_BASE_COST = 8;
	const int PACKAGE_A_MONTHLY_JAMS = 2;
	const int PACKAGE_A_EXTRA_COST = 5;

	// Package B values
	const int PACKAGE_B_BASE_COST = 12;
	const int PACKAGE_B_MONTHLY_JAMS = 4;
	const int PACKAGE_B_EXTRA_COST = 4;

	// Package C values
	const int PACKAGE_C_BASE_COST = 15;
	const int PACKAGE_C_MONTHLY_JAMS = 6;
	const int PACKAGE_C_EXTRA_COST = 3;


	char userPackage;
	int jamsForTheMonth = 0, extraJams = 0, extraCost = 0, totalCost = 0;



	//input validation for the user's package
	do {
		cout << "Hello, please enter what package you own: A, B, or C?" << endl;
		cin >> userPackage;
		userPackage = toupper(userPackage);
	} while (userPackage != 'A' && userPackage != 'B' && userPackage != 'C');

	//switch case for user input
	switch(userPackage)
	{
	case 'A':

		cout << "How many jams have you purchased for the month? " << endl;
		cin >> jamsForTheMonth;

		//input validation for the user's package
		while (jamsForTheMonth < 0) {
			cout << "You must enter a postive number. Please try again.";
			cout << "How many jams have you purchased for the month? " << endl;
			cin >> jamsForTheMonth;
		}


		//if user buys more than their monthly limit
		if (jamsForTheMonth > PACKAGE_A_MONTHLY_JAMS) {
			extraJams = jamsForTheMonth - PACKAGE_A_MONTHLY_JAMS;
			extraCost = extraJams * PACKAGE_A_EXTRA_COST;
			totalCost = PACKAGE_A_BASE_COST + extraCost;
		} else {
			totalCost = PACKAGE_A_BASE_COST;
		}

		cout << "Your total cost($): " << totalCost << endl;

		break;
	case 'B':
		cout << "How many jams have you purchased for the month? " << endl;
		cin >> jamsForTheMonth;

		//input validation for the user's package
		while (jamsForTheMonth < 0) {
			cout << "You must enter a postive number. Please try again.";
			cout << "How many jams have you purchased for the month? " << endl;
			cin >> jamsForTheMonth;
		}


		//if user buys more than their monthly limit
		if (jamsForTheMonth > PACKAGE_B_MONTHLY_JAMS) {
			extraJams = jamsForTheMonth - PACKAGE_B_MONTHLY_JAMS;
			extraCost = extraJams * PACKAGE_B_EXTRA_COST;
			totalCost = PACKAGE_B_BASE_COST + extraCost;
		}
		else {
			totalCost = PACKAGE_B_BASE_COST;
		}

		cout << "Your total cost($): " << totalCost << endl;
		break;
	case 'C':
		cout << "How many jams have you purchased for the month? " << endl;
		cin >> jamsForTheMonth;

		//input validation for the user's package
		while (jamsForTheMonth < 0) {
			cout << "You must enter a postive number. Please try again.";
			cout << "How many jams have you purchased for the month? " << endl;
			cin >> jamsForTheMonth;
		}


		//if user buys more than their monthly limit
		if (jamsForTheMonth > PACKAGE_C_MONTHLY_JAMS) {
			extraJams = jamsForTheMonth - PACKAGE_C_MONTHLY_JAMS;
			extraCost = extraJams * PACKAGE_C_EXTRA_COST;
			totalCost = PACKAGE_C_BASE_COST + extraCost;
		}
		else {
			totalCost = PACKAGE_C_BASE_COST;
		}

		cout << "Your total cost($): " << totalCost << endl;
		break;
	default:
		cout << "Invalid! Terminate program." << endl;
		break;
	}




	return 0;
}
