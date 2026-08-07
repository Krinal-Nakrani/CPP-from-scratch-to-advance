// Practical 8 — Structures
// Problem Statement: Write a program using a struct student (with roll number, name, and marks) to accept and display details of 3 students, and find and display the student with the highest marks.

#include <iostream>
using namespace std;

struct student {
    int rollNo;
    char name[30];
    float marks;
};

int main() {
    student s[3];

    // Accept details of 3 students
    for (int i = 0; i < 3; i++) {
        cout << "\n----- Enter details of Student " << i + 1 << " -----" << endl;
        cout << "Roll Number: ";
        cin >> s[i].rollNo;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Marks: ";
        cin >> s[i].marks;
    }

    // Display details of all students
    cout << "\n----- Student Details -----" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Roll No: " << s[i].rollNo
             << " | Name: " << s[i].name
             << " | Marks: " << s[i].marks << endl;
    }

    // Find student with highest marks
    int highestIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (s[i].marks > s[highestIndex].marks)
            highestIndex = i;
    }

    cout << "\n----- Topper -----" << endl;
    cout << "Roll No: " << s[highestIndex].rollNo
         << " | Name: " << s[highestIndex].name
         << " | Marks: " << s[highestIndex].marks << endl;

    return 0;
}