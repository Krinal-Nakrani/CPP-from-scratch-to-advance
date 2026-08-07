// Practical 2 — Operators (including Bitwise)
// Problem Statement: Write a program to accept two integers and perform arithmetic operations, bitwise operations, and check even/odd using bitwise AND.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Arithmetic Operations
    cout << "\n----- Arithmetic Operations -----" << endl;
    cout << "Addition       : " << (a + b) << endl;
    cout << "Subtraction    : " << (a - b) << endl;
    cout << "Multiplication : " << (a * b) << endl;
    if (b != 0) {
        cout << "Division       : " << (a / b) << endl;
        cout << "Modulus        : " << (a % b) << endl;
    } else {
        cout << "Division/Modulus not possible (division by zero)" << endl;
    }

    // Bitwise Operations
    cout << "\n----- Bitwise Operations -----" << endl;
    cout << "a & b (AND)     : " << (a & b) << endl;
    cout << "a | b (OR)      : " << (a | b) << endl;
    cout << "a ^ b (XOR)     : " << (a ^ b) << endl;
    cout << "~a (NOT)        : " << (~a) << endl;
    cout << "a << 1 (Left Shift)  : " << (a << 1) << endl;
    cout << "a >> 1 (Right Shift) : " << (a >> 1) << endl;

    // Even/Odd using bitwise AND
    cout << "\n----- Even/Odd Check (using bitwise AND) -----" << endl;
    if ((a & 1) == 0)
        cout << a << " is Even" << endl;
    else
        cout << a << " is Odd" << endl;
    
    if ((b & 1) == 0)
        cout << b << " is Even" << endl;
    else
        cout << b << " is Odd" << endl;

    return 0;
}