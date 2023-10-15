#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;
// ---
// Carson Stary, CIS114, Star Search
// A program used to calculate a performer's score by averaging the middle 3 of 5 scores (drops highest and lowest)
// ---

// Prototyping for functions used in program
// Program will call getJudgeData using a Pass By Reference Double, as well as calcScore, findLowest, and findHighest without passed variables
void getJudgeData(double&);
void calcScore();
double findLowest();
double findHighest();

// Define an array named "scores" with 5 (0-4) slots
// This array is global (defined outside of any function) for use without redefinition
double scores[5];

int main() {
	// Run getJudgeData 5 times, pass it the i-th index of scores to populate the array
	for (int i = 0; i < 5; i++) {
		getJudgeData(scores[i]);
	}

	// Once the array has been filled with the 5 judge scores, calculate the contestant's score through calcScore()
	calcScore();
}

void getJudgeData(double& score) {
	// While statement with help from Maddox White
	// Do everything below at least once, then repeat until the while() condition is false
	do {
		// Prompt the user to enter a score 0-10 
		cout << "Please enter scores (0.0 - 10.0): ";
		// Set this input to our double& score (or scores[i] renamed)
		cin >> score;

		// If this score is greater than or equal to 0 AND less than or equal to 0, continue
		if (score >= 0 && score <= 10) {
			break;
		}
		// If the score does not meet the above condition, inform the user their input is invalid
		else {
			cout << "Error: Your number is invalid!" << endl;
		}

	// Subsequently, if the above error message is printed, the conditions for the while() loop will also be met
	// and the user will be prompted to provide another number until their input can be validated
	} while (!(score >= 0 && score <= 10));
}

void calcScore() {
	// Create double variables to contain the outputs of findLowest() and findHighest()
	double lowest = findLowest(),
		highest = findHighest();

	// Create two additional doubles to store the user's stop three scores and final averaged score using below calculations:
	// The top_three variable is comprised of each score in the array minus the returned highest and lowest scores (defined above)
	double top_three = (scores[0] + scores[1] + scores[2] + scores[3] + scores[4]) - (highest + lowest),
		final_score = (top_three / 3);

	// Print out the users final score (top_three divided by 3) with 1-point precision at the decimal point
	// Show .0 if the output is a whole number (ie: 10 -> 10.0)
	cout << "The judge's average score after throwing out the high and low scores is ";
	cout << fixed << setprecision(1) << showpoint << final_score << endl;
}

double findLowest() {
	// Define a double to contain the user's lowest score
	// For comparisons, the default lowest score is the highest number the user can enter
	double lowest_score = 10.00;

	// For all 5 indexes of scores[]:
	for (int k = 0; k < 5; k++) {
		// Check if the saved score is lower than the current lowest_score
		// If true, set that score to the new lowest_score and continue
		if (scores[k] < lowest_score) {
			lowest_score = scores[k];
		}
	}

	// Once all 5 indexes have been checked, return the lowest score as a double
	return lowest_score;
}

double findHighest() {
	// Define a double to contain the user's highest score
	// For comparisons, the default highest score is the lowest number the user can enter
	double highest_score = 0.00;

	// For all 5 indexes of scores[]:
	for (int l = 0; l < 5; l++) {
		// Check if the saved score is higher than the current highest_score
		// If true, set that score to the new highest_score and continue
		if (scores[l] > highest_score) {
			highest_score = scores[l];
		}
	}

	// Once all 5 indexes have been checked, return the highest score as a double
	return highest_score;
}
