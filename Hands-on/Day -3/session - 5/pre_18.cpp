// Practical 18 — Data Types, Word Size & Storage

// Problem Statement: Write a program using the sizeof operator to display the size (in bytes) of int, short, long, long long, float, and double, and print the minimum/maximum range of each.

#include <iostream>
#include <climits>   // for integer limits
#include <cfloat>    // for floating-point limits
using namespace std;

int main() {
    cout << "----- Size of Data Types (in bytes) -----" << endl;
    cout << "int        : " << sizeof(int) << " bytes" << endl;
    cout << "short      : " << sizeof(short) << " bytes" << endl;
    cout << "long       : " << sizeof(long) << " bytes" << endl;
    cout << "long long  : " << sizeof(long long) << " bytes" << endl;
    cout << "float      : " << sizeof(float) << " bytes" << endl;
    cout << "double     : " << sizeof(double) << " bytes" << endl;

    cout << "\n----- Range of Integer Types -----" << endl;
    cout << "int        : " << INT_MIN << " to " << INT_MAX << endl;
    cout << "short      : " << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "long       : " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "long long  : " << LLONG_MIN << " to " << LLONG_MAX << endl;

    cout << "\n----- Range of Floating-Point Types -----" << endl;
    cout << "float      : " << FLT_MIN << " to " << FLT_MAX << endl;
    cout << "double     : " << DBL_MIN << " to " << DBL_MAX << endl;

    return 0;
}