/* Programmer: Luis Garcia
   Purpose: Design a class for a widget manufacturing plant. Assuming that 10 widgets 
   may be produced each hour, the class object will calculate how many days it will take
   to produce any number of widgets. (The plant operates two 8-hour shifts per day.)
   Write a program that asks the user for the number of widgets that have been ordered and
   then displays the number of days it will take to produce them. Think about what values 
   your program should accept for the number of widgets ordered.
   Date Modifed: 03/04/2021
   Compiler: MS VC++ 2019
*/

#include <iostream>
using namespace std;

class Widget
{
private:
	int shiftLength;        
	int shiftsPerDay;        
	double widgetsPerHour;      

public:
	
	Widget(int numShifts = 2, int perHr = 10, int numHrs = 8)
	{
		shiftsPerDay = numShifts; widgetsPerHour = perHr; shiftLength = numHrs;
	}

	double daysToProduce(int);
};

double Widget::daysToProduce(int numWidgets)
{
	double numDays = (numWidgets) /
		(shiftLength * shiftsPerDay * widgetsPerHour);
	return numDays;
}

int main()
{
	int    howMany;     
	double days;         
	Widget factory;      

	cout << "This program will calculate widget production time.\n";

	
	cout << "How many widgets are on order? ";
	cin >> howMany;
	while (howMany < 0)
	{
		cout << "Number must be 0 or greater.  Please re-enter: ";
		cin >> howMany;
	}

	days = factory.daysToProduce(howMany);


	cout << "\nIt will take " << days << " days to produce ";
	cout << howMany << " widgets.\n";

	system("pause");
	return 0;
}
