// Practical 7 — File Stream (Binary Files)
// Problem Statement: Write a program to store Employee objects (using a struct/class) into a binary file using write(), and then read them back using read(), displaying all employee records.a

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Employee {
    int empId;
    char name[30];
    float salary;
};

int main() {
    // ----- Writing Employee records to a binary file -----
    ofstream outFile("employees.dat", ios::binary);

    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    int n = 4;
    Employee emp;

    cout << "----- Enter details of " << n << " employees -----" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> emp.empId;
        cout << "Name: ";
        cin >> emp.name;
        cout << "Salary: ";
        cin >> emp.salary;

        // write() writes raw bytes of the object to the file
        outFile.write(reinterpret_cast<char *>(&emp), sizeof(Employee));
    }

    outFile.close();
    cout << "\nEmployee records written to employees.dat successfully." << endl;

    // ----- Reading Employee records from the binary file -----
    ifstream inFile("employees.dat", ios::binary);

    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\n----- Employee Records from Binary File -----" << endl;
    Employee tempEmp;
    while (inFile.read(reinterpret_cast<char *>(&tempEmp), sizeof(Employee))) {
        cout << "ID: " << tempEmp.empId
             << " | Name: " << tempEmp.name
             << " | Salary: " << tempEmp.salary << endl;
    }

    inFile.close();

    return 0;
}