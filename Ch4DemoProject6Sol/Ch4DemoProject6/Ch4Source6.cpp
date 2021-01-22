/* Programmer: Luis Garcia
   Purpose: Create a change -counting game that
   asks the user to enter what coins to use to make
   exactly one dollar. The program should ask the user
   to enter the number of pennies, nicke ls, dimes, and
   quarters. If the total value of the coins entered is
   equa l to one dollar, the program should congratulate
   the user for winning the game. Otherwise, the program
   should display a message indicating whether the amount
   entered was more or less than one dollar. 
   Date Modified: 01/25/2020
   Compiler: MS VS++ 2019
*/
#include <iostream>
using namespace std;

int main()
{
	// Constant variables
	const float ONE_DOLLAR = 1.00,
		PENNY = 0.01,
		NICKEL = 0.05,
		DIME = 0.10,
		QUARTER = 0.25;

	//Variables
	float pennies,
		nickles,
		dimes,
		quarters,
		total_coins;

	// explain
	cout << "\nLet's see if your coins equal 1 dollar.\n";
	cout << endl;

	//Ask for pennies, nickles, dimes, and quarters.
	cout << "How many pennies do you have? ";
	cin >> pennies;
	cout << "Nickles? ";
	cin >> nickles;
	cout << "Dimes? ";
	cin >> dimes;
	cout << "Quarters? ";
	cin >> quarters;

	// Format line break
	cout << endl;

	// Calculate total coins
	float total_coins += ((pennies *= PENNY) +
		(nickles *= NICKEL) +
		(dimes *= DIME) +
		(quarters *= QUARTER));

	// Decision statement
	if (total_coins == ONE_DOLLAR)
	{
		cout << '$' << total_coins;
		cout << " equal to $1." << endl;
	}
	else if (total_coins < ONE_DOLLAR)
	{

		cout << '$' << total_coins;
		cout << " is less than $1. Re-run program and ";
		cout << " Try again.\n";
	}
	else if (total_coins > ONE_DOLLAR)
	{
		cout << '$' << total_coins;
		cout << " greater than $1. Re-run program and ";
		cout << " Try again.\n";
	}

	// Format line break 
	cout << endl;

	
		return 0;
}

