// Practical 3 — Preprocessor Directives
// Part A: Macro for Square Calculation

// Problem Statement: Write a program using #define to create a macro for calculating the square of a number.

#include <iostream>
using namespace std;

#define SQUARE(x) ((x) * (x))

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "----- Macro: SQUARE -----" << endl;
    cout << "Square of " << num << " = " << SQUARE(num) << endl;

    cout << "Square of (3 + 2) = " << SQUARE(3 + 2) << endl;   // tests parenthesization safety

    return 0;
}