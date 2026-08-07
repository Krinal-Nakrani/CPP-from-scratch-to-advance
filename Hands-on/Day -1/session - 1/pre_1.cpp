// Practical 1 — Syntax, Variables & Datatypes
// Problem Statement: Write a program to accept a student's roll number, name, age, and CGPA (using appropriate datatypes) and display them in a formatted manner.

#include <iostream>
using namespace std;

int main() {
    int rollNo;
    char name[30];
    int age;
    float cgpa;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter CGPA: ";
    cin >> cgpa;

    cout << "\n----- Student Details -----" << endl;
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << name << endl;
    cout << "Age         : " << age << endl;
    cout << "CGPA        : " << cgpa << endl;

    return 0;
}