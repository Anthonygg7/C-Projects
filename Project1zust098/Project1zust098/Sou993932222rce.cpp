#include <iomanip>
#include <ctime>
#include <iostream>

using namespace std;
int main()
{
	const double Price1 = 10.5, Price2 = 8.5, Price3 = 6.5, Price4 = 5.5;
	const double discountprice = 0.15;
	float tax = 0.86;
	
		int books, price, discountPrice = 0.0;
	
	
	cout << "Please enter how many E-books have been orderd.\n";
	cin >> books;
	cout << fixed << setprecision(2);

	while (books <= 0)

	{
		cout << "Sorry, no negative numbers. Please re-renter books number";
		cin >> books;
	}
	if (books <= 10)
	{
		price = books * Price1;
		if (price >= 200)
		{
			discountPrice = price * tax;
		}

		cout << "Total sales price is $" << (price - discountPrice) * 1.086 << ".\n";
		
		
	}
	else if (books >= 10 && books <= 20)
	{
		price = books * Price2;
		if (price >= 200)
		{
			discountPrice = price;
		}
		cout << "Total sales price is $" << (price - discountPrice) * 1.086 << ".\n";

	}
	else if (books >= 21 && books <= 30)
	{
		price = books * Price3;
		if (price >= 200)
		{
			discountPrice = price;
		}
		cout << " Total sales price is $" << (price - discountPrice) * 1.086 << ".\n";
	}
	else if (books >= 31)
	{
		price = books * Price4;
		if (price >= 200)
		{
			discountPrice = price;
		}
		cout << "Total sales price is $" << (price - discountPrice) * 1.086 << ".\n";
	}

	system("pause");
	return 0;

}