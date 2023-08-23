#include <iostream>
#include <string>
using namespace std;

int main() {
    /* 
    VARIABLE TYPES:
        int (or 'long int' for bigger numbers)
        float
        double //size of 2 floats, does same thing
        char //single character, 1 byte; pi to the smth
        string //lots of characters! In "sommething"

    SOME EXAMPLES:
        float bill = 34.99;
        char middle = 'A';
        string fName = "Bill";
        string lName = "Smith";
        cout << fName << " " << middle << ". " << lName << " Amount: $" << bill;
    */

    string fName = "John";
    string lName = "Stanley";
    char middle = 'B';

    string building = "Jefferson";
    int room = 3107;
    float fee = 10.00;

    cout << "Professor: " << fName << " " << middle << ". " << lName << endl;
    cout << "Class: " << "\"Introduction to Statistics\"" << endl;
    cout << "Class code: " << "STA 150" << endl;
    cout << "Building: " << building << endl;
    cout << "Room: " << room << endl;
    cout << "Time: " << "MWF 5:00-6:00" << endl;
    cout << "Lab fee : " << "$" << fee << endl;
    
    fName = "Jan";
    lName = "Cruise";
    building = "Stockton";
    room = 121;
    fee = 25.00;
    cout << "\n\n";
    
    cout << "Professor: " << fName << " " << middle << ". " << lName << endl;
    cout << "Class: " << "\"Anatomy and Physiology\"" << endl;
    cout << "Class code: " << "BIO 200" << endl;
    cout << "Building: " << building << endl;
    cout << "Room: " << room << endl;
    cout << "Time: " << "MWF 10:00-11:00" << endl;
    cout << "Lab fee : " << "$" << fee << endl;
}