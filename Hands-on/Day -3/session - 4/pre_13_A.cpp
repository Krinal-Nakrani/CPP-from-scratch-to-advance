// Practical 13 — Lambda Expression
// Part A: Lambda to Add Two Numbers

// Problem Statement: Write a lambda expression to add two numbers and store it in an auto variable.

#include <iostream>
using namespace std;

int main() {
    // Lambda expression stored in an auto variable
    auto add = [](int a, int b) {
        return a + b;
    };

    cout << "----- Lambda: Addition -----" << endl;
    cout << "add(5, 3) = " << add(5, 3) << endl;
    cout << "add(10, 20) = " << add(10, 20) << endl;

    // Lambda with capture - captures 'multiplier' from surrounding scope
    int multiplier = 4;
    auto multiplyByFactor = [multiplier](int x) {
        return x * multiplier;
    };
    cout << "\nmultiplyByFactor(7) = " << multiplyByFactor(7) << endl;

    return 0;
}