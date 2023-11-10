#include <iostream>
#include <string>
using namespace std;
// Carson Stary, CIS114

int main() {
// Define variables for professor names and info as specified by the assignment
    string fName = "John";
    string lName = "Stanley";
    char middle = 'B';

    string building = "Jefferson";
    int room = 3107;
    float fee = 10.00;

// Print the title of the line (Professor:, Class:, etc) with variables appended
// Add spaces and periods as needed using the << symbol 
// Create a new line at the end of each to space information out
    cout << "Professor: " << fName << " " << middle << ". " << lName << endl;
    cout << "Class: " << "\"Introduction to Statistics\"" << endl;
    cout << "Class code: " << "STA 150" << endl;
    cout << "Building: " << building << endl;
    cout << "Room: " << room << endl;
    cout << "Time: " << "MWF 5:00-6:00" << endl;
    cout << "Lab fee : " << "$" << fee << endl;
    
// Update variables for the new professor and their information
    fName = "Jan";
    lName = "Cruise";
    building = "Stockton";
    room = 121;
    fee = 25.00;
// Print 2 new lines to create a space between the professors' classes
    cout << "\n\n";
    
// Mimic the first section and print this professor's information
// Manually update lines not stored in variables (class code, class name)
// Create a new line at the end of each
    cout << "Professor: " << fName << " " << middle << ". " << lName << endl;
    cout << "Class: " << "\"Anatomy and Physiology\"" << endl;
    cout << "Class code: " << "BIO 200" << endl;
    cout << "Building: " << building << endl;
    cout << "Room: " << room << endl;
    cout << "Time: " << "MWF 10:00-11:00" << endl;
    cout << "Lab fee : " << "$" << fee << endl;
}
