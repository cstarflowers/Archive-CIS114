#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
// Carson Stary, CIS114
// No Comments

double payment(int, double, int);

int main() {
	int loan,
		duration;
	double interest,
		function;

	cout << "How much do you want to borrow?: ";
	cin >> loan;
	cout << "What is the current ANNUAL interest rate?(ex. 0.12 = 12%): ";
	cin >> interest;
	cout << "What is the duration of the loan?(in months): ";
	cin >> duration;

	function = payment(loan, interest, duration);
	cout << "Monthly payment: $" << fixed << setprecision(2) << showpoint << function << endl;
}

double payment(int l, double i, int d) {
	double monthlyinterest = i / 12,
		payment = l * ((monthlyinterest * pow((1 + monthlyinterest), d)) / (pow((1 + monthlyinterest), d) - 1));
	
	return payment;
}
