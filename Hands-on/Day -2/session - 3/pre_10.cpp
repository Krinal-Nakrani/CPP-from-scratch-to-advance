// Practical 10 — Function Overriding & Virtual Functions

// Problem Statement: Modify the Shape class to declare area() as a virtual function. Override it in Circle, Rectangle, and Triangle. Demonstrate the difference in output compared to Practical 9.

#include <iostream>
using namespace std;

class Shape {
protected:
    string shapeName;

public:
    Shape(string name) {
        shapeName = name;
    }

    // Declared VIRTUAL
    virtual double area() {
        cout << shapeName << ": generic Shape::area() called -> ";
        return 0;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape("Circle") {
        radius = r;
    }

    // Overriding base class virtual function
    double area() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : Shape("Rectangle") {
        length = l;
        width = w;
    }

    double area() override {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : Shape("Triangle") {
        base = b;
        height = h;
    }

    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    Circle c(7);
    Rectangle r(5, 4);
    Triangle t(6, 8);

    Shape *shapePtr;

    cout << "----- Calling area() via Base Class Pointer (virtual) -----" << endl;

    shapePtr = &c;
    cout << "Circle area (via Shape*)   : " << shapePtr->area() << endl;

    shapePtr = &r;
    cout << "Rectangle area (via Shape*): " << shapePtr->area() << endl;

    shapePtr = &t;
    cout << "Triangle area (via Shape*) : " << shapePtr->area() << endl;

    return 0;
}