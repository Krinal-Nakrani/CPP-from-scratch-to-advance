// Practical 1 — Template Functions & Classes
// Part A: Template Function getMax

// Problem Statement: Write a template function getMax(T a, T b) that returns the larger of two values, and test it with int, float, and char arguments.

#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "----- Template Function: getMax -----" << endl;

    int i1 = 15, i2 = 27;
    cout << "Max of int (" << i1 << ", " << i2 << ") = " << getMax(i1, i2) << endl;

    float f1 = 5.6, f2 = 3.2;
    cout << "Max of float (" << f1 << ", " << f2 << ") = " << getMax(f1, f2) << endl;

    char c1 = 'p', c2 = 'z';
    cout << "Max of char (" << c1 << ", " << c2 << ") = " << getMax(c1, c2) << endl;

    return 0;
}