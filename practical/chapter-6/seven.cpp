// 7. Roles of Polymorphism in Real-Life Scenarios
// Write a C++ program to simulate a payment system:
// Base class Payment with a virtual function processPayment().
// Derived classes CreditCard and Cash that override the function.
// Use polymorphism to process different payment types at runtime using a single base class
// pointer or reference.


#include<iostream>
using namespace std;

class Payment {
    protected:
        double amount;
    public:
        Payment(double amt) {
            amount = amt;
        }
        virtual void processPayment() {
            cout << "Payment processing..."<<endl;
        }
       virtual  ~Payment() {
        }
};

class CreditCard: public Payment {
    private:
        string cardNumber;
    public:
        CreditCard( string cn, double amt): Payment(amt) {
            cardNumber = cn;
        }
        void processPayment() override {
            cout << "Processing credit card payment of amount "<< amount 
            << " using card  number ending with "<< cardNumber.substr(cardNumber.length() - 4)<< endl;
        }
};

class Cash: public Payment{
    public:
        Cash(double amt): Payment(amt) {}
        
        void processPayment() override{
            cout << "Processing cash payment of amount "<<amount;
        }
};

int main() {
    Payment* payment;
    CreditCard creditcard("456 953 534", 3000.00);
    Cash cash(4000.00);

    cout << "Payment using Card...."<<endl;
    payment = & creditcard;
    payment->processPayment();

    cout << "Payment using cash..."<<endl;
    payment = &cash;
    payment->processPayment();


    return 0;


}