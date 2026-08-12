// Practical 1 — Operator Overloading (Binary Operator)
// Problem Statement: Design a class Complex (with real and imaginary parts)
// and overload the + operator to add two complex numbers.
// Overload the == operator to check if two complex numbers are equal.

#include <iostream>
using namespace std;

class Complex {
public:
    float real;
    float imag;

    // Constructor to set values while creating an object
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Overload + operator to add two Complex objects
    Complex operator+(Complex c2) {
        float newReal = real + c2.real;
        float newImag = imag + c2.imag;

        Complex result(newReal, newImag);
        return result;
    }

    // Overload == operator to compare two Complex objects
    bool operator==(Complex c2) {
        if (real == c2.real && imag == c2.imag) {
            return true;
        } else {
            return false;
        }
    }

    // Function to print the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 4.2);
    Complex c2(1.5, 2.8);

    cout << "----- Complex Number Addition -----" << endl;

    Complex c3 = c1 + c2;   // this calls operator+ automatically

    cout << "c1 = ";
    c1.display();

    cout << "c2 = ";
    c2.display();

    cout << "c1 + c2 = ";
    c3.display();

    cout << endl;
    cout << "----- Complex Number Equality -----" << endl;

    Complex c4(3.5, 4.2);

    if (c1 == c4) {
        cout << "c1 and c4 are equal." << endl;
    } else {
        cout << "c1 and c4 are NOT equal." << endl;
    }

    if (c1 == c2) {
        cout << "c1 and c2 are equal." << endl;
    } else {
        cout << "c1 and c2 are NOT equal." << endl;
    }

    return 0;
}