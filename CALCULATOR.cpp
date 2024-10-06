#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, sum;

    cout << "*************** CALCULATOR ************\n";

    cout << "Enter Your operation (+, -, *, /): ";
    cin >> op;

    // Check if the operator is valid first
    if (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Please enter a valid operation!" << endl;
        return 1;  // Exit the program when an invalid operation is entered
    }

    // Input validation for the first number
    cout << "Enter Your First number: ";
    while (true) {
        cin >> num1;
        if (cin.fail()) {  // If the input is invalid (not a number)
            cin.clear();  // Clear the error flag
            cin.ignore(1000, '\n');  // Ignore the invalid input
            cout << "Invalid input! Please enter a valid number for the first number: ";
        }
        else {
            break;  // Exit the loop when a valid number is entered
        }
    }

    // Input validation for the second number
    cout << "Enter Your Second number: ";
    while (true) {
        cin >> num2;
        if (cin.fail()) {  // If the input is invalid (not a number)
            cin.clear();  // Clear the error flag
            cin.ignore(1000, '\n');  // Ignore the invalid input
            cout << "Invalid input! Please enter a valid number for the second number: ";
        }
        else {
            break;  // Exit the loop when a valid number is entered
        }
    }

    switch (op) {
    case '+':
        sum = num1 + num2;
        cout << "Result: " << sum << endl;
        break;
    case '-':
        sum = num1 - num2;
        cout << "Result: " << sum << endl;
        break;
    case '*':
        sum = num1 * num2;
        cout << "Result: " << sum << endl;
        break;
    case '/':
        // Avoid division by zero
        if (num2 == 0) {
            cout << "Error! Division by zero." << endl;
            return 1;
        }
        sum = num1 / num2;
        cout << "Result: " << sum << endl;
        break;
    default:
        cout << "Error: Invalid operation." << endl;
        return 1;
    }

    return 0;
}
