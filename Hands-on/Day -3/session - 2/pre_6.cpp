// Practical 6 — File Stream (Text Files — Writing & Reading)
// Problem Statement: Write a program to accept details of 3 students (name, marks) from the user and write them to a text file students.txt. Then read and display the contents of the file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // ----- Writing to a text file -----
    ofstream outFile("students.txt");   // opens (creates) file for writing

    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    string name;
    float marks;

    cout << "----- Enter details of 3 students -----" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks;

        outFile << name << " " << marks << endl;   // write to file
    }

    outFile.close();   // always close after writing
    cout << "\nData written to students.txt successfully." << endl;

    // ----- Reading from the text file -----
    ifstream inFile("students.txt");   // opens file for reading

    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\n----- Contents of students.txt -----" << endl;
    while (inFile >> name >> marks) {   // reads until end of file
        cout << "Name: " << name << " | Marks: " << marks << endl;
    }

    inFile.close();

    return 0;
}