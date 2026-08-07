// Practical 3 — Conditional Statements (if, else, Nested if, switch)
// Part A: Leap Year Check (Nested if)
// Problem Statement: Write a program to check whether a given year is a leap year.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a Leap Year." << endl;
            else
                cout << year << " is NOT a Leap Year." << endl;
        } else {
            cout << year << " is a Leap Year." << endl;
        }
    } else {
        cout << year << " is NOT a Leap Year." << endl;
    }

    return 0;
}