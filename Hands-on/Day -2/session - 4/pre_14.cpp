// Practical 14 — Static Members
// Problem Statement: Design a class Counter with a static data member count that increments every time an object is created. Display the total number of objects created using a static member function.

#include <iostream>
using namespace std;

class Counter {
private:
    static int count;   // static data member - shared across ALL objects

public:
    Counter() {
        count++;   // increments the single shared copy every time an object is created
        cout << "Object created. Current count: " << count << endl;
    }

    // Static member function - can access only static members
    static int getCount() {
        return count;
    }
};

// Definition and initialization of static member (required outside the class)
int Counter::count = 0;

int main() {
    cout << "----- Creating Counter objects -----" << endl;

    Counter c1;
    Counter c2;
    Counter c3;

    cout << "\n----- Total objects created (via static function) -----" << endl;
    cout << "Total count: " << Counter::getCount() << endl;

    // Can also be called via an object, though not required
    cout << "Total count (via c1): " << c1.getCount() << endl;

    return 0;
}