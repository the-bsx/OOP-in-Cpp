// function overloading means two or more function can have the same name 
// condtions :----------
// 1. Number of parameters should be  OR
// 2. Datatype of parameters should be different

// ---------------example-----------------
#include<iostream>
using namespace std;

// here two functions has the same name sum but number of parameters are different

int sum(int x, int y) {
    cout<< x + y << endl;
}

int sum(int x, int y, int z) {
    cout << x + y + z;
}

int main() {
    cout<< "example of function overloading" << endl;
    sum(60, 7);
    sum(60, 5, 4);
}