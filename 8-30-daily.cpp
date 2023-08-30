#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// LEX F, YASEMIN O, CARSON S :3

int main() {
	// Define variables as specified by assignment, using a double for day1/day2/day3 and empty total
	double total,
		day1 = 235.524,
		day2 = 100.3,
		day3 = 361.78;

	// Print out strings "Sales Amounts" and dashes for formatting purposes, then end each line
	cout << "Sales Amounts" << endl;
	cout << "-------------" << endl;

	// Set width to 4, add a space for formatting purposes
	// Set decimal precision to 2 places, fixed at the point and show any extra zero (ie: 2.1 -> 2.10)
	cout << "Day 1: $" << setw(10) << setprecision(2) << fixed << showpoint << day1 << endl;
	cout << "Day 2: $" << setw(10) << setprecision(2) << fixed << showpoint << day2 << endl;
	cout << "Day 3: $" << setw(10) << setprecision(2) << fixed << showpoint << day3 << endl;

	// Use the pre-defined total variable to add up the day1/day2/day3 doubles
	total = day1 + day2 + day3;

	// Print out our final total using the newly defined variable in the same format as the other printed lines
	cout << "Total: $" << setw(10) << setprecision(2) << fixed << showpoint << total << endl;
}