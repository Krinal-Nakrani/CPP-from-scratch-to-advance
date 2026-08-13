// Practical 8 — Manipulators

// Problem Statement: Write a program that uses stream manipulators (setw, setprecision, fixed, endl) to display a formatted table of student names and marks with proper column alignment and fixed decimal precision.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string names[4] = {"Aarav Mehta", "Diya Sharma", "Kabir jadav", "Isha Patil"};
    float marks[4] = {88.5, 92.75, 76.333, 65.9};

    cout << "----- Formatted Student Marks Table -----" << endl;

    // Table header
    cout << left << setw(20) << "Name"
         << right << setw(10) << "Marks" << endl;
    cout << string(30, '-') << endl;   // separator line

    // Table rows
    cout << fixed << setprecision(2);   // apply fixed-point notation, 2 decimal places, for all following outputs
    for (int i = 0; i < 4; i++) {
        cout << left << setw(20) << names[i]
             << right << setw(10) << marks[i] << endl;
    }

    return 0;
}