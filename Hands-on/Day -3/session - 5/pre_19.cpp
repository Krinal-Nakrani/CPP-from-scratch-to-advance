// Practical 19 — Variables & Literals

// Problem Statement: Demonstrate different literal types — integer literals (decimal, octal, hex), character literals, floating-point literals, and string literals — with appropriate format specifiers.

#include <iostream>
using namespace std;

int main() {
    // Integer literals in different bases
    int decimalLit = 100;        // decimal literal (base 10) - no prefix
    int octalLit = 0144;         // octal literal - prefixed with 0
    int hexLit = 0x64;           // hexadecimal literal - prefixed with 0x

    // Character literal
    char charLit = 'A';

    // Floating-point literals
    float floatLit = 3.14f;      // 'f' suffix specifies float (default would be double)
    double doubleLit = 3.14159265358979;

    // String literal
    string stringLit = "Hello, C++!";

    cout << "----- Integer Literals (all represent the same value, different bases) -----" << endl;
    cout << "Decimal literal (100)  : " << decimalLit << endl;
    cout << "Octal literal (0144)   : " << octalLit << "  (interpreted as decimal 100)" << endl;
    cout << "Hex literal (0x64)     : " << hexLit << "  (interpreted as decimal 100)" << endl;

    cout << "\n----- Character Literal -----" << endl;
    cout << "charLit = '" << charLit << "'  (ASCII value: " << (int)charLit << ")" << endl;

    cout << "\n----- Floating-Point Literals -----" << endl;
    cout << "float literal (3.14f)         : " << floatLit << endl;
    cout << "double literal (3.14159265..) : " << doubleLit << endl;

    cout << "\n----- String Literal -----" << endl;
    cout << "stringLit = " << stringLit << endl;

    return 0;
}