// Practical 6 — IS-A vs HAS-A
// Problem Statement: Implement an IS-A relationship (Manager IS-A Employee via inheritance) and a HAS-A relationship (Employee HAS-A Address via composition). Discuss when to prefer inheritance over composition.


#include <iostream>
using namespace std;

// ---------- HAS-A relationship (Composition) ----------
class Address {
public:
    string city;
    string state;
    string pincode;

    Address(string c, string s, string p) {
        city = c;
        state = s;
        pincode = p;
    }

    void display() {
        cout << "Address: " << city << ", " << state << " - " << pincode << endl;
    }
};

class Employee {
protected:
    string name;
    float salary;
    Address empAddress;   // Employee HAS-A Address (composition)

public:
    Employee(string n, float sal, Address addr) : empAddress(addr) {
        name = n;
        salary = sal;
    }

    void display() {
        cout << "Employee: " << name << " | Salary: " << salary << endl;
        empAddress.display();
    }
};

// ---------- IS-A relationship (Inheritance) ----------
class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(string n, float sal, Address addr, int team)
        : Employee(n, sal, addr) {
        teamSize = team;
    }

    void displayManager() {
        cout << "\n----- Manager Details (Manager IS-A Employee) -----" << endl;
        display();   // inherited from Employee
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    Address addr1("Mumbai", "Maharashtra", "400001");

    cout << "----- HAS-A: Employee contains an Address object -----" << endl;
    Employee e1("Kiran Joshi", 40000, addr1);
    e1.display();

    Manager m1("Ananya Rao", 75000, addr1, 8);
    m1.displayManager();

    return 0;
}