/* Programmer: Luis Garcia
   Purpose: Write a program that uses a structure named Movi eData to store the following information about a movie:
   Title
   Director
   Year Released
   Running time (in minutes)
  Include a constructor that allows all four of these member data values to be specified at the timeaMovieData variableiscreated.
  TheprogramshouldcreatetwoMovieData variables and pass each one in turn to a function that displays the information about the movie
  in a clearly formatted manner. Pass the Movi eData variables to the display function by value.
  Date Modified: 03/01/2021
  Compiler: MS VC++ 2019
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
	

	system("pause");

}
