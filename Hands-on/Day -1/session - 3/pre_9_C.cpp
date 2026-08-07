// Part C: Check if Two Strings are Anagrams
// Problem Statement: Write a program to check if two strings are anagrams of each other.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        cout << "Strings are NOT anagrams (different lengths)." << endl;
        return 0;
    }

    int count[256] = {0};  // frequency array for all ASCII characters

    // Increment count for each character in str1
    for (int i = 0; i < len1; i++) {
        count[(int)str1[i]]++;
    }

    // Decrement count for each character in str2
    for (int i = 0; i < len2; i++) {
        count[(int)str2[i]]--;
    }

    // If all counts are back to zero, strings are anagrams
    bool isAnagram = true;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        cout << "The strings ARE anagrams." << endl;
    else
        cout << "The strings are NOT anagrams." << endl;

    return 0;
}