// Practical 11 — Map Classes
// Problem Statement: Write a program using map<string, int> to store student names as keys and their marks as values. Demonstrate insertion, searching, updating, and iterating.

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> studentMarks;

    // ----- Insertion -----
    studentMarks["Aarav"] = 88;
    studentMarks["Diya"] = 92;
    studentMarks.insert({"Kabir", 76});   // alternate insertion syntax

    cout << "----- After Insertion -----" << endl;
    for (auto &entry : studentMarks) {
        cout << entry.first << " : " << entry.second << endl;
    }

    // ----- Searching -----
    cout << "\n----- Searching for 'Diya' -----" << endl;
    auto it = studentMarks.find("Diya");
    if (it != studentMarks.end()) {
        cout << "Found -> " << it->first << " : " << it->second << endl;
    } else {
        cout << "Diya not found." << endl;
    }

    cout << "\n----- Searching for 'Isha' (not present) -----" << endl;
    if (studentMarks.find("Isha") == studentMarks.end()) {
        cout << "Isha not found in the map." << endl;
    }

    // ----- Updating -----
    cout << "\n----- Updating Kabir's marks -----" << endl;
    studentMarks["Kabir"] = 80;   // key already exists, so this updates rather than inserts
    cout << "Kabir's updated marks: " << studentMarks["Kabir"] << endl;

    // ----- Iterating over all entries -----
    cout << "\n----- Final Map Contents (sorted by key) -----" << endl;
    for (auto &entry : studentMarks) {
        cout << entry.first << " -> " << entry.second << " marks" << endl;
    }

    return 0;
}