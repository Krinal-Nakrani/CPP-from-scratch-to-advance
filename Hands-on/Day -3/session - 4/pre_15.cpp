// Practical 15 — In-Class Initializer & Delegating Constructor

// Problem Statement: Design a class Config with in-class member initializers. Add a delegating constructor that calls another constructor of the same class to avoid duplicate initialization code.

#include <iostream>
#include <string>
using namespace std;

class Config {
private:
    int timeout = 30;              // in-class initializer - default value if not set otherwise
    string mode = "default";       // in-class initializer
    bool loggingEnabled = false;   // in-class initializer

public:
    // Primary constructor - does the actual full initialization
    Config(int t, string m, bool log) {
        timeout = t;
        mode = m;
        loggingEnabled = log;
        cout << "Primary Constructor called -> timeout=" << timeout
             << ", mode=" << mode << ", logging=" << loggingEnabled << endl;
    }

    // Delegating constructor - takes fewer arguments, delegates to the primary constructor
    Config(int t, string m) : Config(t, m, false) {
        cout << "Delegating Constructor (2-arg) called." << endl;
    }

    // Another delegating constructor - uses in-class initializer defaults entirely
    Config() : Config(30, "default", false) {
        cout << "Delegating Constructor (default) called." << endl;
    }

    void display() {
        cout << "Config -> timeout=" << timeout
             << ", mode=" << mode
             << ", loggingEnabled=" << (loggingEnabled ? "true" : "false") << endl;
    }
};

int main() {
    cout << "----- Using default constructor (fully delegated) -----" << endl;
    Config c1;
    c1.display();

    cout << "\n----- Using 2-argument constructor (delegates to 3-arg) -----" << endl;
    Config c2(60, "verbose");
    c2.display();

    cout << "\n----- Using full 3-argument constructor directly -----" << endl;
    Config c3(90, "silent", true);
    c3.display();

    return 0;
}