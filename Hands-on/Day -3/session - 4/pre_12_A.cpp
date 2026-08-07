// Practical 12 — Auto & Final Keyword
// Part A: Vector Iteration Using auto

// Problem Statement: Rewrite the loop from Practical 9 (vector iteration) using auto instead of explicit iterator types.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {45, 12, 78, 23, 56};

    cout << "----- Using explicit iterator type -----" << endl;
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "\n----- Using 'auto' instead -----" << endl;
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "\n----- Using 'auto' in range-based for loop -----" << endl;
    for (auto val : numbers) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}