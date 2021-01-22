/*Programmer: Luis Garcia
* Purpose: Write a program that asks the user to
  enter two numbers. The program shou ld use the 
  conditional operator to determine which number 
  is the smaller and which is the larger.
  Date Modified: 01/25/2021
  Compiler: MS VS++ 2019
*/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int num1,
        num2;

   
    cout << endl;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    
    cout << endl;

    // Use a decision structure to determine largest and smallest num
    if (num1 < num2)
    {
        cout << "Number 1 (" << num1 << ")";
        cout << " is smallest" << endl;

        cout << "Number 2 (" << num2 << ")";
        cout << " is largest" << endl;
    }
    else
    {
        cout << "Number 1 (" << num1 << ")";
        cout << "is largest" << endl;

        cout << "Number 2 (" << num2 << ")";
        cout << " is smallest" << endl;
    }

    
    cout << endl;

    system("Pause");
    return 0;
}