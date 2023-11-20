#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
// Carson Stary, CIS114

int main() {
	const int PLAYERS = 3;

	string* userNames = new string[PLAYERS];
	int* userAges = new int[PLAYERS];
	double* userPPG = new double[PLAYERS];

	for (int i = 0; i < PLAYERS; i++) {
		cout << "Enter the name of player " << i+1 << " : ";
		getline(cin, *(userNames + i));

		cout << "Enter the age of player " << i+1 << " : ";
		cin >> *(userAges + i);
		cin.ignore();

		cout << "Enter the PPG of player " << i+1 << " : ";
		cin >> *(userPPG + i);
		cin.ignore();

		cout << endl;
	}

	for (int j = 0; j < PLAYERS; j++) {
		cout << "Name: " << *(userNames + j) << endl;
		cout << "Age: " << *(userAges + j) << endl;
		cout << "PPG: " << fixed << setprecision(1) << showpoint << *(userPPG + j) << endl;
		cout << endl;
	}
}
