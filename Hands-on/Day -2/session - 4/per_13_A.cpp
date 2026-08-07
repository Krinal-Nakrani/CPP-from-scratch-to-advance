// Practical 13 — Friend Function & Friend Class
// Part A: Friend Function Accessing Two Classes

// Problem Statement: Write a friend function that accesses private members of two different classes (e.g., a function to compare private "distance" values from two Box class objects).

#include <iostream>
using namespace std;

class Box2;   // forward declaration - needed since Box1's friend function refers to Box2

class Box1 {
private:
    float distance;

public:
    Box1(float d) {
        distance = d;
    }

    // Friend function declaration - will access private members of BOTH Box1 and Box2
    friend void compareDistance(Box1 &b1, Box2 &b2);
};

class Box2 {
private:
    float distance;

public:
    Box2(float d) {
        distance = d;
    }

    friend void compareDistance(Box1 &b1, Box2 &b2);
};

// Single friend function, common to both classes
void compareDistance(Box1 &b1, Box2 &b2) {
    cout << "Box1 distance: " << b1.distance << endl;
    cout << "Box2 distance: " << b2.distance << endl;

    if (b1.distance > b2.distance)
        cout << "Box1 has greater distance." << endl;
    else if (b1.distance < b2.distance)
        cout << "Box2 has greater distance." << endl;
    else
        cout << "Both distances are equal." << endl;
}

int main() {
    Box1 box1(15.5);
    Box2 box2(20.3);

    cout << "----- Comparing private members of two different classes -----" << endl;
    compareDistance(box1, box2);

    return 0;
}