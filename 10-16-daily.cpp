#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
// Carson Stary, Fahrenheit -- October 16th Daily
// Assignment created for CIS114
// A program that runs two concurrent float arrays to convert C to F

float convertCelcius(int);
const int INDICES = 20;

float celcius[INDICES],
fahrenheit[INDICES];

int main() {
	for (int h = 0; h < INDICES; h++) {
		celcius[h] = h;
	}

	for (int i = 0; i < INDICES; i++) {
		float tempF = convertCelcius(i);
		cout << fixed << setprecision(1) << showpoint << celcius[i];
		cout << " degrees celcius converts to " << fixed << setprecision(1) << showpoint << tempF << " degrees fahrenheit." << endl;
	}
}

float convertCelcius(int i) {
	fahrenheit[i] = (1.8 * celcius[i]) + 32; // Fraction to decimal conversion from Lex Fagan :)
	return fahrenheit[i];
}
