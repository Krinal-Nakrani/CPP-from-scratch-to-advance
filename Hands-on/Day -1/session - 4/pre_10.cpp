// Practical 10 — Class & Objects, Data Hiding, Constructors
// Problem Statement: Design a class BankAccount with private data members (account number, holder name, balance). Implement accessor and mutator functions (data hiding), a parameterized constructor, and deposit()/withdraw() functions with balance validation.

#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    char holderName[30];
    float balance;

public:
    // Parameterized Constructor
    BankAccount(int accNo, const char *name, float initialBalance) {
        accountNumber = accNo;
        strcpy(holderName, name);
        balance = initialBalance;
    }

    // Accessor (getter) functions
    int getAccountNumber() {
        return accountNumber;
    }

    string getHolderName() {
        return holderName;
    }

    float getBalance() {
        return balance;
    }

    // Mutator (setter) function
    void setHolderName(const char *name) {
        strcpy(holderName, name);
    }

    // Deposit function with validation
    void deposit(float amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount!" << endl;
            return;
        }
        balance += amount;
        cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
    }

    // Withdraw function with validation
    void withdraw(float amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            return;
        }
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << " | New Balance: " << balance << endl;
    }

    void display() {
        cout << "Account No: " << accountNumber
             << " | Holder: " << holderName
             << " | Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1(101, "Rahul Sharma", 5000.0);

    cout << "----- Initial Account Details -----" << endl;
    acc1.display();

    acc1.deposit(1500);
    acc1.withdraw(2000);
    acc1.withdraw(10000);  // should fail - insufficient balance

    cout << "\nAccessed via getter -> Balance: " << acc1.getBalance() << endl;

    return 0;
}