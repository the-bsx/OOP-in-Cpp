// 6. Comprehensive Practical-Project:
// Write a C++ program to create a class BankAccount with:
//  Data members: account holder’s name, account number, and balance.
//  Constructors:
// o Default constructor to initialize balance to zero.
// o Parameterized constructor to initialize all details.
// o Copy constructor to copy data from another object.
//  A destructor that displays a message when the object is destroyed.
//  Functions to deposit and withdraw amounts.
// Create multiple objects using different constructors and display their details.

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    // Default constructor
    BankAccount()
    {
        accountHolderName = "Unknown";
        accountNumber = 0;
        balance = 0;
    }

    // Parameterized constructor
    BankAccount(string name, int number, double amount)
    {
        accountHolderName = name;
        accountNumber = number;
        balance = amount;
    }

    // Copy constructor
    BankAccount(const BankAccount &account)
    {
        accountHolderName = account.accountHolderName;
        accountNumber = account.accountNumber;
        balance = account.balance;
    }

    // Deposit function
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Rs. " << amount << " deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully." << endl;
        }
    }

    // Display account details
    void display()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : Rs. " << balance << endl;
    }

    // Destructor
    ~BankAccount()
    {
        cout << "Account object " << accountNumber
             << " is destroyed." << endl;
    }
};

int main()
{
    // Object using default constructor
    BankAccount account1;

    cout << "Account 1 (Default Constructor):";
    account1.display();

    // Object using parameterized constructor
    BankAccount account2("Bishal", 1001, 50000);

    cout << "\nAccount 2 (Parameterized Constructor):";
    account2.display();

    // Deposit money into account2
    cout << "\nDepositing Rs. 10000 into Account 2..." << endl;
    account2.deposit(10000);

    // Withdraw money from account2
    cout << "\nWithdrawing Rs. 15000 from Account 2..." << endl;
    account2.withdraw(15000);

    cout << "\nAccount 2 after transactions:";
    account2.display();

    // Object using copy constructor
    BankAccount account3(account2);

    cout << "\nAccount 3 (Copy Constructor):";
    account3.display();

    return 0;
}