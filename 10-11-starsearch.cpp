#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

void getJudgeData(double& i);
void calcScore(double score1, double score2, double score3, double score4, double score5);
double findLowest(double score1, double score2, double score3, double score4, double score5);
double findHighest(double score1, double score2, double score3, double score4, double score5);

double scores[5];

int main() {
	for (int i = 0; i < 5; i++) {
		getJudgeData(scores[i]);
	}
	calcScore(scores[0], scores[1], scores[2], scores[3], scores[4]);
}

void getJudgeData(double& score) {
	// While(true) statement with help from Maddox White
	while (true) {
		cout << "Please enter scores (0.0 - 10.0): ";
		cin >> score;
		if (score >= 0 && score <= 10) {
			break;
		}
		else {
			cout << "Error: Your number is invalid!" << endl << endl;
		}
	}

/*
	cout << "Please enter scores (0.0 - 10.0): ";
	cin >> score;
	if (score >= 0 && score <= 10) {
		scores[i] = score;
	}
	else {
		// Failure to enter a number will cause string of errors
		cout << "Error: Your number is invalid!" << endl << endl;
		getJudgeData(i);
	}
	*/
}

void calcScore(double score1, double score2, double score3, double score4, double score5) {
	double lowest = findLowest(score1, score2, score3, score4, score5);
	double highest = findHighest(score1, score2, score3, score4, score5);

	double top_three = (score1 + score2 + score3 + score4 + score5) - (highest + lowest);
	double final_score = (top_three / 3);

	cout << endl << "The judge's average score after throwing out the high and low scores is ";
	cout << fixed << setprecision(1) << showpoint << final_score << ". " << endl;
}

double findLowest(double score1, double score2, double score3, double score4, double score5) {
	double scores_sorted[5] = {
		score1,
		score2,
		score3,
		score4,
		score5
	};

	double lowest_score = 10.00;
	for (int k = 0; k < 5; k++) {
		if (scores_sorted[k] < lowest_score) {
			lowest_score = scores_sorted[k];
		}
	}

	return lowest_score;
}

double findHighest(double score1, double score2, double score3, double score4, double score5) {
	double scores_sorted[5] = {
		score1,
		score2,
		score3,
		score4,
		score5
	};

	double highest_score = 0.00;
	for (int l = 0; l < 5; l++) {
		if (scores_sorted[l] > highest_score) {
			highest_score = scores_sorted[l];
		}
	}
	 
	return highest_score;
}
