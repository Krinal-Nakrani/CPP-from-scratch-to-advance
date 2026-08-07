// Part B: List — Insert and Delete at Both Ends

// Problem Statement: Write a program using list<int> to insert and delete elements at both ends.

#include <iostream>
#include <list>
using namespace std;

void displayList(list<int> &lst) {
    cout << "List contents: ";
    for (int val : lst) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    list<int> myList;

    // Insert at both ends
    myList.push_back(10);    // insert at end
    myList.push_back(20);
    myList.push_front(5);    // insert at front
    myList.push_front(1);

    cout << "----- After Insertions -----" << endl;
    displayList(myList);   // expected: 1 5 10 20

    // Delete from both ends
    myList.pop_front();      // removes element from front (removes 1)
    myList.pop_back();       // removes element from back (removes 20)

    cout << "\n----- After Deletions (pop_front & pop_back) -----" << endl;
    displayList(myList);   // expected: 5 10

    cout << "\nIs list empty? " << (myList.empty() ? "Yes" : "No") << endl;

    return 0;
}