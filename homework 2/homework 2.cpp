// Creator: Robert Ward
// Date: 01/27/2024
// Reason: allow's the user to enter 10 numbers and then do what they want by either adding, subtracting, or multiplying.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//rendering methods
void renderMenu () {
    cout << endl << "+-------------------------------+";
    cout << endl << "Please Enter 10 numbers: ";
} // End of renderMenu

void renderMenu1 () {
    cout << endl << "What would you like to do with these numbers?";
    cout << endl << "1. Add";
    cout << endl << "2. Subtract";
    cout << endl << "3. Multiply";
    cout << endl << "+-------------------------------+" << endl << ": ";
} // End of renderMenu1

void renderMenu2 () {
    cout << endl << "Would you like to add, subtract, or multiply again? y/n";
    cout << endl << ": ";
} // End of renderMenu2
//end of rendering methods

//user input method
double getUserInput(int &input, vector<double>& something) {
    double sum = 0;

    switch (input) {
        case 1:
            for (int i = 0; i < 10; i++) {
                sum += something[i];
            }
            break;

        case 2:
            for (int i = 0; i < 10; i++) {
                sum -= something[i];
            }
            break;

        case 3:
            sum = 1;
            for (int i = 0; i < 10; i++) {
                sum *= something[i];
            }
            break;
    }

    cout << endl << "The answer is: " << sum;
    return sum;
} // End of getUserinput method

int main() {
    char stringInput;
    int input;
    double totalResult = 0;
    vector<double> something(10);
    while (true) {
        renderMenu();

        // Inputs the 10 necessary numbers
        for (int i = 0; i < 10; i++) {
            cin >> something[i];
        }


        renderMenu1();
        cin >> input;

        getUserInput(input, something);

        renderMenu2();
        cin >> stringInput;

        // Checks if the string input that gets turned lowercase if its y or n
        if (tolower(stringInput) == 'n') {
            break;
        } else if (tolower(stringInput) != 'y') {
            cout << endl << "Invalid input, please try again.";
        }
    }
    return 0;
} // End of main method