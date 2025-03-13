#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting to 0." << endl;
        }
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Public method to check balance
    double getBalance() const {
        return balance;
    }

    // Public method to get account holder name
    string getAccountHolder() const {
        return accountHolder;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount myAccount("John Doe", 500);

    // Accessing data via public methods
    cout << "Account Holder: " << myAccount.getAccountHolder() << endl;
    cout << "Initial Balance: $" << myAccount.getBalance() << endl;

    // Performing operations
    myAccount.deposit(200);
    myAccount.withdraw(100);
    
    // Checking updated balance
    cout << "Final Balance: $" << myAccount.getBalance() << endl;

    return 0;
}
