// Practical 7 — Ways of Inheritance (public, private, protected)
// Problem Statement: Write three versions of a class Base derived as public, private, and protected in three separate derived classes. Try accessing base class members from main() in each case and observe the compilation differences.

#include <iostream>
using namespace std;

class Base {
private:
    int privateVar = 10;   // Only accessible within Base class
protected:
    int protectedVar = 20;   // Accessible within Base and derived classes
public:
    int publicVar = 30;   // Accessible from anywhere

    void show() {
        cout << "privateVar=" << privateVar
             << " protectedVar=" << protectedVar
             << " publicVar=" << publicVar << endl;
    }
};

// ---------- Public Inheritance ----------
class PublicDerived : public Base {
public:
    void test() {
        // protectedVar accessible here (protected in Base -> protected in PublicDerived)
        // publicVar accessible here (public in Base -> public in PublicDerived)
        cout << "PublicDerived -> protectedVar=" << protectedVar << ", publicVar=" << publicVar << endl;
    }
};

// ---------- Private Inheritance ----------
class PrivateDerived : private Base {
public:
    void test() {
        // protectedVar and publicVar both become PRIVATE in PrivateDerived
        cout << "PrivateDerived -> protectedVar=" << protectedVar << ", publicVar=" << publicVar << endl;
    }
};

// ---------- Protected Inheritance ----------
class ProtectedDerived : protected Base {
public:
    void test() {
        // protectedVar and publicVar both become PROTECTED in ProtectedDerived
        cout << "ProtectedDerived -> protectedVar=" << protectedVar << ", publicVar=" << publicVar << endl;
    }
};

int main() {
    PublicDerived pubObj;
    cout << "----- Public Inheritance -----" << endl;
    pubObj.test();
    cout << "pubObj.publicVar accessed directly in main(): " << pubObj.publicVar << endl;
    // pubObj.protectedVar;  // ERROR - still protected, not accessible in main()

    PrivateDerived privObj;
    cout << "\n----- Private Inheritance -----" << endl;
    privObj.test();
    // privObj.publicVar;    // ERROR - publicVar became private in PrivateDerived, not accessible in main()

    ProtectedDerived protObj;
    cout << "\n----- Protected Inheritance -----" << endl;
    protObj.test();
    // protObj.publicVar;    // ERROR - publicVar became protected in ProtectedDerived, not accessible in main()

    return 0;
}