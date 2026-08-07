// Practical 2 — Friends (as helper for operator overloading)
// Problem Statement: Using the Complex class above, overload the + operator as a friend function instead of a member function, and explain why a friend function is needed when the left operand isn't an object of the class (e.g., 2 + c1).


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

    Complex(float r, float i = 0) {
        real = r;
        imag = i;
    }

    // Friend function declaration - NOT a member of the class
    friend Complex operator+(const Complex &c1, const Complex &c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition (note: no ClassName:: prefix, not a member)
Complex operator+(const Complex &c1, const Complex &c2) {
    Complex temp;
    temp.real = c1.real + c2.real;   // direct access to private members - allowed because it's a friend
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(3.5, 4.2);

    cout << "----- Complex + Complex (friend function) -----" << endl;
    Complex c2(1.5, 2.8);
    Complex c3 = c1 + c2;
    c3.display();

    cout << "\n----- int + Complex (only possible via friend function) -----" << endl;
    // Here, the left operand '2' is NOT a Complex object, so this can't be a member function call
    Complex c4 = 2 + c1;   // '2' is implicitly converted to Complex(2, 0) via the constructor
    c4.display();

    return 0;
}