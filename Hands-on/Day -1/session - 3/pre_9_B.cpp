// Part B: Reverse a String (Without Built-in Function)
// Problem Statement: Write a program to reverse a string without using any built-in reverse function.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}