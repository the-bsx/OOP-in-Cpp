// 5. Comprehensive Practical-Project:
// Design a C++ program for a Bank Account Management System using classes.
//  Data members: account number, account holder’s name, account balance.
//  Member functions:
// o To open an account (inside the class)
// o To deposit money (outside the class)
// o To withdraw money (outside the class)
// o To display account information (inside the class)
//  Dynamically create objects using pointers to manage multiple accounts.

#include<iostream>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        string accountHolderName;
        double balance;
    public:
        void openAccount() {
            cout << "Enter account number:  ";
            cin >> accountNumber;
            cout << "Enter account holder name:  ";
            cin >> accountHolderName;
            cout << "Enter the balance amount you want to deposit:  ";
            cin >> balance;
            cout <<"\n\n---Account opened successfully---\n\n";
        }

        void deposit(double amount);
        void withDraw(double amount);

        void displayAccount() {
            cout << "\n\n---Account Information---\n\n";
            cout << "Account Number:  "<< accountNumber<<endl;
            cout <<"Account Name:     "<< accountHolderName<<endl;
            cout <<"Balance           "<< balance <<endl;
        }
};

void BankAccount::deposit(double amount) {
    if(amount > 0) {
        balance += amount;
        cout <<"Rs." <<amount <<" deposited successfully."<<endl;
    } else {
        cout << "Invalid deposit amount."<<endl;
    }
}

void BankAccount::withDraw(double amount) {
    if(amount <= 0) {
        cout << "Invalid withdrawal amount!"<<endl;
    } else if(amount > balance) {
        cout << "Insufficient balance..."<<endl;
    } else {
        balance -= amount;
        cout <<"Rs."<<amount<<" withdrawn successfully."<<endl;
    }
}


int main() {
    BankAccount account;

    double depositAmount;
    double withdrawAmount;

    cout <<"\n\n---Welcome to bank system---\n\n\n ";
    account.openAccount();

    cout <<"\n\n Transactions for account.\n\n";
    cout << "Enter amount to deposit:  ";
    cin >>depositAmount;
    account.deposit(depositAmount);

    cout<<"\n\n Enter amount to withdraw:  ";
    cin >>withdrawAmount;
    account.withDraw(withdrawAmount);

    cout <<"\n\n ---Account details--- \n\n ";
    account.displayAccount();


    return 0;
}