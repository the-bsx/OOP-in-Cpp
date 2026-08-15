// 3. Overloading Negation Operator (Unary)
// Write a C++ program to create a class Number that:
//  Stores an integer.
//  Overloads the negation operator (-obj) to return the negative of the stored value.
//  Demonstrate the negation effect using an object.

#include<iostream>
using namespace std;

class Number {
    private:
        int value;

    public:
        Number(int val = 0) {
            value = val;
        }

        Number operator-(){
            return Number(-value);
        }

        void display(){
            cout<< "Value: "<< value<<endl;
        }
};

int main(){
    Number n1(69);
    n1.display();

    cout<< "After negation -n1"<<endl;
    Number n2 = -n1;
    n2.display();

    return 0;
}