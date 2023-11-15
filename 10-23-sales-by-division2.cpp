#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
// Lex Fagan & Carson Stary
// CIS114

int main() {
	const int ROWS = 3;
	const int COLS = 4;

	double sales[ROWS][COLS];
	double sales_info[ROWS][COLS];
	double total = 0;

	cout << "This program will calculate the total sales of " << endl;
	cout << "all the company's divisions." << endl;
	cout << "Enter the following sales information:" << endl;
	cout << endl;

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << "Divisions " << i + 1 << ", Quarter " << j + 1 << ": $";
			cin >> sales_info[i][j];
			total = total + sales_info[i][j];
		}
		cout << endl;
	}
	cout << "The total sales for the company are: $" << fixed << setprecision(2) << showpoint << total << endl;
}

