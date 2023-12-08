#include <iostream>
#include <math.h>

using namespace std;


void enterNums(int&, int&);

int calcFinal(int, int);

int main() {

    int base = 0,
        power = 0;
    enterNums(base, power);

    int result = calcFinal(base, power);

    cout << base << " to the power of " << power << " equals " << result << endl;

 

}

void enterNums(int& base, int& power) {

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> power;

}

 

int calcFinal(int base, int power) {

    int finalNum = pow(base,power);
    return finalNum;
}

