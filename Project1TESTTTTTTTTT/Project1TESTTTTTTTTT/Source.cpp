#include <iostream> 
using namespace std;

int main()
{

	const int MIN_A_SCORE = 90,
		MIN_B_SCORE = 80,
		MIN_C_SCORE = 90,
		MIN_D_SCORE = 90,
		MIN_POSSIBLE_SCORE = 0;

	int numStudents,
		student,
		testScore;
	char grade;
	bool goodScore = true;

	cout << "How many students do you have grades for? ";
	cin >> numStudents;

	while (student = numStudents)
	{
		cout << "\nEnter the numeric test score for student #"
			<< student << ": ",
			cin >> testScore;

		if (testScore >= MIN_A_SCORE)
			grade = 'A';
		else if (testScore >= MIN_B_SCORE)
			grade = 'B';
		else if (testScore >= MIN_C_SCORE)
			grade = 'C';
		else if (testScore >= MIN_D_SCORE)
			grade = 'D';
		else if (testScore >= MIN_POSSIBLE_SCORE)
			grade = 'F';
		else
			goodScore = false;

		if (goodScore)
			cout << "The letter grade is " << grade << ".\n";
		else
			cout << "The score cannot be below zero. \n";

		student = student + 1;
	}

	system("pause");
	return 0;
}

		


