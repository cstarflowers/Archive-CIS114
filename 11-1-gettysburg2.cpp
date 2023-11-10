#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

/* 
	Maddox White

	Gettysburg Address Word Count
	
	This program takes an input file and finds how many words are in it.
	As well as how many short words, words with 5 letters or less, or long words (6+) there are.
*/
int main() {

	//true or false variable to check if output is needed
	bool tof = true;

	//variable used for input of string.
	string input;

	//word count
	int wC = 0;

	//short word count
	int sC = 0;

	//long word count
	int lC = 0;

	//fstream variable to access the file with.
	fstream nameFile;

	//Opening the file
	nameFile.open("c:\\CIS 114\\GBA.txt", ios::in);

	//if the file opens
	if (nameFile) {
		//until the file ends
		while (nameFile) {

			//gets a word
			getline(nameFile, input, ' ');

			if (input[input.length() - 1] == '.' || input[input.length() - 1] == ',') {
				//If the lines ends in punctuation
				if (input.length() - 1 >= 6) {
					//and the word without the punctuation is still greater than
					//or equal to 6 characters
					
					//Adds one to both long word count and word count.
					lC++;
					wC++;
				}
				else if (input.length() - 1 <= 5) {
					//and the word without the punctuation is still less than
					//or equal to 5 characters

					//Adds one to both short word count and word count.
					sC++;
					wC++;
				}
			}
			else {
				//Otherwise
				if (input.length() >= 6) {
					//If word is 6 characters or greater

					//Adds one to both long word count and word count.
					lC++;
					wC++;
				}
				else if (input.length() <= 5) {
					//If word is 5 characters or less.

					//Adds one to both short word count and word count.
					sC++;
					wC++;
				}
			}
		}
	}
	else {
		//If file cannot open the program outputs an error message
		//The program also makes the output not run
		cout << "ERROR: File cannot open." << endl;
		tof = false;
	}
	if (tof) {
		//Outputs if file can open
		cout << endl << endl;
		cout << "There were " << sC << " short words," << endl <<
			"and " << lC << " long words" << endl <<
			"Making " << wC << " words total." << endl;
	}
	else {
		//Outputs if file cannot open
		cout << endl << endl <<
			"Program Ending" << endl << endl;
	}
	
	return 0;
}

