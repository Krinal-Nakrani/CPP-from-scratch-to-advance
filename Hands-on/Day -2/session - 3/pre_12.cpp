// Practical 12 — Abstract Classes
// Problem Statement: Convert Shape into an abstract class by making area() a pure virtual function (virtual double area() = 0;). Attempt to instantiate Shape directly (observe the compiler error) and confirm that only derived classes implementing area() can be instantiated.

#include <iostream>
using namespace std;

// Abstract class - contains at least one pure virtual function
class Shape {
protected:
    string shapeName;

public:
    Shape(string name) {
        shapeName = name;
    }

    // Pure virtual function - no implementation here, makes Shape abstract
    virtual double area() = 0;

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

    // MUST override area(), otherwise Circle also becomes abstract
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

int main() {
    // Shape s("Generic");  
    // ERROR if uncommented: cannot declare variable 's' to be of abstract type 'Shape'
    // because 'Shape' has a pure virtual function 'area()' with no implementation

    cout << "----- Only Derived (Concrete) Classes Can Be Instantiated -----" << endl;
    Circle c(7);
    Rectangle r(5, 4);

    cout << c.getName() << " Area: " << c.area() << endl;
    cout << r.getName() << " Area: " << r.area() << endl;

    // Abstract class pointer CAN point to derived objects - this is still allowed and useful
    Shape *shapePtr = &c;
    cout << "\nVia abstract class pointer -> " << shapePtr->getName() << " Area: " << shapePtr->area() << endl;

    return 0;
}