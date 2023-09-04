#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	string fname,
		lname,
		address,
		city,
		state,
		middle,
		zip;

	// getline() requires string; middle should be char, zip should be int
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

	double loan,
		interest;
	int duration;

	cout << endl << endl << "Thank you for your personal information!" << endl;
	cout << "How much do you want to borrow?: ";
	cin >> loan;
	cout << "What is the current ANNUAL interest rate?(ex. 0.12 = 12%): ";
	cin >> interest;
	cout << "What is the duration of the loan?(in months): ";
	cin >> duration;

	// SPACING PROBLEMS -- SO MANY SPACING PROBLEMS!!
	// Spacing will change if you put a longer or shorter input
	cout << endl << "Loan Calculator" << endl;
	cout << "---------------" << endl;
	cout << "Name: " << setw(21) << fname << " " << middle << ", " << lname << endl;
	cout << "Address: " << setw(29) << address << endl;
	cout << "City/State: " << setw(16) << city << ", " << state << endl;
	cout << "Zip code: " << setw(17) << zip << endl << endl;

	// Numbers seem incorrectly rounded? 0.01 off from template
	cout << "Loan amount: " << setw(10) << "$" << fixed << setprecision(2) << showpoint << loan << endl;
	cout << "Yearly interest rate: " << fixed << setprecision(2) << showpoint << interest << endl;
	cout << "Number of payments: " << setw(4) << duration << endl;

	double monthlyinterest = interest/12,
		payment = loan * ((monthlyinterest*pow((1+monthlyinterest),duration))/(pow((1+monthlyinterest),duration)-1)),
		payback = payment * duration,
		paidinterest = payback - loan;

	cout << "Monthly payment: " << setw(6) << "$" << fixed << setprecision(2) << showpoint << payment << endl;
	cout << "Amount paid back: " << setw(5) << "$" << fixed << setprecision(2) << showpoint << payback << endl;
	cout << "Interest paid: " << setw(8) << "$" << fixed << setprecision(2) << showpoint << paidinterest << endl;

	cin.ignore();

}
