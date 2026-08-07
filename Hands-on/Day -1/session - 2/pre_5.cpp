// Practical 5 — User Defined Function
// Problem Statement: Write a function int factorial(int n) to calculate the factorial of a number, and call it from main() to display results for numbers 1 to 10.

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    cout << "----- Factorial of numbers 1 to 10 -----" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << "! = " << factorial(i) << endl;
    }
    return 0;
}