/* Programmer: Luis Garcia
   Purpose: Write a program that computes the total
   sales tax on a $95 purchase. Assume the state sales
   tax is 6.5 percent and the county sales tax is 2 percent.
   Display the purchase price, state tax, county tax, and total
   tax amounts on the screen.
   Date modified: 01/10/2021
   Compiler: MS VC++ 2019
*/

#include <iostream>
using namespace std;

int main()
{
    const float STATE_TAX = .065,
        COUNTY_TAX = .02;
    int purchase = 95;

    float total_state_purchase = purchase * STATE_TAX,
        total_county_purchase = purchase * COUNTY_TAX;

    cout << "The total state tax on $95 is $";
    cout << total_state_purchase << endl;
    cout << "The total county tax on $95 is $";
    cout << total_county_purchase << endl;
    system("pause");
    return 0;
}