/* Programmer: Luis Garcia
   Purpose: Modify the Movie Data program written for Programming Challenge 8 to
   include two more members that hold the movie's production costs and first-year
   revenues. The constructor should be modified so that all six member values can
   be specified when a Movi eData variable is created . Modify the function that 
   displays the movie data to display the title, director, release year, running time,
   and first year's profit or loss. Also, improve the program by having the Movi eData
   variables passed to the display function as constant references.
   Date Modifed: 02/25/2021
   Compiler: MS VC++2019
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct MovieData
{
	string Title,
		Director;
	int    YrReleased,
		RuningTime;
	double ProductionCost,
		FirstYrRev;

	
	MovieData(string T, string D, int YR, int RT, double PC, double FR)
	{
		Title = T;
		Director = D;
		YrReleased = YR;
		RuningTime = RT;
		ProductionCost = PC;
		FirstYrRev = FR;
	}
};




void displayinfo(MovieData);

int main()
{
	MovieData Movie1("White Shark", "Alaska Blue", 2021, 240, 1000000, 7000000);
	MovieData Movie2("Pass on", "Movie Dell", 2010, 140, 1000000, 500000);

	displayinfo(Movie1);
	displayinfo(Movie2);

	return 0;
}


void displayinfo(MovieData M)
{
	cout << "\n\n       Move information       \n"
		<< "------------------------------\n";
	cout << "Title                      : " << M.Title << endl;
	cout << "Director                   : " << M.Director << endl;
	cout << "Year Released              : " << M.YrReleased << endl;
	cout << "RuningTime (minutes)       : " << M.RuningTime << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "First year’s profit or loss: $" << M.FirstYrRev - M.ProductionCost << endl;

	system("pause");
	
}
