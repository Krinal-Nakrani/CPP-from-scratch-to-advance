// Practical 9 — Base Class Pointer, Derived Class Object

// Problem Statement: Using the Shape hierarchy from Practical 8, create a Shape* pointer and assign it objects of Circle, Rectangle, and Triangle one at a time. Call area() through the base pointer and observe the default (non-virtual) behavior

#include <iostream>
using namespace std;

class Shape {
protected:
    string shapeName;

public:
    Shape(string name) {
        shapeName = name;
    }

    // NOT virtual
    double area() {
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

    double area() {
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

    double area() {
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

    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    Circle c(7);
    Rectangle r(5, 4);
    Triangle t(6, 8);

    Shape *shapePtr;

    cout << "----- Calling area() via Base Class Pointer (non-virtual) -----" << endl;

    shapePtr = &c;
    cout << "Circle area (via Shape* )   : " << shapePtr->area() << endl;

    shapePtr = &r;
    cout << "Rectangle area (via Shape*) : " << shapePtr->area() << endl;

    shapePtr = &t;
    cout << "Triangle area (via Shape*)  : " << shapePtr->area() << endl;

    return 0;
}