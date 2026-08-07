// Part B: Conditional Compilation
// Problem Statement: Use conditional compilation (#ifdef, #ifndef, #endif) to include/exclude a debug print statement.

#include <iostream>
using namespace std;

#define DEBUG   // comment out this line to disable debug output

int main() {
    int a = 10, b = 20;
    int sum = a + b;

#ifdef DEBUG
    cout << "[DEBUG] a = " << a << ", b = " << b << endl;
    cout << "[DEBUG] Calculating sum..." << endl;
#endif

    cout << "Sum = " << sum << endl;

#ifndef RELEASE_MODE
    cout << "[INFO] Running in non-release mode." << endl;
#endif

    return 0;
}