// Practical 9 — Strings
// Part A: Count Vowels, Consonants, Digits & Spaces
// Problem Statement: Write a program to count the number of vowels, consonants, digits, and spaces in a given string.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char lower = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch; // convert to lowercase
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch == ' ') {
            spaces++;
        }
    }

    cout << "\n----- Character Count -----" << endl;
    cout << "Vowels     : " << vowels << endl;
    cout << "Consonants : " << consonants << endl;
    cout << "Digits     : " << digits << endl;
    cout << "Spaces     : " << spaces << endl;

    return 0;
}