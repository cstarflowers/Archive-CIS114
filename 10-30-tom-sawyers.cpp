#include <fstream>
#include <iostream>
#include <string>

using namespace std;
// Carson Stary, CIS114, Tom Sawyers
// A program that counts the amount of all letters A-Z and all periods in a text document, then prints out the totals
 
int main() {
	// Create a constant for the amount of letters in the alphabet (including periods) for subsequent arrays
	const int LETTERS = 27;
	// Create a comparison character we will use to compare the text to items in our ararys
	char comparing,
		// Create two arrays -- each with a length of 27 -- for every letter in the alphabet
		comparison_letters[LETTERS] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z', '.'},
		comparison_letters_caps[LETTERS] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z', '.'};
	// Create an integer array with 27 slots to hold the totals for each letter we're storing
	int counts[LETTERS] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

	// Open the tomsawyers.txt file located in the C:\ drive
	ifstream inFile;
	inFile.open("C:\\tomsawyers.txt");
	
	// If the file exists:
	if (inFile) {
		// Until the end of the file is reached:
		while(inFile) {
			// Get the next character of the file and set it as our comparison character
			inFile.get(comparing);
			// For all 26 letters and periods we're checking:
			for (int j = 0; j < LETTERS; j++) {
				// Check if our comparison character from the document is that corresponding letter in our A-Z arrays (caps or lower)
				if (comparing == comparison_letters[j] || comparing == comparison_letters_caps[j]) {
					// If it is, add one to that letter's total using its index in the count and comparison_letters arrays
					counts[j] += 1;
				}
			}
		}
		// Create a new integer to store the total of all our individual variables
		int total = 0;
		// For all 26 letters and periods we're checking:
		for (int k = 0; k < LETTERS; k++) {
			// Print out the amount stored in count for that number, then its corresponding number in comparison_letters 
			// I used comparison_letters_caps for formatting, but comparison_letters (lowercase) can also be used
			cout << "There are " << counts[k] << " counts of " << comparison_letters_caps[k] << endl;
			// Add this printed total for each letter to our overall total to be used later
			total += counts[k];
		}
		// After all totals have been added, print out the combined total of all letters and periods in the document
		cout << endl << "That makes " << total << " letters and periods in total!";
	}
	// If the tomsawyers.txt file could not be found, print an error and stop
	else {
		cout << "ERROR: Could not open file!" << endl;
	}

	// Close the tomsawyers.txt file to prevent any file reading issues
	inFile.close();
}
