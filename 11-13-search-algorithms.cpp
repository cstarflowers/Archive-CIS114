#include <iostream>
#include <string>

using namespace std;
// Carson Stary, CIS114, Search Algorithms
// A program that uses two search algorithms (linear and binary) to search an array

int main() {
	// Define array of numbers specified by assignment
	int numbers[] = { 1, 2, 3, 4, 7, 10, 20, 22, 25, 26, 34, 37, 38, 40, 41, 47, 49 },
		// Define variable with the number of elements in the above aray
		numElements = sizeof(numbers) / sizeof(numbers[0]),
		// Define variable for the number we're finding
		guess,
		// Define variables used in binary searching
		middle,
		left = 0,
		right = numElements - 1,
		// Define the comparison count 
		ctr = 1,
		// Create a variable for what index our user's guess is at
		index;

	// Prompt the user for a number in the array (less than 50), then set it to guess
	cout << "Enter a number less than 50: ";
	cin >> guess;

	// Binary search algorithm:
	while (left <= right) {
		// Compare left, right, and middle values
		middle = left + (right - left) / 2;

		// If we've found the index, stop
		if (numbers[middle] == guess) {
			break;
		}
		// If the middle is less than the guess,
		// Increase left
		if (numbers[middle] < guess) {
			left = middle + 1;
		}
		// Else if the middle is more than the guess,
		// Increase right
		else {
			right = middle - 1;
		}

		// Increase comparison counter after each run
		ctr++;
	}

	// Use the index variable defined above
	// While index is less than the number of elements in the array:
	for (index = 0; index < numElements; index++) {
		// Check if our index is the guess
		if (numbers[index] == guess) {
			// If index is found, stop
			// Else, increase index and try again
			break;
		}
	}

	// Print out our index variable above, denoting what index the user's guess is at
	// Display our ctr variable with how many comparisons our user has
	cout << endl << "Number " << guess << " found at element " << index << endl;
	cout << "It took " << ctr << " comparison(s) using the Binary search algorithm." << endl;
	// Reset counter to 1 for next search algorithm
	ctr = 1;

	// Linear search algorithm:
	// Follows above index loop's style
	for (int j = 0; j < numElements; j++) {
		// Go through the array linearly
		// If index is the guess, stop
		if (numbers[j] == guess) {
			break;
		}
		// Increase counter variable each run
		ctr++;
	}

	// Print out our index variable, denoting what index the user's guess is at
	// Display our ctr variable with how many comparisons it took
	cout << endl << "Number " << guess << " found at element " << index << endl;
	cout << "It took " << ctr << " comparison(s) using the Linear search algorithm." << endl;
}
