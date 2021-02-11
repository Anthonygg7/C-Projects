/* Programmer: Luis Garcia
*  Purpose: Assuming the level of the Earth's oceans continues
   rising at about 3.1 millimeters per year, write a program that
   displays a table showing the total number of millimeters the oceans
   will have risen each year for the next 25 years.
   Date Modified: 02/20/2021
   Compiler: MS VC++ 2019
*/

#include <iostream>
using namespace std;
int main()
{

	const float RISE_PER_YEAR = 3.1;
	
	float number_of_millimeters_each_year = 0;

	cout << "__________________________\n";
	for (int i = 1; i <= 25; i++)
	{
		number_of_millimeters_each_year += RISE_PER_YEAR;
		cout << "Year " << i << ":  "
			<< number_of_millimeters_each_year
			<< endl;
	}
	cout << "_______________________________\n";

	system("pause");

	return 0;
}