/* Programmer: Luis Garcia
* Purpose: A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour
The recipe produces 48 cookies with these amounts of the ingredients.
Write a program that asks the user how many cookies he or she wants to
make and then displays the number of cups of each ingredient needed for
the specified number of cookies .
Date Modified: 01/15/2021
Compiler: MS VC++ 2019
*/

#include <iostream>
#include <iomanip>
#include "ch3Source13.h"

using namespace std;

int main()
{
	// Variables 
	const float COOKIES = 48,
		SUGAR = 1.5,
		BUTTER = 1,
		FLOUR = 2.75;

	float num_cookies,
		total_butter,
		total_sugar,
		total_flour;

	//Ask user how many cookies to make
	cout << "\nHow many cookies do you want to make? ";
	cin >> num_cookies;

	//Calculate ingredients 
	total_sugar = (SUGAR * num_cookies) / COOKIES;
	total_flour = (FLOUR * num_cookies) / COOKIES;
	total_butter = (BUTTER * num_cookies) / COOKIES;

	// Display amount of ingredients
	cout << setprecision(2) << fixed;
	cout << "\nTo make " << num_cookies << " cookies ";
	cout << "you will need the followng ingredients: \n";
	cout << " - " << total_butter << " cups of butter\n";
	cout << " - " << total_sugar << " cups of sugar\n";
	cout << " _ " << total_flour << " cups of sugar\n";

	system("pause");
		return 0;		  
} 
