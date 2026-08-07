// Practical 10 — STL Classes (Stack, Queue)
// Part A: Reverse a String Using STL Stack

// Problem Statement: Write a program to reverse a string using the STL stack.

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    stack<char> charStack;

    // Push every character onto the stack
    for (char ch : str) {
        charStack.push(ch);
    }

    string reversedStr = "";

    // Pop characters off the stack - they come out in reverse order
    while (!charStack.empty()) {
        reversedStr += charStack.top();   // access the top element
        charStack.pop();                  // remove the top element
    }

    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << reversedStr << endl;

    return 0;
}