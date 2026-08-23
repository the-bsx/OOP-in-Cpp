// 2. Multiple Catch Statements
// Write a C++ program to input an integer value from the user.
//  Throw different types of exceptions for the following cases:
// o If the input is zero, throw an integer.
// o If the input is negative, throw a string message.
// o If the input is positive but greater than 100, throw a float value.
//  Use multiple catch blocks to handle each type of exception separately.

#include<iostream>
using namespace std;

int main() {
    int num;
    cout <<"Enter number: ";
    cin >> num;

    try{
        if(num == 0) {
            throw num;
        } else if( num < 0) {
            throw string("Number is negative");
        } else if(num > 100) {
            throw 100.0f;
        } else {
            cout <<"Valid number: "<<num<<endl;
        }
    } 
    catch(int) {
        cout << "Exception: Number is zero"<<endl;
    }
    catch(string message) {
        cout <<"Exception: "<<message<<endl;
    }
    catch(float value) {
        cout << "Exception: Number is greater than "<< value<<endl; 
    }

    return 0;
}