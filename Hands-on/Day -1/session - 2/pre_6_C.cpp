// Part C: Addition of Two 3x3 Matrices (Two-Dimensional Arrays)
// Problem Statement: Write a program to add two 3x3 matrices using two-dimensional arrays.

#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], sum[3][3];

    cout << "Enter elements of first 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Enter elements of second 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "\nSum of the two matrices:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}