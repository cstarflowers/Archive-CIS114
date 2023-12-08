#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// Carson Stary, Grant Gehring
// CIS114 -- Battleship
// A single-player Battleship game, requiring the user to guess ship coordinates corresponding to a text file

// NOTE: Comments are completed by the person namely responsible for each section and signed through "-C" or "-G"

// States vertical and horizontal rows for our battleship board -G
const int ARRAY_ROWS = 10,
ARRAY_COLS = 10;

// Create empty arrays we'll compare to each other for user guesses -C
char correctBoard[ARRAY_ROWS][ARRAY_COLS],
guessBoard[ARRAY_ROWS][ARRAY_COLS];

// Set up holding variables for the amount of required hits, number of ships, guesses the user has made, and the user's currently guessed coordinates -C
int requiredHits = 0,
shipCount = 0,
userGuesses = 0,
guessX,
guessY;

// Prototype our printBoard() function for convenience -C
void printBoard();
int main() {
	// Create a file variable named shipFile, then open battleship.txt for reading -C
	// Battleship.txt layout from Maddox White
	ifstream shipFile;
	shipFile.open("C:\\Users\\carso\\Desktop\\battleship.txt", ios::in);

	// If the ship file exists: -C
	if (shipFile) {
		// For each column and row we defined above: -C
		for (int i = 0; i < ARRAY_ROWS; i++) {
			for (int j = 0; j < ARRAY_COLS; j++) {
				// Take in the content of shipFile and assign it to the corresponding slot on our correctBoard -C
				// This will be what we compare the users guesses to in checking correctness -C
				// shipFile input method inspired by Ryan Singer
				shipFile >> correctBoard[i][j];
				// If the next character in shipFile is an S: -C
				if (correctBoard[i][j] == 'S') {
					// Increase the number of ships by 1, we will print this number out at the end -C
					shipCount += 1;
				}
				// Create an array of identical size to correctBoard, but fill it with only empty slots ('*') -C
				// This will be the board the user inputs their guesses onto and is slowly revealed -C
				guessBoard[i][j] = '*';
			}
		}
		// Close our shipFile once we've finished running through it to prevent file-based errors -C
		shipFile.close();

		// Print out instructions for the user, then set their requiredHits to the amount of ships on the board -C
		cout << "Welcome to Battleship!" << endl;
		cout << "Your goal is to hit all enemy ships by guessing their coordinates." << endl;
		cout << "To enter coordinates, please use the format \"# #\" (ie: 1 2)" << endl << endl;
		requiredHits = shipCount;

		while (requiredHits > 0) { // While required hits is greater than 0, print the board -G
			printBoard();
			userGuesses += 1;
			// Prompt the user for two numbers -G
			// Then, take those numbers in as guessX and guessY on the X and Y axes -G
			cout << "What coordinates would you like to guess? (Move " << userGuesses << "): ";
			cin >> guessX;
			cin >> guessY;

			// NOTE: 2D Arrays use arr[ROWS][COLS], where X is COLS and Y is ROWS, so they must be flipped
			// If guess is Guess X and GuessY equals a ship coordinate (S) print out Hit! -G
			// Decrease requiredHits left by 1 -G
				if (correctBoard[guessY][guessX] == 'S') {
					cout << "Hit (#" << (shipCount+-requiredHits) + 1 << "/" << shipCount << ")" << endl;
					requiredHits -= 1;
					guessBoard[guessY][guessX] = 'S';
				}
			// If else, print out miss -G
				else {
					cout << "Miss (#" << (shipCount + -requiredHits) << "/" << shipCount << ")" << endl;
					guessBoard[guessY][guessX] = '/';

				}
			cout << endl;
		}
		printBoard();
		// Print win message if requiredHits is not greater than 0 -G
		cout << "Congratulations! You won!" << endl;
		cout << "You sunk 5 ships in " << userGuesses << " moves (" << shipCount << " hits)!" << endl;
	}
	// Else if shipFile does not exist: -C
	else {
		// Print out an error message -C
		cout << "Error: File does not exist!" << endl;
	}
}

// Cout rows and columns to make the guess board -G
// Function separated from main() for easier reading and formatting -C
void printBoard() {
	cout << "  0 1 2 3 4 5 6 7 8 9" << endl; // Cout column numbers -G
	for (int k = 0; k < ARRAY_ROWS; k++) {
		cout << k << ' ';
		for (int l = 0; l < ARRAY_COLS; l++) {
			// Print out the contents of each row and column of the user's guessBoard (containing * for no move, / for miss, and S for hit) -C
			// Then, add a space and appropriate endls for formatting purposes -- these can be changed without much consequence -C
			cout << guessBoard[k][l] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

