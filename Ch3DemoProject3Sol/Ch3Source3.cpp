/* Programmer: Luis Garcia
*  Purpose: Write a program that asks the user 
   to enter their monthly costs for each of the 
   following housing-related expenses:
	
    • rent or mortgage payment • phones • utilities • cable

	The program should then display the total monthly cost of
	these expenses and the total annual cost of these expenses.
	Date Modified: 01/14/2021
	Compiler: MS VC++ 2019
*/

# include <iostream> // Include the iostream package
using namespace std;

int main()
{
	// Initialize the program variables
	double rent, 
	utilities,
	phones, 
	cable, 
	total_monthly, total_annual;

	// Prepare the program
	cout << "Welcome to the utilities calculator!\n";
	cout << "This program takes inputs include expenses, rent, mortgage payments, utilities, phones, and cable.\n";
	cout << "and calculates the total monthly and annual costs of these expenses!\n";
	cout << "To start this program, please enter your estimates for the following expenses.\n";

	// Get input for each of the variable in questio
	cout << "How much do you estimate your monthly rent or mortgage expenses to be?";
	cin >> rent;
	cout << "How much do you estimate your monthly utilities expenses to be?";
	cin >> utilities;
	cout << "How much do you estimate your monthly phone expenses to be?";
	cin >> phones;
	cout << "How much do you estimate your monthly cable expenses to be?";
	cin >> cable;

	// Calculate relevant output
	total_monthly = rent + utilities + phones + cable;
	total_annual = total_monthly * 12;

	// Return output to the user
	cout << "Thank you for using our spending estimation program!\n";
	cout << "Based on all the expenses that you entered, I estimate that your total monthly costs are " << total_monthly << " dollars!\n";
	cout << "Additionally, we project that your total annual housing related expenses are " << total_annual << " dollars!";
	system("pause");
	return 0;
}