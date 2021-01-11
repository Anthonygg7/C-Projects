/* Programmer: Luis Garcia
   Purpose: Write a program that stores the integers 
   50 and 100 in variables and stores the sum of these
   two in a variable named t ot al . Display the total on the screen.
   Date modified: 01/10/2021
   Compiler: MS VC++ 2019
*/

#include <iostream>
using namespace std;

int main()
{
    int fifty = 50,
        onehundred = 100,
        total = fifty + onehundred;

    cout << "Total = " << total << endl;
    system("pause");
    return 0;
}