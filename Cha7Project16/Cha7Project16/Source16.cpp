/*Programmer: Luis Garcia
  Purpose: Write a program that demonstrates the Coin class. The program should
  create an instance of the class and display the side that is initially facing up. 
  Then, use a loop to toss the coin 20 times. Each time the coin is tossed, display 
  the side that is facing up. The program should keep count of the number of times heads
  is facing up and the number of times tails is facing up, and display those values after
  the loop finishes.
  Date Modified: 03/03/2021
  Compiler: MS VC++ 2019
*/
#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>


using namespace std;
int coinToss(void) {
	int randomNumber;
	randomNumber = 1 + rand() % 2;

	return randomNumber;
}
int main() {

	int howManyTimes = 0;
	int randomNumber = 0;
	string headTail = "";

	cout << "how man times would you like to toss the coin?: ";
	cin >> howManyTimes;

	srand((time(0)));

	for (int i = 1; i <= howManyTimes; i++) {
		randomNumber = coinToss();
		if (randomNumber == 1)
			headTail = "head";
		else
			headTail = "tail";
		cout << headTail << endl;

	}

	system("pause");
	_getch();
}