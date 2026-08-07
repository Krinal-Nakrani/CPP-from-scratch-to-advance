// Part B: Palindrome Check (Character Array)
// Problem Statement: Write a program to check whether a given string (character array) is a palindrome.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    int len = strlen(str);
    bool isPalindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << str << " is a Palindrome." << endl;
    else
        cout << str << " is NOT a Palindrome." << endl;

    return 0;
}