// 5. Input/Output Streams (cin, cout, Cascading of IO Operators)
//  Write a C++ program that accepts the user's name, age, and marks using cin and displays
// the inputted values using cout. Apply cascading of input and output operators.

#include<iostream>
#include<string>
using namespace std;

int main() {
    string name;
    int age;
    float marks;

    // cin cascading
    cout << "Enter the name, age, marks" <<endl;
    cin>> name >> age >> marks;

    // cout cascading
    cout<< "Name: "<< name <<" Age: "<< age<< " Marks: " << marks;

    return 0;
}