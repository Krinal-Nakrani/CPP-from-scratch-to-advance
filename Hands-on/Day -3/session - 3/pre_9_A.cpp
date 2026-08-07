// Practical 9 — Data Structures & Types (Vector, List)
// Part A: Vector — Store, Sort, and Display Numbers

// Problem Statement: Write a program using vector<int> to store, sort, and display a list of numbers.

#include <iostream>
#include <vector>
#include <algorithm>   // required for sort()
using namespace std;

int main() {
    vector<int> numbers;
    int n, val;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        numbers.push_back(val);   // dynamically adds element to the end
    }

    cout << "\n----- Before Sorting -----" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    sort(numbers.begin(), numbers.end());   // sorts in ascending order

    cout << "\n----- After Sorting -----" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "\nTotal elements (size): " << numbers.size() << endl;

    return 0;
}