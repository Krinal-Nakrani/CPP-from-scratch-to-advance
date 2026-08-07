// Part C: Number Pattern (Nested Loops)
// Problem Statement: Write a program to print the following pattern using nested loops:
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}