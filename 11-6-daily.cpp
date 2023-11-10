#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;
// Carson Stary, CIS114

struct movies {
	string mName;
	int mYear;
	double mBoxOffice;
};

int main() {
	movies userOne;

	cout << "User One's Movie:" << endl;

	cout << "What's the movie's name?: ";
	getline(cin, userOne.mName);
	cout << "What is the movie's year?: ";
	cin >> userOne.mYear;
	cout << "What amount did they make in the box office?: ";
	cin.ignore();
	cin >> userOne.mBoxOffice;

	cout << endl << "Movie Data:" << endl;
	cout << "User 1 Movie: " << userOne.mName << endl;
	cout << "User 1 Year: " << userOne.mYear << endl;
	cout << "User 1 Box Office: $" << fixed << setprecision(2) << showpoint << userOne.mBoxOffice << endl;
}
