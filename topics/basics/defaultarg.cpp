
// default arguments provides the default value if no arguments is provided
#include<iostream>
using namespace std;

// if only x is provided then value of y will be 9 automatically,
// if value of y is also provided then y will store that value ignoring the 9(default value) 
void show (int x, int y= 9) {
    cout<< x <<" "<< y <<endl;
}
int main() {
    show(6); // 6 9
    show(6, 7); // 6 7
}