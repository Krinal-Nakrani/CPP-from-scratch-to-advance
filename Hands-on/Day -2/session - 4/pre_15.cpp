// Practical 15 — Nested Class

// Problem Statement: Design an Engine class nested inside a Car class. Create an object of Car that internally creates and uses an Engine object.

#include <iostream>
using namespace std;

class Car {
private:
    string model;

    // Nested class - defined entirely inside Car
    class Engine {
    private:
        int horsepower;

    public:
        Engine(int hp) {
            horsepower = hp;
        }

        void showEngineInfo() {
            cout << "Engine Horsepower: " << horsepower << " HP" << endl;
        }
    };

    Engine carEngine;   // Car HAS-A Engine (nested class used as a member)

public:
    Car(string m, int hp) : carEngine(hp) {
        model = m;
    }

    void showCarInfo() {
        cout << "\n----- Car Details -----" << endl;
        cout << "Model: " << model << endl;
        carEngine.showEngineInfo();   // Car internally uses its Engine object
    }
};

int main() {
    cout << "----- Creating a Car (which internally creates its Engine) -----" << endl;
    Car myCar("Tata Nexon", 120);

    myCar.showCarInfo();

    return 0;
}