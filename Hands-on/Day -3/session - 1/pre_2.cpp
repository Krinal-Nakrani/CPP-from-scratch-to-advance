// Practical 2 — Constant Qualifier
// Problem Statement: Demonstrate a const variable, a const member function, and a function accepting a const reference parameter.a

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    // const member function - guarantees it will NOT modify any data member
    double getArea() const {
        return 3.14159 * radius * radius;
        // radius = 100;   // ERROR if uncommented - cannot modify member in a const function
    }
};

// Function accepting a const reference parameter
void printCircleArea(const Circle &c) {
    // c is passed by reference (avoids copying), but 'const' prevents modification
    cout << "Area (via const reference): " << c.getArea() << endl;
    // Only const member functions of Circle can be called on 'c' here
}

int main() {
    // 1. const variable
    const double PI = 3.14159;
    cout << "----- const Variable -----" << endl;
    cout << "PI = " << PI << endl;
    // PI = 3.14;   // ERROR if uncommented - cannot modify a const variable

    // 2. const member function
    cout << "\n----- const Member Function -----" << endl;
    Circle c1(5);
    cout << "Circle Area: " << c1.getArea() << endl;

    // 3. const reference parameter
    cout << "\n----- const Reference Parameter -----" << endl;
    printCircleArea(c1);

    return 0;
}