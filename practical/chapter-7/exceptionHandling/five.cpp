// 5. Comprehensive Practical: Banking System Exception Handling
// Write a C++ program to simulate a simple bank withdrawal system.
//  Throw an exception if:
// o The withdrawal amount is greater than the balance.
// o The withdrawal amount is zero or negative.
//  Use multiple catch blocks to handle both exceptions.
//  Also, demonstrate catching all exceptions using catch(...).


#include<iostream>
using namespace std;

class InsufficientBalance {
    public:
        string message;

        InsufficientBalance( string msg) {
            message = msg;
        }
};

class InvalidAmount{
    public:
        string message;

        InvalidAmount(string msg) {
            message = msg;
        }
};

int main() {
    double balance , withdrawal;
    cout <<"Enter balance : ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;


    try{
        if(withdrawal <= 0) {
            throw InvalidAmount("Withdrawal amount must be greater than zero");
        }
        if(withdrawal > balance) {
            throw InsufficientBalance("Withdrawal amount must be equal or less than balance");
        }
        balance -= withdrawal;

        cout <<"Withdrawal successful: "<<endl;
        cout<< "Remaning balance: "<< balance;
    }
    catch(InvalidAmount e) {
        cout << "Exception: "<< e.message<<endl;
    }
    catch(InsufficientBalance e) {
        cout <<"Exception: "<< e.message<< endl;
    }

    return 0;
}