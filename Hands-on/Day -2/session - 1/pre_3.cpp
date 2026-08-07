// Practical 3 — Insertion Operator Overloading
// Problem Statement: Overload the << (insertion) operator for the Complex class so that cout << c1; directly prints the complex number in the form a + bi, instead of writing a separate display function.


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

    Complex operator+(const Complex &c2) {
        return Complex(real + c2.real, imag + c2.imag);
    }

    // Overload << as a friend function
    friend ostream& operator<<(ostream &out, const Complex &c);
};

// Definition of overloaded << operator
ostream& operator<<(ostream &out, const Complex &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

int main() {
    Complex c1(3.5, 4.2);
    Complex c2(1.5, 2.8);
    Complex c3 = c1 + c2;

    cout << "----- Using overloaded << operator -----" << endl;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << c3 << endl;

    return 0;
}