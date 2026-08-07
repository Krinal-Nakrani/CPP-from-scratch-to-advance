// Practical 12 — Scope Resolution Operator & Inline Function
// Problem Statement: Define a class Rectangle with member function declarations inside the class and definitions outside using the scope resolution operator (::). Write an inline function getArea() and observe the use of the this pointer when a parameter name shadows a member name.

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Function declared inside class, defined outside using ::
    void setDimensions(float length, float width);
    void displayDimensions();

    // Inline function - defined inside the class itself
    inline float getArea() {
        return length * width;
    }
};

// Definition outside the class using Scope Resolution Operator (::)
void Rectangle::setDimensions(float length, float width) {
    // Parameter names 'length' and 'width' shadow the member variables
    // 'this' pointer is used to explicitly refer to the class's own members
    this->length = length;
    this->width = width;
}

void Rectangle::displayDimensions() {
    cout << "Length: " << length << ", Width: " << width << endl;
}

int main() {
    Rectangle r;
    r.setDimensions(10.5, 5.2);
    r.displayDimensions();

    cout << "Area: " << r.getArea() << endl;

    return 0;
}