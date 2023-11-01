#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
	char comparing;
	string word = " ";
	int total_count = 0,
		short_count = 0,
		long_count = 0;

	ifstream inFile;
	inFile.open("C:\\gettysburg.txt");

	if (inFile) {
		while (inFile) {
			inFile.get(comparing);
			if (comparing == ' ') {
				total_count += 1;
				if (word.length() >= 6) {
					long_count += 1;
				}
				else {
					short_count += 1;
				}
				word = " ";

			}
			else {
				word += comparing;
			}
		}
		cout << "Total: " << total_count << endl;
		cout << "Long Word Total: " << long_count << endl;
		cout << "Short Word Total: " << short_count << endl;
	}
	else {
		cout << "ERROR: Could not open file!" << endl;
	}

	inFile.close();
}
