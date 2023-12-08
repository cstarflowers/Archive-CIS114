#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;
// Carson Stary, CIS114
// Meet the requirements of three challenges using while loops

int main() {
	// CHALLENGE NUMBER ONE
	double value = 0.01;
	int days = 0;

	while (days < 31) {
		value = (value * 2);
		days++;
	}

	cout << "If you doubled a penny every day for a month, you would have $" << value << "!" << endl;
	cout << endl;

	// CHALLENGE NUMBER TWO
	int input,
		oldinput = 0;

	cout << "What number would you like to input: ";
	cin >> input;
	int greatest = input,
		least = input;

	while (input >= 0) {
		cout << "What number would you like to input: ";
		oldinput = input;
		cin >> input;

		if (oldinput > greatest) {
			greatest = oldinput;
		}
		else if (oldinput < least) {
			least = oldinput;
		}
	}

	if (input < 0) {
		cout << endl << "That number is negative! Program stopped." << endl;
		cout << "Your greatest number was " << greatest << endl;
		cout << "Your least number was " << least << endl;
	}
	cout << endl;

	// CHALLENGE NUMBER THREE
	int originalsize;
	cout << "How big would you like your square?: ";
	cin >> originalsize;

	int squaresize = originalsize,
		difference = 0;

	while (squaresize > 0) {
		difference = originalsize - squaresize;
		int rowsleft = squaresize + difference;

		while (rowsleft > 0) {
			cout << "X";
			rowsleft--;
		}

		cout << endl;
		squaresize--;
	}
	cout << endl;
}
