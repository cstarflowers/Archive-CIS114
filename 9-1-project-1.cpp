#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cstdlib>

using namespace std;
// CARSON S. -- CIS114

int main() {
	// Define all variables as strings so they're compatible with getline()
	string fname,
		lname,
		address,
		city,
		state,
		middle,
		zip;

	// Ask questions and use getline() to set user input to appropriate variables
	cout << "Please enter your first name: ";
	getline(cin, fname);
	cout << "Please enter your last name: ";
	getline(cin, lname);
	cout << "Please enter your middle initial: ";
	getline(cin, middle);
	cout << "Please enter your mailing address: ";
	getline(cin, address);
	cout << "Please enter your city: ";
	getline(cin, city);
	cout << "Please enter your state: ";
	getline(cin, state);
	cout << "Please enter your zip code: ";
	getline(cin, zip);

	// Set new variables for the loan calculations remaining
	// Set loan and interest to a double (to add .00 to the end), then the months as an integer
	double loan,
		interest;
	int duration;

	// Create two new lines for spacing purposes then thank the user for their personal information before filling the remaining variables
	cout << endl << endl << "Thank you for your personal information!" << endl;
	// Ask questions to the user and apply their answers to the loan, interest, and duration variables
	cout << "How much do you want to borrow?: ";
	cin >> loan;
	cout << "What is the current ANNUAL interest rate?(ex. 0.12 = 12%): ";
	cin >> interest;
	cout << "What is the duration of the loan?(in months): ";
	cin >> duration;

	// Print out the calculator with setw() spacing to match the assignment's sample information
	// Format information as appropriate with spacing between variables and commas
	cout << endl << "Loan Calculator" << endl;
	cout << "---------------" << endl;
	cout << "Name: " << setw(21) << fname << " " << middle << ", " << lname << endl;
	cout << "Address: " << setw(29) << address << endl;
	cout << "City/State: " << setw(16) << city << ", " << state << endl;
	cout << "Zip code: " << setw(17) << zip << endl << endl;

	// Use the loan variables specified by the user with fixed variables, 2-point precision, and showing 0s at the end
	cout << "Loan amount: " << setw(10) << "$" << fixed << setprecision(2) << showpoint << loan << endl;
	cout << "Yearly interest rate: " << fixed << setprecision(2) << showpoint << interest << endl;
	cout << "Number of payments: " << setw(4) << duration << endl;

	// Define calculations based on the above loan variables for the remainder of the program
	// Use interest format defined by worksheet, then simple math for the rest 
	// (ie: interest paid is the total paid minus the original loan)
	double monthlyinterest = interest / 12,
		payment = loan * ((monthlyinterest * pow((1 + monthlyinterest), duration)) / (pow((1 + monthlyinterest), duration) - 1)),
		payback = payment * duration,
		paidinterest = payback - loan;

	// Use the calculations completed above, using the same precision and fixed-point formatting, to display the calculation's results
	cout << "Monthly payment: " << setw(6) << "$" << fixed << setprecision(2) << showpoint << payment << endl;
	cout << "Amount paid back: " << setw(5) << "$" << fixed << setprecision(2) << showpoint << payback << endl;
	cout << "Interest paid: " << setw(8) << "$" << fixed << setprecision(2) << showpoint << paidinterest << endl;

	// Fix issues with getline(cin, x) in the program
	cin.ignore();
}
