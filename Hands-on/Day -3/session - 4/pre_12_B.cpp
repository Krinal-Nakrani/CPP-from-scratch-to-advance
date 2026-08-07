// Part B: final Keyword (Class and Virtual Function)
// Problem Statement: Create a class marked final and attempt to derive from it (observe the compiler error); mark a virtual function as final in a base class and attempt to override it in a derived class.

#include <iostream>
using namespace std;

// A class marked final - cannot be inherited from at all
class Vehicle final {
public:
    void showType() {
        cout << "This is a Vehicle." << endl;
    }
};

// Attempting to derive from a final class - UNCOMMENT to see compiler error
// class Car : public Vehicle {
// };
// ERROR: "cannot derive from 'final' class 'Vehicle'"

// A base class with a final virtual function
class Shape {
public:
    virtual void draw() final {
        cout << "Shape::draw() - final, cannot be overridden." << endl;
    }

    virtual void describe() {
        cout << "Shape::describe() - can still be overridden." << endl;
    }
};

class Circle : public Shape {
public:
    // Attempting to override a final virtual function - UNCOMMENT to see compiler error
    // void draw() override {
    //     cout << "Circle::draw()" << endl;
    // }
    // ERROR: "declaration of 'draw' overrides a 'final' function"

    // This override is fine, since describe() was NOT marked final
    void describe() override {
        cout << "Circle::describe() - overridden successfully." << endl;
    }
};

int main() {
    Vehicle v;
    v.showType();

    cout << "\n----- final virtual function demonstration -----" << endl;
    Circle c;
    c.draw();       // calls Shape::draw() - the only version that exists
    c.describe();   // calls Circle::describe() - successfully overridden

    return 0;
}