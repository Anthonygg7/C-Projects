/* Programmer: Luis Garcia
*  Purpose: Running on a particu lar treadmill,
   you burn 3.9 calories per minute. Write a program
   that uses a loop to display the number of calories
   burned after 5, 10, 15, 20, 25, and 30 minutes.
   Date Modified: 01/31/2021
   Compiler: MS VS++ 2019
*/

#include <iostream>
using namespace std;
int main()
{
    const float CALORIES_BURNED_PER_MIN = 3.9;

    float calories_burned = 0;

    for (int i = 5; i <= 30; i += 5)
    {
        calories_burned = (i * CALORIES_BURNED_PER_MIN);

        cout << "Calories burned after " << i
            << " minutes = "
            << calories_burned
            << endl;
    }

    system("pause");
    return 0;
}