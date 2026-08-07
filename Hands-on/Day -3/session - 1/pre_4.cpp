// Practical 4 — Namespace
// Problem Statement: Create two namespaces, Math and Physics, each containing a function/constant with the same name (e.g., PI). Demonstrate accessing both using the scope resolution operator, and using a using namespace directive.

#include <iostream>
using namespace std;

namespace Math {
    const double PI = 3.14159;

    double circleArea(double radius) {
        return PI * radius * radius;
    }
}

namespace Physics {
    const double PI = 3.14;   // deliberately a different "approximate" value used in some physics contexts

    double calculateWaveEnergy(double amplitude) {
        return PI * amplitude * amplitude;
    }
}

int main() {
    cout << "----- Accessing via Scope Resolution Operator (::) -----" << endl;
    cout << "Math::PI    = " << Math::PI << endl;
    cout << "Physics::PI = " << Physics::PI << endl;

    cout << "Circle Area (Math::circleArea)      : " << Math::circleArea(5) << endl;
    cout << "Wave Energy (Physics::calculateWaveEnergy): " << Physics::calculateWaveEnergy(2) << endl;

    cout << "\n----- Using 'using namespace' directive -----" << endl;
    {
        using namespace Math;   // scoped to this block only
        cout << "PI (from Math, via using namespace) = " << PI << endl;
        cout << "circleArea(4) = " << circleArea(4) << endl;
    }

    return 0;
}