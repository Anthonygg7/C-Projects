/* Programmer: Luis Garcia
* Purpose: Madison County provides a $5000 homeowner exemption
  for senior citizens. For example, if their house is valued at
  $158,000 its assessed value wou ld be $94,800, as explained above.
  However they would only pay tax on $89,800 . At last year's tax rate
  of $2.64 for each $100 of assessed value, their property tax would be
  $2370.72. In addit ion to the tax break, senior citizens are allowed to
  pay their property tax in four equa l payments. The quar terly payment due
  on this property wou ld be $592.68. Write a program that asks the user to
  input the actual value of a piece of property and the current tax rate for
  each $100 of assessed value. The program should then calculate and report
  how much annua l property tax a senior homeowner will be charged for this
  property and what their quarterly tax bill will be.
   Date Modified: 01/16/2021
   Compiler: MS VC++ 2019
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constant Variables
    const float ASSESSMENT_PER = 0.60;

    const int   FIVE_THOUSAND = 5000,
        HUNDRED = 100,
        FOUR = 4;

    // Variables
    float value_of_property,
        current_tax_rate,
        total_annual_property_tax,
        quarterly_tax_bill;

    cout << endl;
    cout << "------------------------------------------\n";
    cout << "What is the value of the property? ";
    cin >> value_of_property;
    cout << "What is tha current tax rate? ";
    cin >> current_tax_rate;
    cout << "------------------------------------------\n";

    // Calculate annual property tax for senior homeowner
    total_annual_property_tax = (((value_of_property * ASSESSMENT_PER) - FIVE_THOUSAND) / HUNDRED) * current_tax_rate;

    // Calculate the quarterly tax bill
    quarterly_tax_bill = total_annual_property_tax / FOUR;

    // Display annual property tax and quarterly tax bill.
    cout << setprecision(2) << fixed << right;
    cout << "-------------------------------------------\n";
    cout << "Value of the property: $";
    cout << setw(11) << value_of_property;

    cout << "\nAnnual property tax:   $";
    cout << setw(11) << total_annual_property_tax;

    cout << "\nQuarterly tax bill:    $";
    cout << setw(11) << quarterly_tax_bill;

    cout << "\n-----------------------------------------\n";
    cout << endl;

    system("pause");
    return 0;
}