#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main() {
	int group;
	cout << "Season Ticket Menu" << endl;
	cout << "*******************" << endl;
	cout << "Which ticket group are you interested in?" << endl;
	cout << "1. Lower Level" << endl;
	cout << "2. Upper Level" << endl;
	cout << "3. Luxury Box" << endl;
	cout << "4. Quit the Program" << endl;
	cout << "Enter your choice: ";
	cin >> group;

	const double LOWER_TICKET = 200.00,
		UPPER_TICKET = 100.00,
		LUXURY_TICKET = 250.00;

	int tickets;
	double total;

	switch (group) {
	case 1: {
		cout << "How many Tickets do you want? ";
		cin >> tickets;

		total = (tickets * LOWER_TICKET);
		cout << "The total amount is $" << fixed << setprecision(2) << total << endl;
		break;
	}
	case 2: {
		cout << "How many Tickets do you want? ";
		cin >> tickets;

		total = (tickets * UPPER_TICKET);
		cout << "The total amount is $" << fixed << setprecision(2) << total << endl;
		break;
	}
	case 3: {
		cout << "How many Tickets do you want? ";
		cin >> tickets;

		total = (tickets * LUXURY_TICKET);
		cout << "The total amount is $" << fixed << setprecision(2) << total << endl;
		break;
	}
	case 4:
		cout << "Program ending." << endl;
		break;
	default:
		cout << "The valid choices are 1 through 4. Run the" << endl;
		cout << "program again and select one of those." << endl;
		break;
	}
}
