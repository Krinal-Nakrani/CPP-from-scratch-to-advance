// Practical 11 — Runtime Polymorphism

// Problem Statement: Create an array of Shape* pointers pointing to different derived class objects. Loop through the array and call area() on each, demonstrating that the correct overridden function is called at runtime.

#include <iostream>
using namespace std;

class Shape {
protected:
    string shapeName;

public:
    Shape(string name) {
        shapeName = name;
    }

    virtual double area() {
        return 0;
    }

    string getName() {
        return shapeName;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape("Circle") {
        radius = r;
    }

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
    // Array of base class pointers, each pointing to a different derived object
    Shape *shapes[3];

    shapes[0] = new Circle(7);
    shapes[1] = new Rectangle(5, 4);
    shapes[2] = new Triangle(6, 8);

    cout << "----- Runtime Polymorphism: Area of Different Shapes -----" << endl;
    for (int i = 0; i < 3; i++) {
        // Same function call, but different behavior depending on actual object type
        cout << shapes[i]->getName() << " Area: " << shapes[i]->area() << endl;
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}