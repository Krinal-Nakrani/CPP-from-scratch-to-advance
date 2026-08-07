// Part B: Array Traversal Using Pointer Arithmetic
// Problem Statement: Write a program to access and print array elements using pointer arithmetic instead of array indexing.

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // pointer pointing to first element of array

    cout << "----- Array elements using pointer arithmetic -----" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << " : " << *(ptr + i) << endl;
    }

    return 0;
}