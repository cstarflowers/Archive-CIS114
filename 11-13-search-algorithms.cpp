#include <iostream>
#include <string>

using namespace std;
// Carson Stary, CIS114
// Functional -- Work In Progress

int main() {
	int numbers[] = { 1, 2, 3, 4, 7, 10, 20, 22, 25, 26, 34, 37, 38, 40, 41, 47, 49 },
		numElements = sizeof(numbers) / sizeof(numbers[0]),
		guess,
		middle,
		left = 0,
		right = numElements - 1,
		ctr = 1,
		index;

	cout << "Enter a number less than 50: ";
	cin >> guess;

	while (left <= right) {
		middle = left + (right - left) / 2;
		if (numbers[middle] == guess) {
			break;
		}

		if (numbers[middle] < guess) {
			left = middle + 1;
		}
		else {
			right = middle - 1;
		}
		ctr++;
	}

	for (index = 0; index < numElements; index++) {
		if (numbers[index] == guess) {
			break;
		}
	}

	cout << endl << "Number " << guess << " found at element " << index << endl;
	cout << "It took " << ctr << " comparison(s) using the Binary search algorithm." << endl;
	ctr = 1;

	for (int j = 0; j < numElements; j++) {
		if (numbers[j] == guess) {
			break;
		}
		ctr++;
	}

	cout << endl << "Number " << guess << " found at element " << index << endl;
	cout << "It took " << ctr << " comparison(s) using the Linear search algorithm." << endl;
}
