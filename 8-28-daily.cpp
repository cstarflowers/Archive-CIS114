#include <iostream>
using namespace std;

int main() {
	double total,
		// define prices in a double to create item1-item5 variables with appropriate decimals
		item1 = 15.95,
		item2 = 24.95,
		item3 = 6.95,
		item4 = 12.95,
		item5 = 3.95,
		tax;

	// print out the items with their prices defined above
	// add spaces and a dollar sign to the end of the string for formatting
	cout << "item1:       $" << item1 << endl;
	cout << "item2:       $" << item2 << endl;
	cout << "item3:       $" << item3 << endl;
	cout << "item4:       $" << item4 << endl;
	cout << "item5:       $" << item5 << endl;

	// complete calculations without using variables, only the previously defined item names
	// total is the addition of all of our items, without the addition of tax
	total = item1 + item2 + item3 + item4 + item5;
	cout << "total:       $" << total << endl;

	// tax is 7%
	// 7% tax converted to 0.07 decimal, then multiplied by the items that make up our total
	tax = total * 0.07;
	cout << "tax:         $" << tax << endl;

	// to make up the total plus tax, we multiply the total by itself (1) and then add the tax (.07)
	// final calculation becomes items multipled by 1.07
	cout << "total + tax: $" << total + tax << endl;
}
