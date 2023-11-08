#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
// Carson S, CIS114, Sales by Division
// A program that uses arrays to combine the quarterly gains and divisions of a company into a total profit amount

int main() {
	// Define the dimensions of our 2D Array at 3 rows and 4 columns
	const int ROWS = 3,
		COLUMNS = 4;

	// Create a new double array with the above dimensions
	// Then, create a singular array with the same slot count as the 2D Array (rows * columns)
	// Create an integer called sales_index to count the indices of this singular sales_info array
	double sales[ROWS][COLUMNS],
		sales_info[ROWS * COLUMNS];
	int sales_index = 0;

	// Print out a notice stating what this program will calculate
	// Prompt the user to enter the sales information required
	cout << "This program will calculate the total sales of " << endl;
	cout << "all the company's divisions." << endl;
	cout << "Enter the following sales information:" << endl << endl;

	// For every slot of sales[] -- both the rows and columns:
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			// Print out the division and quarter we're calculating with a dollar sign appended
			// Add one to the row count and column count to serve as division/quarter counts (given they start at 0 by default)
			// Prompt the user to enter the cash for the quarter and division defined with our for loops
			cout << "Division " << i + 1 << ", Quarter " << j + 1 << ": $";
			// Take in the dollar amount as the sales_index of sales_info (corresponding with the rows and columns of our 2D Array)
			cin >> sales_info[sales_index];
			// Since the previous index is now full, add one to the sales_index for the next row-column combination
			sales_index++;
		}
		cout << endl;
	}

	// Define a double variable to hold our divisions' total profits
	double total = 0;
	// For every slot of sales_index -- sales[]'s row and column counts multiplied:
	for (int k = 0; k < sales_index; k++) {
		// Add each index (containing quarterly counts) to our total amount 
		total += sales_info[k];
	}
	// Once each index has been added, print out the total with 2-point precision and zeros shown
	cout << "The total sales for the company are: $" << fixed << setprecision(2) << showpoint << total << endl;
}
