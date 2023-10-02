#include <iostream>
#include <string>

using namespace std;

void referenceFunc(int&, int&, int&, int&);

int main() {
	int num1,
		num2,
		num3,
		num4;

	cout << "What is the first number?: ";
	cin >> num1;
	cout << "What is the second number?: ";
	cin >> num2;
	cout << "What is the third number?: ";
	cin >> num3;
	cout << "What is the fourth number?: ";
	cin >> num4;

	referenceFunc(num1, num2, num3, num4);
	cout << endl;
	cout << "int one is " << num1 << endl;
	cout << "int two is " << num2 << endl;
	cout << "int three is " << num3 << endl;
	cout << "int four is " << num4 << endl;
}

void referenceFunc(int& a, int& b, int& c, int& d) {
	int num1 = a,
		num2 = b,
		num3 = c,
		num4 = d;

	a = num4;
	b = num3;
	c = num2;
	d = num1;
}
