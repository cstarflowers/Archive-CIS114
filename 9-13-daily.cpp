#include <iostream>
#include <string>

using namespace std;

int main() {
	// Define variables that will be used for width and length as integers
	int rectangleWidth,
		rectangleLength,
		squareLength;

	// Ask user to assign numbers to each of the width and length variables
	// Then assign these variables using cin
	cout << "Please enter the width of the rectangle: ";
	cin >> rectangleWidth;
	cout << "Please enter the length of the rectangle: ";
	cin >> rectangleLength;
	cout << "Please enter the length of the square: ";
	cin >> squareLength;

	// Calculate the area of each using multiplcation of length * width
	// For square, legnth and width are the same so one variable is used
	int rectangle = rectangleLength * rectangleWidth,
		square = squareLength * squareLength;

	// If statements corresponding to each of the required responses
	// Print a response based on whether or not the square is equal to, larger, or less than the rectangle
	// Use else if to ensure only one condition is true and printed out
	if (rectangle == square) {
		cout << "The areas of the rectangle and the square are the same." << endl;
	}
	else if (rectangle > square) {
		cout << "The area of the rectangle is larger than the square." << endl;
	}
	else if (rectangle < square ) {
		cout << "The area of the square is larger than that of the rectangle." << endl;
	}
}
