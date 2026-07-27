// 8. Review of Control Statements
//  Write a C++ program to input a number and check whether it is positive, negative, or
// zero using if-else.
//  Write a C++ program to display all even numbers from 1 to 100 using a for loop.

#include<iostream>

using namespace std;

// check the number if positive, negative or zero

int main() {
    int num;
    cout << "Enter the number";
    cin >> num;

    if(num < 0) {
        cout<< "Negative";
    } else if( num > 0) {
        cout << "Positive";
    } else {
        cout << "Zero";
    }

    return 0;
}



// to run the below code please comment the above main code part

// display the even numbers from 1 to 100

// int main() {
//     for( int i = 1; i <= 100; i++) {
//         if(i % 2 == 0) {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }