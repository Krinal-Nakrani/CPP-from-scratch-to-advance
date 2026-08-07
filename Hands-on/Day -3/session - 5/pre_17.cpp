// Practical 17 — Number Systems & Conversions

// Problem Statement: Write a menu-driven program to convert a given number between Decimal, Binary, Octal, and Hexadecimal (user selects source and target format).

#include <iostream>
#include <bitset>
#include <sstream>
using namespace std;

int main() {
    int choice, num;
    long decimalValue;
    string inputStr;

    cout << "----- Number System Converter -----" << endl;
    cout << "Select SOURCE format:" << endl;
    cout << "1. Decimal  2. Binary  3. Octal  4. Hexadecimal" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    // Step 1: Convert source input to Decimal (common intermediate form)
    switch (choice) {
        case 1:
            cout << "Enter Decimal number: ";
            cin >> decimalValue;
            break;
        case 2:
            cout << "Enter Binary number: ";
            cin >> inputStr;
            decimalValue = stol(inputStr, nullptr, 2);   // base 2
            break;
        case 3:
            cout << "Enter Octal number: ";
            cin >> inputStr;
            decimalValue = stol(inputStr, nullptr, 8);   // base 8
            break;
        case 4:
            cout << "Enter Hexadecimal number: ";
            cin >> inputStr;
            decimalValue = stol(inputStr, nullptr, 16);  // base 16
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    cout << "\nEquivalent Decimal value: " << decimalValue << endl;

    // Step 2: Convert Decimal to all target formats
    cout << "\n----- Converted Values -----" << endl;
    cout << "Decimal     : " << decimalValue << endl;
    cout << "Binary      : " << bitset<32>(decimalValue) << endl;

    ostringstream octStream, hexStream;
    octStream << oct << decimalValue;
    hexStream << hex << decimalValue;

    cout << "Octal       : " << octStream.str() << endl;
    cout << "Hexadecimal : " << hexStream.str() << endl;

    return 0;
}