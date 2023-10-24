#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	const int ROWS = 3,
		COLUMNS = 4;

	double sales[ROWS][COLUMNS],
		sales_info[ROWS * COLUMNS];
	int sales_index = 0;

	cout << "This program will calculate the total sales of " << endl;
	cout << "all the company's divisions." << endl;
	cout << "Enter the following sales information:" << endl << endl;

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			cout << "Division " << i + 1 << ", Quarter " << j + 1 << ": $";
			cin >> sales_info[sales_index];
			sales_index++;
		}
		cout << endl;
	}

	double total = 0;
	for (int k = 0; k < sales_index; k++) {
		total += sales_info[k];
	}
	cout << "The total sales for the company are: $" << fixed << setprecision(2) << showpoint << total << endl;
}
