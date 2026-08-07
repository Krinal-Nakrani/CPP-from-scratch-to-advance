// Practical 11 — Pointer to Object, All Types of Functions in Class
// Problem Statement: Using the BankAccount class above, create an object dynamically using a pointer (new) and access members using the arrow operator. Add a static-like utility function to display the bank's name.

#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    char holderName[30];
    float balance;
    static string bankName;   // shared across all objects, not tied to a single account

public:
    BankAccount(int accNo, const char *name, float initialBalance) {
        accountNumber = accNo;
        strcpy(holderName, name);
        balance = initialBalance;
    }

    void deposit(float amount) {
        if (amount > 0) balance += amount;
    }

    void display() {
        cout << "Account No: " << accountNumber
             << " | Holder: " << holderName
             << " | Balance: " << balance << endl;
    }

    // Utility function - doesn't depend on any specific object's state
    static void showBankName() {
        cout << "Bank Name: " << bankName << endl;
    }
};

// Definition of static member (required outside the class)
string BankAccount::bankName = "Dalvik National Bank";

int main() {
    // Dynamically creating an object using pointer
    BankAccount *accPtr = new BankAccount(202, "Anita Verma", 8000.0);

    cout << "----- Accessing object via pointer (arrow operator) -----" << endl;
    accPtr->display();
    accPtr->deposit(1200);
    accPtr->display();

    cout << "\n----- Utility function (bank name, not tied to any object) -----" << endl;
    BankAccount::showBankName();   // called using class name, no object needed

    delete accPtr;  // free dynamically allocated memory

    return 0;
}