# C-Projects
Hey y'all, these examples come from my learning through Tony Gaddis, "Starting Out With C++", 9th Edition. Feel free to use.



/*  Programmer: Luis Garcia
	Purpose: Calculate an annual takehomw based on a gross amont and a flat tax rate
	Date modifed: 01/07/21
	Compiler: MS Vc++ 2019
*/
#include <iostream>
using namespace std;
int main()
{	//variables
	double annualgross = 90000.00;
	double incometaxrate = 0.15;
	double takehome, taxamount;
	 //Calculations 
	taxamount = annualgross * incometaxrate;
	takehome = annualgross - taxamount;
	//Display results 
	cout << "The incometax amount = $" << taxamount << "\n";
	cout << "Your income tax amount = $" << takehome << "\n";
	system("pause");
	return 0;
}
Output
The incometax amount = $13500
Your income tax amount = $76500
Press any key to continue . . .
