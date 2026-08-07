// Practical 8 — Generalization & Specialization
// Problem Statement: Design a class hierarchy: Shape (generalized base class) → Circle, Rectangle, Triangle (specialized derived classes), each implementing their own area() calculation.

#include <iostream>
using namespace std;

class Shape {
protected:
    string shapeName;

public:
    Shape(string name) {
        shapeName = name;
    }

    double area() {
        cout << shapeName << ": generic shape, area not defined." << endl;
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

    cout << "----- Area of Each Shape -----" << endl;
    cout << "Circle Area    : " << c.area() << endl;
    cout << "Rectangle Area : " << r.area() << endl;
    cout << "Triangle Area  : " << t.area() << endl;

    return 0;
}