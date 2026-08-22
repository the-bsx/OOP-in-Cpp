// 6. Hierarchical Inheritance
// Write a C++ program to create:
//  A base class Account and two derived classes: SavingAccount and CurrentAccount.
//  Input and display account details from both derived classes.

#include<iostream>
using namespace std;

class Account {
    protected:
        int accountNumber;
        string accountName;
    public:
        void getAccount() {
            cout<<"Enter account number: ";
            cin >> accountNumber;
            cout<<"Enter account name: ";
            cin >> accountName;
        }
        void displayAccount() {
            cout <<"Account Number: "<<accountNumber<<endl;
            cout<< "Account Name "<< accountName<<endl;
        }
};


class SavingAccount: public Account{
    private:
        float interestRate;
    public:
        void getSaving() {
            getAccount();
            cout<< "Enter interest rate: ";
            cin >>interestRate;
        }

        void dispalySaving() {
            displayAccount();
            cout <<"Interest Rate: "<< interestRate<< endl;
        }
};

class CurrentAccount: public Account{
    private:
        float extraLimit;
    public:
        void getCurrent() {
            getAccount();
            cout <<"Enter the over draft limit: ";
            cin >>extraLimit;
        }
        void displayCurrent() {
            displayAccount();
            cout<<"Over draft limit: "<< extraLimit<< endl;
        }
};

int main() {
    SavingAccount saving;
    CurrentAccount current;

    cout <<"Saving account..."<<endl;
    saving.getSaving();

    cout <<"Current account..."<<endl;
    current.getCurrent();

    cout <<"Saving account details..."<<endl;
    saving.dispalySaving();
    
    cout <<"Current account details..."<<endl;
    current.displayCurrent();

    return 0;
}