// Part B: Lambda with sort() for Descending Order

// Problem Statement: Use a lambda with the STL sort() function to sort a vector of numbers in descending order.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {45, 12, 78, 23, 56, 8};

    cout << "----- Before Sorting -----" << endl;
    for (int n : numbers) cout << n << " ";
    cout << endl;

    // sort() with a lambda as the custom comparator
    sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b;   // return true if 'a' should come BEFORE 'b' -> descending order
    });

    cout << "\n----- After Sorting (Descending) -----" << endl;
    for (int n : numbers) cout << n << " ";
    cout << endl;

    return 0;
}