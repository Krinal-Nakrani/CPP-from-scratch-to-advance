// Practical 5 — Constructor in Inheritance

// Problem Statement: Extend the Person–Employee example to include constructors in both classes. Demonstrate the order of constructor calls (base before derived), and pass values from the derived class constructor to the base class constructor.

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Person Constructor called -> Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    float salary;
    string department;

public:
    // Derived class constructor passes values to base constructor via initializer list
    Employee(string n, int a, float sal, string dept) : Person(n, a) {
        salary = sal;
        department = dept;
        cout << "Employee Constructor called -> Salary: " << salary << ", Department: " << department << endl;
    }

    void display() {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Name: " << name << " | Age: " << age
             << " | Salary: " << salary << " | Department: " << department << endl;
    }
};

int main() {
    cout << "Creating Employee object...\n" << endl;
    Employee e1("Sneha Kulkarni", 26, 52000, "HR");

    e1.display();

    return 0;
}