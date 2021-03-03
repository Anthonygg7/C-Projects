/* Programmer: Luis Garcia
   Purpose: Design a Ti ps class that calculates the gratuity on a restauran t meal.
   Its only class member variable, t axRat e, should be set by a one-parameter constructor
   to whatever rateispassedtoitwhenaTips objectiscreated.Ifnoargumentispassed,adefaulttax 
   rate of .065 should be used. The class should have just one public function, compute Tip.
   This function needs to accept two arguments, the total bill amount and the tip rate. It
   should use this information to compute what the cost of the meal was before the tax was
   added. It should then apply the tip rate to just the meal cost portion of the bill to 
   compute and return the tip amount. Demonstrate the class by creating a program that
   creates a single Ti ps object, then loops multiple times to allow the program user to 
   retrieve the correct tip amoun t using various bill totals and desired tip rates.
   Date modifed: 03/02/2021
   Compiler: MS VC++ 2019
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Tips
{
private:
	double taxrate;		    	

public:
	Tips(double rate)    		
	{                          	
		if (rate >= 0)
			taxrate = rate;
		else
			taxrate = .065;
	}
	double computeTip(double, double);
};


double Tips::computeTip(double totalbill, double tiprate)
{
	double mealCost = totalbill / (1 + taxrate);
	double tipAmount = mealCost * tiprate;

	return tipAmount;
}

int main()
{
	char yn;  			

	double taxrate;			
	double tipAmount;			
	double totalbill;			
	double tippercent;			
	double mealCost;		
	double tiprate;		

	cout << "Enter the tax rate.";
	cin >> taxrate;
	
	taxrate = taxrate / 100;

	Tips tipHelper(taxrate);

	do
	{
		cout << "\n\n\n************* Tip Helper *********** \n\n";

		cout << "Enter the total amount of the meal including tax.\n";
		cin >> totalbill;

		cout << "Enter the % tip you want to leave.\n";
		cin >> tippercent;

		tippercent = tippercent / 100;

		tipAmount = tipHelper.computeTip(totalbill, tippercent);

		cout << "Your tip is " << setprecision(2) << fixed << tipAmount << ".\n";

		cout << "Do you want to compute another tip (Y/N)?\n";
		cin >> yn;
	}

	while (yn == 'y' || yn == 'Y');

	system("pause");
	return 0;

}