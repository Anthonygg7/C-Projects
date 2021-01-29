/* Programmer: Luis Garcia
*  Purpose: Write a program with a loop that lets
   the user enter a series of integers, followed by
   -99 to signal the end of the series. After all the
   numbers have been entered, the program should display
   the largest and smallest numbers entered .
   Date Modified: 1/31/2021
   Compiler: MS VS++ 2019
*/
#include <iostream>
using namespace std;
int main()
{
    const int SENTINEL_VALUE = -99;
    int num,
        min,
        max;

    cout << "This program will display the greatest\n"
        << "and the least values.\n"
        << "Enter a number to begin and enter -99\n"
        << "to quit the program."
        << "Enter a value: ";
    cin >> num; // Error 

    min = max = num;

    while (num != SENTINEL_VALUE)
    {
        if (num < min)
            min = num;

        if (num > max)
            max = num;

        cout << "Enter a value: ";
        cin >> num;

    }

    cout << "Smallest number is: " << min << endl;
    cout << "Largest number is: " << max << endl;

    system("pause");
    return 0;
}