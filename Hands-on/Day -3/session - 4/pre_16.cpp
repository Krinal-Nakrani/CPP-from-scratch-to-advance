// Practical 16 — Ellipsis (va_list, va_start, va_arg, va_end)

// Problem Statement: Write a variadic function int sum(int count, ...) that accepts a variable number of integer arguments and returns their sum.

#include <iostream>
#include <cstdarg>   // required for va_list, va_start, va_arg, va_end
using namespace std;

int sum(int count, ...) {
    va_list args;         // declare a variable to hold the argument list
    va_start(args, count);   // initialize 'args', 'count' is the last named parameter before '...'

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);   // retrieve the next argument, expecting type 'int'
    }

    va_end(args);   // clean up the argument list

    return total;
}

int main() {
    cout << "----- Variadic Function: sum() -----" << endl;

    cout << "sum(3, 10, 20, 30) = " << sum(3, 10, 20, 30) << endl;
    cout << "sum(5, 1, 2, 3, 4, 5) = " << sum(5, 1, 2, 3, 4, 5) << endl;
    cout << "sum(2, 100, 200) = " << sum(2, 100, 200) << endl;

    return 0;
}