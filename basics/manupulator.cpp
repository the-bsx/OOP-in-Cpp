// defination
//manipulators change how data looks when printed, or
// how it's read — without changing the actual value stored in the variable
//  examples -----
// setw() ,    endl,      setprecision()
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    cout << setw(20) << 69 <<endl; //                  69
    cout << setprecision(3) << 67.696969; // 67.7
}
