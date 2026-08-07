// Practical 7 — Pointers (call by value vs call by reference)
// Part A: Call by Value vs Call by Reference (swap function)
// Problem Statement: Write a program demonstrating call by value vs call by reference by writing two versions of a swap() function.

#include <iostream>
using namespace std;

// Call by Value
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByValue: x = " << x << ", y = " << y << endl;
}

// Call by Reference (using pointers)
void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "----- Before swapByValue -----" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    swapByValue(a, b);
    cout << "After swapByValue (in main): a = " << a << ", b = " << b << endl;

    cout << "\n----- Before swapByReference -----" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    swapByReference(&a, &b);
    cout << "After swapByReference (in main): a = " << a << ", b = " << b << endl;

    return 0;
}