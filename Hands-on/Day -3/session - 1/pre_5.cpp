// Practical 5 — Destructor & Virtual Destructor
// Problem Statement: Demonstrate constructor/destructor messages, the problem of a missing virtual destructor (derived destructor skipped), and the fix using a virtual destructor.

#include <iostream>
using namespace std;

// ---------- WITHOUT virtual destructor (the problem) ----------
class Base {
public:
    Base() {
        cout << "Base Constructor called." << endl;
    }
    ~Base() {   // NOT virtual
        cout << "Base Destructor called." << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor called." << endl;
    }
    ~Derived() {
        cout << "Derived Destructor called." << endl;
    }
};

// ---------- WITH virtual destructor (the fix) ----------
class BaseFixed {
public:
    BaseFixed() {
        cout << "BaseFixed Constructor called." << endl;
    }
    virtual ~BaseFixed() {   // virtual
        cout << "BaseFixed Destructor called." << endl;
    }
};

class DerivedFixed : public BaseFixed {
public:
    DerivedFixed() {
        cout << "DerivedFixed Constructor called." << endl;
    }
    ~DerivedFixed() {
        cout << "DerivedFixed Destructor called." << endl;
    }
};

int main() {
    cout << "----- WITHOUT virtual destructor (problem) -----" << endl;
    Base *bptr = new Derived();
    delete bptr;
    // Expected (ideally): Derived Destructor, then Base Destructor
    // Actual (bug): only Base Destructor is called - Derived Destructor is SKIPPED!

    cout << "\n----- WITH virtual destructor (fixed) -----" << endl;
    BaseFixed *bfptr = new DerivedFixed();
    delete bfptr;
    // Now: DerivedFixed Destructor called first, THEN BaseFixed Destructor - correct cleanup

    return 0;
}