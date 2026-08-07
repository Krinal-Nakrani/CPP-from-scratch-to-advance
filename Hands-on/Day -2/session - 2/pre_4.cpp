// Practical 4 — Basic Inheritance & Access Specifiers

// Problem Statement: Create a base class Person (name, age) and derive a class Employee (salary, department) from it using public inheritance. Demonstrate how private, protected, and public members of Person are accessed in Employee and in main().

#include <iostream>
using namespace std;

class Person {
private:
    int aadharNumber;      // private - not accessible in derived class or main()

protected:
    string name;
    int age;                // protected - accessible in derived class, not in main()

public:
    string address;         // public - accessible everywhere

    void setAadhar(int a) {
        aadharNumber = a;
    }

    void setPersonDetails(string n, int ag) {
        name = n;
        age = ag;
    }

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << endl;
    }
};

class Employee : public Person {
private:
    float salary;
    string department;

public:
    void setEmployeeDetails(float sal, string dept) {
        salary = sal;
        department = dept;

        // 'name' and 'age' are protected in Person -> accessible here in derived class
        cout << "(Inside Employee) Accessing protected members -> Name: " << name << ", Age: " << age << endl;

        // 'aadharNumber' is private in Person -> NOT accessible here
        // aadharNumber = 12345;   // ERROR if uncommented
    }

    void displayEmployee() {
        cout << "Name: " << name << " | Age: " << age
             << " | Salary: " << salary << " | Department: " << department << endl;
    }
};

int main() {
    Employee e1;

    // Public members - accessible directly in main()
    e1.address = "Pune, Maharashtra";
    e1.setPersonDetails("Rohan Patil", 28);
    e1.setEmployeeDetails(45000, "IT");

    // e1.name = "Test";     // ERROR - protected, not accessible in main()
    // e1.aadharNumber = 1;  // ERROR - private, not accessible anywhere outside Person

    cout << "\n----- Employee Details -----" << endl;
    e1.displayEmployee();

    return 0;
}