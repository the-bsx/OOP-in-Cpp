// 3. Catching All Exceptions
// Write a C++ program to input two integers and divide them.
//  Handle specific exceptions like division by zero.
//  Use catch(...) to catch all types of unexpected exceptions.

#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: "<<endl;
    cin >> a >> b;
    try {
        if( b== 0 ){
            throw b;
        }
        cout << "division: "<< (float)a / b << endl;
    }
    catch(int ){
        cout <<"Exception: divsion by zero not allowed!"<<endl;
    }
    catch(...) {
        cout <<"Exception: Unexpected Error occured!";
    }

    return 0;
}