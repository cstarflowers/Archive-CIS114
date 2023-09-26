#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
// Carson Stary, CIS114, Concurrent For Loops
// A program that prints out the cost (read from a file) of top grossing movies and years inputted by the user

int main() {
	// Open file located at C:\CIS114.txt
	ifstream inFile;
	inFile.open("C:\\CIS114.txt");

	// Define the amount of movies we will print as a constant (unchanging) integer
	int const MOVIES = 10;

	// Create an integer array for the box office amount of the top 10 movies
	// Similarly, create another integer array for the movie years our user will input
	// Then, allow each array to hold MOVIES (10, defined above) variables inside
	int movie_costs[MOVIES];
	int movie_years[MOVIES];

	// For each number in MOVIES (0-9 [10 slots]),
	for (int i = 0; i < MOVIES; i++) {
		// Set the i-th slot of the movie_costs array to the next line in our CIS114.txt file
		inFile >> movie_costs[i];
	}

	// Now that we've finished using the text in our CIS114.txt file,
	// Close the file to prevent later complications
	inFile.close();

	// Define all 10 slots in the movie_names array to each movie in descending order
	// These names are hard-coded in as the top 10 at this point
	string movie_names[MOVIES] = {
		"Star Wars: Episode VII - The Force Awakens",
		"Avengers: Endgame",
		"Spider-Man: No Way Home",
		"Avatar",
		"Top Gun: Maverick",
		"Black Panther",
		"Avatar: The Way of Water",
		"Avengers: Infinity War",
		"Titantic",
		"Jurassic World"
	};

	// For each number in MOVIES (0-9 [10 slots]),
	for (int j = 0; j < MOVIES; j++) {
		// Prompt the user to enter a year for all 10 items in the movie_names array
		cout << "Please enter the year for " << movie_names[j] << " : ";
		// Take in this input as the j-th slot of our movie_years array
		cin >> movie_years[j];
	}

	// Print out two new lines to space out the questions and final printed lines
	// Then, print out a series of asterisks for formatting purposes
	cout << endl << endl << "Top Grossing Domestic Movies of All - Time" << endl;
	cout << "******************************************" << endl;

	// For each number in MOVIES (0-9 [10 slots]),
	for (int k = 0; k < MOVIES; k++) {
		// Set the alignment of each line to the left and then set its corresponding width spacing
	
		// From there, print out k+1 to denote the movie's spot in the top 10 (k begins at 0, so 1 must be added)
		// Then, print out each index of the movie_names array as k (the loop number) increases
		// A dollar sign for formatting and our other 2 arrays are then printed in a similar manner

		// Spacing assisted by Maddox White
		cout << setw(4) << left << (k + 1) << setw(45) << left << movie_names[k];
		cout << "$" << setw(12) << left << movie_costs[k] << movie_years[k] << endl;
	}

}
