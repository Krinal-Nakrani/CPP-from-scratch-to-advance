// Practical 13 — Struct vs Class

// Problem Statement: Rewrite the student structure (Practical 8) as a class with private members and public accessor/mutator functions. Compare and note the differences in default access specifiers and design intent.

// #include <iostream>
// using namespace std;

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    char name[30];
    float marks;

public:
    // Mutator functions
    void setRollNo(int r) {
        rollNo = r;
    }
    void setName(const char *n) {
        strcpy(name, n);
    }
    void setMarks(float m) {
        marks = m;
    }

    // Accessor functions
    int getRollNo() {
        return rollNo;
    }
    string getName() {
        return name;
    }
    float getMarks() {
        return marks;
    }

    void display() {
        cout << "Roll No: " << rollNo
             << " | Name: " << name
             << " | Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.setRollNo(1);
    s1.setName("Priya Deshmukh");
    s1.setMarks(88.5);

    cout << "----- Student Details (via Class) -----" << endl;
    s1.display();

    cout << "\nAccessing via getter -> Marks: " << s1.getMarks() << endl;

    return 0;
}