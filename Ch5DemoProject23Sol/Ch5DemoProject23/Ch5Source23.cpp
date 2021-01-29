/* Programmer: Luis Garcia
*  Purpose: Write a program that uses nested 
   loops to display the arrowhead pattern shown below.
           +
           +++
           ++++
      ++++++++++++
           ++++
           +++
           +
    Date Modified: 01/31/2021
    Compiler: MS VS++ 2019
*/

#include <iostream>
using namespace std;

int main()
{
	int EndL = 1;

	for (int Row = 1; Row <= 7; Row++)
	{	// Create arrow tail
		if (Row == 4)
			cout << "    ++++++";
		else
			cout << "         ";

		// Display each line at head of arrow
		for (int L = 1; L <= EndL; L++)
		{
			cout << "+";
		}

		cout << endl; // End row

		// Increment and decrement the number of iterations of the inner loop.
		if (Row < 4)
			EndL++;
		else
			EndL--;
	}

	system("pause");
	return 0;
}