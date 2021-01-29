/* Programmer: Luis Garcia
*  Purpose: Write a program that uses a loop
   to display the characters for each ASCII code
   32 through 127. Display 16 characters on each 
   line with one space between characters.
   Date Modified: 01/30/2021
   Compiler: MS VS++ 2019
*/

#include <iostream>
using namespace std;
int main()
{
    char ascii_code_number;

    for (int i = 32; i <= 127; i++)
    {
        ascii_code_number = i;
        cout << ascii_code_number << " ";

        if (i % 16 == 32)
            cout << endl;
    }
    cout << endl
        << endl;

    system("pause");
    return 0;
}

