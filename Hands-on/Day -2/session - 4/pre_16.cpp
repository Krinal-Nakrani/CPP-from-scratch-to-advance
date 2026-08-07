// Practical 16 — Exception Handling (throw and catch, between functions)

// Problem Statement: Write a function divide(int a, int b) that throws an exception when b == 0. Call this function from another function, which in turn is called from main(), and catch the exception in main().

#include <iostream>
using namespace std;

// Level 1: performs the actual division, throws if invalid
double divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division by zero is not allowed!");
    }
    return (double)a / b;
}

// Level 2: intermediate function, does NOT catch - lets exception propagate upward
double processDivision(int a, int b) {
    cout << "processDivision(): about to call divide(" << a << ", " << b << ")" << endl;
    double result = divide(a, b);   // if this throws, processDivision() does not handle it
    cout << "processDivision(): division successful." << endl;
    return result;
}

int main() {
    cout << "----- Exception Propagation Between Functions -----" << endl;

    try {
        cout << "main(): calling processDivision(10, 2)" << endl;
        cout << "Result: " << processDivision(10, 2) << endl;

        cout << "\nmain(): calling processDivision(5, 0)" << endl;
        cout << "Result: " << processDivision(5, 0) << endl;   // this will throw

        cout << "This line will NOT execute if an exception was thrown above." << endl;
    }
    catch (const runtime_error &e) {
        cout << "\nException caught in main(): " << e.what() << endl;
    }

    cout << "\nProgram continues normally after handling the exception." << endl;

    return 0;
}