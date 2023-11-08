#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;
// Carson Stary, CIS114, Ticket Sales (Program 2)
// A program to calculate the cost of tickets at a venue using user input

int main() {
	// Define a variable for the selection the user makes, print out possible choices and a prompt
	int group;
	cout << "Season Ticket Menu" << endl;
	cout << "*******************" << endl;
	cout << "Which ticket group are you interested in?" << endl;
	cout << "1. Lower Level" << endl;
	cout << "2. Upper Level" << endl;
	cout << "3. Luxury Box" << endl;
	cout << "4. Quit the Program" << endl;
	cout << "Enter your choice: ";
	// Take in the users choice (1-4) as the group variable defined above
	cin >> group;

	// Define the prices of tickets for this venue
	// Because these prices do not change, they have been made constants (const, all caps)
	// Similarly, because the prices have .00 after their base number, they have been made doubles
	const double LOWER_TICKET = 200.00,
		UPPER_TICKET = 100.00,
		LUXURY_TICKET = 250.00;

	// Define the rest of the variables we're going to be using
	// One for the amount of tickets the user wants to purchase, and the other for the final cost
	int tickets;
	double total;

	// Take the group variable and check if its value is 1, 2, 3, 4, or something else
	// Only the corresponding case will be executed
	switch (group) {
	case 1:
		// Prompt the user asking how many tickets they'd like
		// Then, take in that number as the tickets variable
		cout << "How many Tickets do you want? ";
		cin >> tickets;

		// Perform multiplication between the ticket number and ticket cost to get the total price
		// Then, set this number to total and print it out 
		// (formatted as if it were money -- fixed decimal place, 2-place precision to add .00)
		total = (tickets * LOWER_TICKET);
		cout << "The total amount is $" << fixed << setprecision(2) << total << endl;
		break;
	case 2:
		// Ditto, replace lower_ticket value with the upper_ticket constant based on users choice
		cout << "How many Tickets do you want? ";
		cin >> tickets;

		total = (tickets * UPPER_TICKET);
		cout << "The total amount is $" << fixed << setprecision(2) << total << endl;
		break;
	case 3:
		// Ditto, replace upper_ticket value with the luxury_ticket constant based on users choice
		cout << "How many Tickets do you want? ";
		cin >> tickets;

		total = (tickets * LUXURY_TICKET);
		cout << "The total amount is $" << fixed << setprecision(2) << total << endl;
		break;
	case 4:
		// Print that the program is ending, then break from the switch() statement
		// Will completely stop the program as specified by the user choice section
		cout << "Program ending." << endl;
		break;
	default:
		// If the user did not enter 1-4, print a message stating such
		// Ask the user to run the program again to input the correct number
		cout << "The valid choices are 1 through 4. Run the" << endl;
		cout << "program again and select one of those." << endl;
		break;
	}
}
