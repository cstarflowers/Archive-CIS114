#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	int calculator; 
	cout << "Geometry Calculator" << endl << endl;
	cout << "1. Calculate the Area of a Circle" << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Triangle" << endl;
	cout << "4. Quit" << endl << endl << endl;
	cout << "Enter your choice (1-4): ";
	cin >> calculator;

	const double PI = 3.14159; // approximated

	switch (calculator) {
	case 1: {
		double radius,
			area;
		cout << "What is the circles radius?: ";
		cin >> radius;

		area = (PI * pow(radius, 2));
		cout << "The area of a circle with radius " << radius << " is " << area << endl;
		break;
	}
	case 2: {
		double length,
			width,
			area;
		cout << "What is the rectangle's length?: ";
		cin >> length;
		cout << "What is the rectangle's width?: ";
		cin >> width;

		area = (length * width);
		cout << "The area of a rectangle with length " << length << " and width " << width << " is " << area << endl;
		break;
	}
	case 3: {
		double base,
			height,
			area;
		
		cout << "What is the triangle's base?: ";
		cin >> base;
		cout << "What is the triangle's height?: ";
		cin >> height;

		area = (base * height * 0.5);
		cout << "The area of a triangle with base " << base << " and height " << height << " is " << area << endl;
		break;
	}
	case 4:
		break;
	default:
		cout << "Error! Your input is not a number 1-4" << endl;
		break;
	}
}
