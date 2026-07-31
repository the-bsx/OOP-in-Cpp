// 4. Pass by Reference
//  Write a C++ program to swap two numbers using pass-by-reference in a function.

#include<iostream>
using namespace std;

void swap(int &num_one, int &num_two) {
    int temp;
    temp = num_one;
    num_one = num_two;
    num_two = temp;
}

int main() {
    int num_one, num_two;

    cout << "Enter the two numbers: "<< endl;
    cin >> num_one >> num_two;

    swap(num_one, num_two);

    cout << "After swapping" << endl;
    cout << "num_one: "<< num_one <<"  numtwo: " << num_two;

    return 0;

}