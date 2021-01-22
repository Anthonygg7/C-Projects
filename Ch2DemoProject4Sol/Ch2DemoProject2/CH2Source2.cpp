/* Programmer: Luis Garcia
   Purpose: Write a program that computes the tax and tip on a
   restauran t bill for a patron with a $44.50 meal charge.
   The tax should be 6.75 percent of the meal cost. The tip
   should be 15 percent of the total after adding the tax.
   Display the meal cost, tax amount, tip amount, and total bill on the screen.
   Date modified: 01/10/21
   Compiler: MS VC++ 2019
*/
#include <iostream>
using namespace std;

int main()
{
    const float TAX = .0675,
        TIP = .15;

    float meal_charge = 44.50,
        meal_tax_amount = meal_charge * TAX,
        meal_tip_amount = (meal_charge + meal_tax_amount) * TIP,
        total_bill = meal_charge + meal_tax_amount + meal_tip_amount;

    cout << "\nMeal cost: $" << meal_charge << endl;
    cout << "Tax amount: $" << meal_tax_amount << endl;
    cout << "Tip amount: $" << meal_tip_amount << endl;
    cout << "Total bill: $" << total_bill << endl;
    system("pause");
    return 0;
}


