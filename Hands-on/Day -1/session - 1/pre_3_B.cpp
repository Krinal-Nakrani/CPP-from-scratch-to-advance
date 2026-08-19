// Part B: Menu-driven Calculator (switch-case)
// Problem Statement: Write a menu-driven program using switch-case to perform basic arithmetic operations based on user's choice.

#include <iostream>
using namespace std;

int main() {
    int choice;
    int num1, num2, result;

    cout << "----- Menu -----" << endl;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        case 5:
            if (num2 != 0) {
                result = num1 % num2;
                cout << "Result: " << result << endl;
            }
            else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}