#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;
// Carson Stary, CIS114

void letterGrade(int, int);
struct grades {
	string name;
	double grade;
	char letter;
};

const int USERS = 3;
grades studentGrades[USERS];
int main() {
	for (int i = 0; i < USERS; i++) {
		if (i > 0) cin.ignore();
		cout << "Enter Student number " << i + 1 << "'s name: ";
		getline(cin, studentGrades[i].name);
		cout << "Enter Student number " << i + 1 << "'s average: ";
		cin >> studentGrades[i].grade;
		letterGrade(studentGrades[i].grade, i);
	}

	cout << endl << endl << "CIS 114 Grades" << endl << "**************" << endl;
	for (int j = 0; j < USERS; j++) {
		cout << "Student name: " << studentGrades[j].name << endl;
		cout << "Average: " << fixed << setprecision(1) << showpoint << studentGrades[j].grade << endl;
		cout << "Grade: " << studentGrades[j].letter << endl << endl;
	}
}

void letterGrade(int grade, int i) {
	if (grade >= 90) {
		studentGrades[i].letter = 'A';
	}
	else if (grade >= 80) {
		studentGrades[i].letter = 'B';
	}
	else if (grade >= 70) {
		studentGrades[i].letter = 'C';
	}
	else if (grade >= 60) {
		studentGrades[i].letter = 'D';
	}
	else {
		studentGrades[i].letter = 'F';
	}
}
