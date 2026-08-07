// Part B: Prime Number Check
// Problem Statement: Write a program to check whether a given number is prime.

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is a Prime Number." << endl;
    else
        cout << n << " is NOT a Prime Number." << endl;

    return 0;
}