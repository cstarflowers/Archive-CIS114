#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

/*
	Maddox White, Philomena Seta 

	Battleship

	This program takes an input text file of a 10x10 array of *'s and S's
	to make a game of single player battleship were *'s represent empty spaces
	and S's represent the ships location

	Using this file it makes 2 arrays; one base answer key array, and another
	array that is for the player to use as reference

	Our program then takes player input of coordinates for them to 'shoot' at.
	It doesn't allow them to shoot at a space they have already shot at.
	Using this coordinate point it tells the player whether they missed or not;
	this takes the form of either an H(Hit) or an M(Miss) on their board that they can see.
	The answer key array never updates throughout this process since we can just check the
	visual board to see if they have shot there before or not.
	
	After they have shot down all of the targets in the array they win the game.

	A message then congratulates them on their exellent battleship skills, and 
	tells them how many turns it took them to complete the game.

	Finally the program outputs the result of the final board-state of the game.
	*/

//constant integers for arrays:

const int AS = 10;
const int NA = 2;

//one or the other structure (for pairs of variables that are similar)
struct oOo {

	//File is working or Game is in progress 
	bool on;

	//input string for file and user respectively
	string in;

	//x or y
	int xy;
	
	//targets left or turns
	int tLoT = 0;

	//Answer key or Active board
	char aOb[AS][AS];
};

//Making the structure into an array
oOo s[NA];

//Where the vast majority of the program is located
int main() {

	//setting base states for respective variables
	s[0].on = true;
	s[1].on = true;
	s[1].tLoT = 1;

	//file variables BS or BattleShip
	fstream BS;

	//Opening the file
	BS.open("c:\\CIS 114\\Battleship.txt", ios::in);

	//If the file opens
	if (BS) {
		//Makes both Visual and Answer arrays;
		for (int i = 0;i < AS;i++) {
			getline(BS, s[0].in);
			for (int j = 0;j < AS;j++) {
				s[0].aOb[i][j] = s[0].in[j];
				s[1].aOb[i][j] = '*';
				if (s[0].in[j] == 's') {
					//Adds up the # of targets from the file
					s[0].tLoT++;
				}
			}
		}

	}
	else {
		//If the file doesn't open outputs Error message
		//Also tells rest of the program that the file couldn't open
		cout << "ERROR: File cannot be opened." << endl;
		s[0].on = false;
	}

	//closes the file
	BS.close();

	//If the file opened
	if (s[0].on) {
		//Intros the game
		cout << "Welcome to Single Player Battleship." << endl <<
			"Your goal is to sink all of the ships." << endl << endl;
		//While the game continues
		while (s[1].on) {
			//Turn # output
			cout << "Turn " << s[1].tLoT << ":" << endl;
			//If it is turn 1:
			if (s[1].tLoT == 1) {
				//More information explaning the input method of the game.
				//Then it takes the input
				cout << "Enter 2 values (0-9) with a space in between them." << endl <<
					"This will be the cordinates to were you want to shoot : ";
				getline(cin, s[1].in);
				//and splits the input into x and y
				s[0].xy = s[1].in[0] - 48;
				s[1].xy = s[1].in[2] - 48;
				if (s[0].aOb[s[0].xy][s[1].xy] == 's' || s[0].aOb[s[0].xy][s[1].xy] == 'S') {
					if (s[1].aOb[s[0].xy][s[1].xy] == 'H') {
						cout << "You already hit this spot on the board" <<
							endl << endl;
					}
					else {
						s[1].tLoT++;
						s[0].tLoT--;
						s[1].aOb[s[0].xy][s[1].xy] = 'H';
						cout << "You hit a Ship!" << endl <<
							"Only " << s[0].tLoT << " targets left!" <<
							endl << endl;

					}
				}
				else {
					if (s[1].aOb[s[0].xy][s[1].xy] == 'M' || s[1].aOb[s[0].xy][s[1].xy] == 'H') {
						cout << "You already hit this spot on the board" <<
							endl << endl;
					}
					else {
						cout << "Miss!" << endl;
						s[1].aOb[s[0].xy][s[1].xy] = 'M';
						s[1].tLoT++;
					}
				}


			}
			else {
				cout << "Enter two Values (0-9) with spaces in between: ";
				getline(cin, s[1].in);
				s[0].xy = s[1].in[0] - 48;
				s[1].xy = s[1].in[2] - 48;
				if (s[0].aOb[s[0].xy][s[1].xy] == 's' || s[0].aOb[s[0].xy][s[1].xy] == 'S') {
					if (s[1].aOb[s[0].xy][s[1].xy] == 'H') {
						cout << "You already hit this spot on the board" <<
							endl << endl;
					}
					else {
						s[1].tLoT++;
						s[0].tLoT--;
						s[1].aOb[s[0].xy][s[1].xy] = 'H';
						cout << s[1].aOb[s[0].xy][s[1].xy] << endl;
						cout << "You hit a Ship!" << endl <<
							"Only " << s[0].tLoT << " targets left!" <<
							endl << endl;

					}
				}
				else {
					if (s[1].aOb[s[0].xy][s[1].xy] == 'M' || s[1].aOb[s[0].xy][s[1].xy] == 'H') {
						cout << "You already hit this spot on the board" <<
							endl << endl;
					}
					else {
						cout << "Miss!" << endl;
						s[1].aOb[s[0].xy][s[1].xy] = 'M';
						s[1].tLoT++;
					}
				}
			}
			for (int i = 0;i < AS;i++) {
				for (int j = 0;j < AS;j++) {
					cout << s[1].aOb[i][j];
				}
				cout << endl;
			}
			if (s[0].tLoT == 0) {
				s[1].on = false;
			}
		}
		cout << "Congrats" << endl <<
			"You Sunk the Battleships!!!" << endl <<
			"It took you " << s[1].tLoT << " turns." << endl << endl;
		cout << "Final Board :" << endl << endl;
		for (int i = 0;i < AS;i++) {
			for (int j = 0;j < AS;j++) {
				cout << s[1].aOb[i][j];
			}
			cout << endl;
		}
	}

		return 0;
}
