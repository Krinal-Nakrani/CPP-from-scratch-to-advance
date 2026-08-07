// Part B: Template Class Pair<T>

// Problem Statement: Write a template class Pair<T> that stores two values of the same type and provides a function to display them.

#include <iostream>
using namespace std;

template <typename T>
class Pair {
private:
    T first;
    T second;

public:
    Pair(T a, T b) {
        first = a;
        second = b;
    }

    void display() {
        cout << "Pair -> First: " << first << ", Second: " << second << endl;
    }

    T getFirst() { return first; }
    T getSecond() { return second; }
};

int main() {
    cout << "----- Template Class: Pair<T> -----" << endl;

    Pair<int> p1(10, 20);
    p1.display();

    Pair<float> p2(3.5, 7.8);
    p2.display();

    Pair<string> p3("Hello", "World");
    p3.display();

    return 0;
}