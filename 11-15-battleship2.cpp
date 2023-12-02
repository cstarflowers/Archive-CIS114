#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// Carson Stary, Grant Gehring
// CIS114 -- Battleship
// WIP: NEEDS COMMENTS !!

const int ARRAY_ROWS = 10,
	ARRAY_COLS = 10;

char correctBoard[ARRAY_COLS][ARRAY_ROWS],
	guessBoard[ARRAY_COLS][ARRAY_ROWS];

int requiredHits = 0,
	shipCount = 0,
	userGuesses = 0;

int guessX,
	guessY;

void printBoard();
int main() {
	ifstream shipFile;
	// Ship layout from Maddox White
	shipFile.open("C:\\Users\\carso\\Desktop\\battleship.txt", ios::in);

	if (shipFile) {
		for (int i = 0; i < ARRAY_COLS; i++) {
			for (int j = 0; j < ARRAY_ROWS; j++) {
				// shipFile input method from Ryan Singer
				shipFile >> correctBoard[i][j];
				if (correctBoard[i][j] == 'S') {
					shipCount += 1;
				}
				guessBoard[i][j] = '*';
			}
		}
		shipFile.close();

		cout << "To enter coordinates, please use the format \"# #\" (ie: 1 2)" << endl << endl;
		requiredHits = shipCount;

		while (requiredHits > 0) {
			printBoard();
			userGuesses += 1;
			cout << endl << "What coordinates would you like to guess? (Move " << userGuesses << "): ";
			cin >> guessX;
			cin >> guessY;
			if (correctBoard[guessX][guessY] == 'S') {
				cout << "Hit!" << endl;
				requiredHits -= 1;
				guessBoard[guessX][guessY] = 'S';
			}
			else {
				cout << "Miss." << endl;
				guessBoard[guessX][guessY] = '/';

			}
			cout << endl;
		}

		printBoard();
		cout << endl << "Congratulations! You won!" << endl;
		cout << "You sunk 5 ships in " << userGuesses << " moves (" << shipCount << " hits)!" << endl;
	}

	else {
		cout << "Error: File does not exist!" << endl;
	}
}

void printBoard() {
	cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
	for (int k = 0; k < ARRAY_COLS; k++) {
		cout << k << ' ';
		for (int l = 0; l < ARRAY_ROWS; l++) {
			cout << guessBoard[k][l] << ' ';
		}
		cout << endl;
	}
}
