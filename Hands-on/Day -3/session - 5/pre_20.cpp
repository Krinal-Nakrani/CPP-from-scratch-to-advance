// Practical 20 — Constructor in Inheritance (Consolidation)
// Problem Statement: Design a base class Vehicle and derived class Car, each with both a default constructor and a parameterized constructor. Demonstrate all four combinations of constructor calls by explicitly invoking the appropriate base constructor from the derived class's initializer list.

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string type;

public:
    // Default constructor
    Vehicle() {
        type = "Generic Vehicle";
        cout << "Vehicle Default Constructor called -> type: " << type << endl;
    }

    // Parameterized constructor
    Vehicle(string t) {
        type = t;
        cout << "Vehicle Parameterized Constructor called -> type: " << type << endl;
    }
};

class Car : public Vehicle {
private:
    string brand;

public:
    // Combination 1: Derived default -> Base default (implicit, no initializer list needed)
    Car() {
        brand = "Unknown Brand";
        cout << "Car Default Constructor called -> brand: " << brand << endl;
    }

    // Combination 2: Derived default -> Base parameterized (explicitly forced)
    Car(bool useParamBase) : Vehicle("Four-Wheeler") {
        brand = "Unknown Brand";
        cout << "Car Default(ish) Constructor called (forcing base parameterized) -> brand: " << brand << endl;
    }

    // Combination 3: Derived parameterized -> Base default (implicit)
    Car(string b) {
        brand = b;
        cout << "Car Parameterized Constructor called (base default used) -> brand: " << brand << endl;
    }

    // Combination 4: Derived parameterized -> Base parameterized (explicit)
    Car(string b, string vehicleType) : Vehicle(vehicleType) {
        brand = b;
        cout << "Car Parameterized Constructor called (base parameterized) -> brand: " << brand << endl;
    }

    void display() {
        cout << "   -> Final Car: Type=" << type << ", Brand=" << brand << endl;
    }
};

int main() {
    cout << "----- Combination 1: Derived default -> Base default -----" << endl;
    Car car1;
    car1.display();

    cout << "\n----- Combination 2: Derived default -> Base parameterized -----" << endl;
    Car car2(true);
    car2.display();

    cout << "\n----- Combination 3: Derived parameterized -> Base default -----" << endl;
    Car car3("Toyota");
    car3.display();

    cout << "\n----- Combination 4: Derived parameterized -> Base parameterized -----" << endl;
    Car car4("Honda", "Sedan");
    car4.display();

    return 0;
}