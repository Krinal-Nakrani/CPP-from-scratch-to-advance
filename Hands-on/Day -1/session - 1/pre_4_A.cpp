// Practical 4 — Loop Statements
// Part A: Fibonacci Series
// Problem Statement: Write a program to print the Fibonacci series up to N terms.

#include <iostream>
using namespace std;

int main() {
    int n;
    int first = 0, second = 1, next;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << first << " ";
            continue;
        }
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout << endl;

    return 0;
}