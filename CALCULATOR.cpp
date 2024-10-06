#include <iostream>
using namespace std;

int main() {
    char op;
    double num1;
    double num2;
    double sum;

    cout << "*************** CALCULATOR ************\n";

    cout << "Enter Your operation (+, -, *, /): ";
    cin >> op;

    // Check if the operator is valid first
    if (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Please Enter a valid Operation!" << endl;
        return 1;  // Exit the program when invalid operation is entered
    }

    cout << "Enter Your First number: ";
    cin >> num1;
    cout << "Enter Your Second number: ";
    cin >> num2;

    switch (op) {
    case '+':
        sum = num1 + num2;
        cout << "Result: " << sum;
        break;
    case '-':
        sum = num1 - num2;
        cout << "Result: " << sum;
        break;
    case '*':
        sum = num1 * num2;
        cout << "Result: " << sum;
        break;
    case '/':
        sum = num1 / num2;
        cout << "Result: " << sum;
        break;
    }

    return 0;
}
