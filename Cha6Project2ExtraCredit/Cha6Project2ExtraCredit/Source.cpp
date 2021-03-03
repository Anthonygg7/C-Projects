/* Programmer: Luis Garcia
   Purpose: 
   Write a program that determines which of a company's four divisions 
   (Northeast , Southeast , Northwest, and Southwest) had the greatest sales
   for a quarter. It should include the following two functions, which are called by main.

	double get Sal es () is passed the name of a division. It asks the user for a division's
	quarte rly sales figure, validates that the input is not less than 0, then returns it. 
	It should be called once for each division.

	void fi ndHi ghest () is passed the four sales totals. It determines which is the 
	largest and prints the name of the high grossing division, along with its sales figure.
    Date Modified: 02/26/2021
    Compiler: VS VC++ 2019
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


double getSales(string);
void findHighest(double, double, double, double);

int main()
{
	double NE, SE, NW, SW;

	cout << "\nThis program determines which of a companys "
		<< "four divisions had the greatest sales.\n";

	
	NE = getSales("Northeast");
	SE = getSales("Southeast");
	NW = getSales("Northwest");
	SW = getSales("Southwest");

	
	findHighest(NE, SE, NW, SW);
	return 0;
}

double getSales(string Division)
{
	double Sales;

	do
	{
		cout << "What is the " << Division;
		cout << " division's quarterly sales figure? ";
		cin >> Sales;

		if (Sales < 0.00)
			cout << "Error! Invaid sales figure.\n"
			<< "Dollar amount must be greater than $0.00\n";

	} while (!(Sales > 0.00));
	return Sales;
}


void findHighest(double NE, double SE, double NW, double SW)
{
	double Hightest;

	cout << "\nThe Hightest grossing division is the ";

	if (NE > SE && NE > NW && NE > SW)
	{
		Hightest = NE;
		cout << "Northeast ";
	}
	else if (SE > NE && SE > NW && SE > SW)
	{
		Hightest = SE;
		cout << "Southeast ";
	}
	else if (NW > SE && NW > NE && NW > SW)
	{
		Hightest = NW;
		cout << "Northwest ";
	}
	else
	{
		Hightest = SW;
		cout << "Southwest ";
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "division with $" << Hightest << " in sales.\n";

	system("pause");
}