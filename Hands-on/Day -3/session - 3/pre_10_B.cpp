// Part B: Ticket Counter Simulation Using STL Queue
// Problem Statement: Write a program to simulate a ticket counter queue using the STL

// run it with two commands if gives error for : 'ticketQueue' does not name a type
//  g++ "pre_10_B.cpp" -o output
//  ./output   

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> ticketQueue;
    int choice;
    string name;

    do {
        cout << "\n----- Ticket Counter Menu -----" << endl;
        cout << "1. Add person to queue" << endl;
        cout << "2. Serve next person" << endl;
        cout << "3. Display queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter person's name: ";
                cin >> name;
                ticketQueue.push(name);   // add to the back of the queue
                cout << name << " added to the queue." << endl;
                break;

            case 2:
                if (!ticketQueue.empty()) {
                    cout << "Serving: " << ticketQueue.front() << endl;   // person at the front
                    ticketQueue.pop();   // remove them after serving
                } else {
                    cout << "Queue is empty. No one to serve." << endl;
                }
                break;

            case 3:
                if (ticketQueue.empty()) {
                    cout << "Queue is empty." << endl;
                } else {
                    cout << "Current queue (front to back): ";
                    queue<string> temp = ticketQueue;   // copy, so original queue isn't disturbed
                    while (!temp.empty()) {
                        cout << temp.front() << " ";
                        temp.pop();
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "Exiting simulation." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}