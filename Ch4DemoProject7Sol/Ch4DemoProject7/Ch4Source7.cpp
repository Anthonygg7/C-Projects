/*Programmer: Luis Garcia
* Purpose: Write a program that asks the user to 
  enter a number of seconds.
* There are 86400 seconds in a day. If the number
  of seconds entered by the user is greater than or 
  equal to 86400, the program should display the number 
  of days in that many seconds.
* There are 3600 seconds in an hour. If the number of 
  seconds entered by the user is less than 86400 but is
  greater than or equal to 3600, the program should display
  the number of hours in that many seconds.
* There are 60 seconds in a minute. If the number of seconds
  entered by the user is less than 3600 but is greater than or
  equal to 60, the program should display the number of minutes
  in that many seconds.
  Date Modified: 01/25/2021
  Compiler: MS VS++ 2021
*/
#include <iostream>
#include <iomanip>  
using namespace std;

int main()
{
    // Variables
    int seconds;
    float num_mins;

    // Ask the user to enter a number of seconds
    cout << "\nEnter a number of seconds: ";
    cin >> seconds;

    // Format decimal percision at 2 decimal places.
    cout << setprecision(2) << fixed;

    // calculate
    if (seconds <= 59)
    {
        cout << seconds;
        cout << " is less that 60 seconds." << endl;
    }
    else if (seconds >= 60 && seconds < 3600)
    {
        num_mins = seconds / 60.0;
        cout << num_mins << " minutes in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 3600 && seconds < 86400)
    {
        num_mins = seconds / 3600.0;
        cout << num_mins << " hours in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 86400)
    {
        num_mins = seconds / 86400.0;
        cout << num_mins << " days in ";
        cout << seconds << " seconds" << endl;
    }

    cout << endl << endl; 

    system("pause");
    return 0;
}

