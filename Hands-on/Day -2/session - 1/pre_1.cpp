// Practical 1 — Operator Overloading (Binary Operator)

// Problem Statement: Design a class Complex (with real and imaginary parts) and overload the + operator to add two complex numbers. Overload the == operator to check if two complex numbers are equal.

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Overload + operator (member function)
    Complex operator+(const Complex &c2) {
        Complex temp;
        temp.real = this->real + c2.real;
        temp.imag = this->imag + c2.imag;
        return temp;
    }

    // Overload == operator (member function)
    bool operator==(const Complex &c2) {
        return (this->real == c2.real && this->imag == c2.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 4.2);
    Complex c2(1.5, 2.8);

    cout << "----- Complex Number Addition -----" << endl;
    Complex c3 = c1 + c2;   // internally calls c1.operator+(c2)
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c1 + c2 = "; c3.display();

    cout << "\n----- Complex Number Equality -----" << endl;
    Complex c4(3.5, 4.2);
    if (c1 == c4)
        cout << "c1 and c4 are equal." << endl;
    else
        cout << "c1 and c4 are NOT equal." << endl;

    if (c1 == c2)
        cout << "c1 and c2 are equal." << endl;
    else
        cout << "c1 and c2 are NOT equal." << endl;

    return 0;
}