/* Programmer: Luis Garcia
* Purpose: oe's Pizza Palace needs a program to calculate the number of slices a pizza 
  of any size can be divided into. The program should perform the following steps:

A) Ask the user for the diameter of the pizza in inches.
B) Divide the diameter by 2 to get the radius.
C) Calculate the number of slices that may be taken from a pizza of that size if
   each slice has an area of 14.125 square inches.
D) Display a message telling the number of slices.

   The number of square inches in the total pizza can be calculated with this formula:
   
		Area= 1tr2
   where variable r is the radius of the pizza and 1t is the Greek letter Pl. In your program
   make PI a named constant with the value 3.14. Display the number of slices as a whole 
   number (i.e., with no decimals).
   Date Modified: 01/16/2021
   Compiler: MS VC++ 2019
*/

#include <iostream>
#include <iomanip>  // Formatting

using namespace std;

int main()
{
    // Variables
    const float BROKER_COM_PER = .02,
        PRICE_PAID_PER_SHARE = 45.50,
        PRICE_SOLD_PER_SHARE = 47.92;

    const int NUM_OF_SHARES = 100;

    float joes_stock_purchase,
        total_com_paid_bought,
        total_com_paid_sold,
        amount_stock_sold_for,
        amount_of_profit;

    // Explain program
    cout << endl;
    cout << "*****************************************\n\n";
    cout << "Last month Joe purchased some stock in \n";
    cout << "Stock Transaction . Here are the details\n";
    cout << "of the purchase: \n";
    cout << "• The number of shares that Joe purchased\n";
    cout << "  was 100.\n";
    cout << "• When Joe purchased the stock, he paid \n"; cout << "  $45.50 per share.\n";
    cout << "• Joe paid his stockbroker a commission \n";
    cout << "  that amounted to 2% of the amount he \n";
    cout << "  paid for the stock.\n\n";
    cout << "Two months later Joe sold the stock. \n";
    cout << "Here are the details of the sale:\n";
    cout << "• The number of shares that Joe sold was\n";
    cout << "  100.\n";
    cout << "• He sold the stock for $47.92 per share.\n";
    cout << "• He paid his stockbroker another\n";
    cout << "  commission that amounted to 2% of the \n";
    cout << "  amount he received for the stock.\n\n";
    cout << "*****************************************\n\n";

    // Calculate
    joes_stock_purchase = NUM_OF_SHARES * PRICE_PAID_PER_SHARE;

    total_com_paid_bought = joes_stock_purchase * BROKER_COM_PER;

    amount_stock_sold_for = NUM_OF_SHARES * PRICE_SOLD_PER_SHARE;

    total_com_paid_sold = amount_stock_sold_for * BROKER_COM_PER;

    amount_of_profit = (amount_stock_sold_for - (total_com_paid_bought + total_com_paid_sold)) - joes_stock_purchase;

    // Display information:
    cout << setprecision(2) << fixed << endl;

    cout << "Amount paid for the stock: ";
    cout << joes_stock_purchase << endl;

    cout << "Amount commission paid when bought stock: ";
    cout << total_com_paid_bought << endl;

    cout << "Amount Joe sold stock for: ";
    cout << amount_stock_sold_for << endl;

    cout << "Amount commission paid when stock sold: ";
    cout << total_com_paid_sold << endl;

    cout << "Amount of profit Joe made after selling stock and\n";
    cout << "paying two commissions to broker ";
    cout << amount_of_profit << '\n' << endl;
    cout << "*****************************************\n\n";

    return 0;
}

