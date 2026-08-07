// Part B: Friend Class

// Problem Statement: Declare one class as a friend class of another and demonstrate direct access to private members.

#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;

public:
    Engine(int hp) {
        horsepower = hp;
    }

    // Declare CarInspector as a friend class
    friend class CarInspector;
};

class CarInspector {
public:
    void inspect(Engine &e) {
        // Direct access to Engine's private member - allowed because CarInspector is a friend class
        cout << "Inspecting Engine..." << endl;
        cout << "Horsepower: " << e.horsepower << endl;

        if (e.horsepower >= 100)
            cout << "Status: Passed inspection." << endl;
        else
            cout << "Status: Failed inspection (low power)." << endl;
    }
};

int main() {
    Engine engine1(120);
    CarInspector inspector;

    cout << "----- Friend Class Demonstration -----" << endl;
    inspector.inspect(engine1);

    return 0;
}