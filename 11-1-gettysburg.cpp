#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// Carson Stary, CIS114, Gettysburg Address
// A program that counts the total word count of Lincoln's Gettysburg Address, then divides that count into small (5-) and long (6+) words
// FOR PROPER GETLINE DELIMITER USAGE, SEE GETTYSBURG2.cpp

// Prototype our check_length function to be used later
// Check_length does not have a return value, but accepts and modifies a string and 3 integers
void check_length(string&, int&, int&, int&);

int main() {
	// Define our comparison character, word, and counts to store the variables we'll display at the end
	char comparing;
	string word = "";
	int total_count = 0,
		short_count = 0,
		long_count = 0;

	// Define and open our address file in the C: drive
	ifstream inFile;
	inFile.open("C:\\gettysburg.txt");

	// If our file exists:
	if (inFile) {
		// While the file continues:
		while (inFile) {
			// Get the next character of the file and set it to our comparison character (comparing)
			inFile.get(comparing);
			// If the comparison character is a space (the word has ended):
			if (comparing == ' ') {
				// Check the length of the word using check_length
				check_length(word, total_count, long_count, short_count);
			}
			// If our comparison character is not a space (the word has not ended):
			else {
				// If our comparison character is not one of the used punctuation marks:
				if (comparing != '.' && comparing != '-' && comparing != ',') {
					// Add that comparison character to our comparison word
					// This increases our word's length by one so we can separate every word of the address
					word += comparing;
				}
			}
		}

		// Now that the file has ended, check the length of the final word
		check_length(word, total_count, long_count, short_count);

		// Print out our total words, long words, and short words with proper formatting
		cout << "Total: " << total_count << endl;
		cout << "Long Word Total: " << long_count << endl;
		cout << "Short Word Total: " << short_count << endl;
	}
	// If the file does not exist:
	else {
		// Print out simple error message for the user to diagnose the issue
		cout << "ERROR: Could not open file!" << endl;
	}

	// Close our Gettysburg file to prevent any future issues
	inFile.close();
}

void check_length(string& word, int& total, int& longs, int& shorts) {
	// Increase our passed total variable by 1
	total += 1;
	// Check our passed word's length against our long word length (6 or more)
	if (word.length() >= 6) {
		// If it is 6 characters or longer (minus our exceptions), add it to the long word total
		longs += 1;
		// For a list of long words, uncomment THE INDENTED LINE:
			// cout << "[Debug] LONG WORD (" << word.length() << "): " << word << endl;
	}
	// If it is not 6 characters or longer (minus our exceptions):
	else {
		// Add it to our short word total
		shorts += 1;
		// For a list of short words, uncomment THE INDENTED LINE:
			//cout << "[Debug] SHORT WORD (" << word.length() << "): " << word << endl;
	}
	// Reset our comparison word to make room for our next term
	// Word counts have been properly updated!
	word = "";
}
