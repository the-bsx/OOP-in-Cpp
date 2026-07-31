// 5. Return by Reference
//  Write a C++ program to return a reference to the larger of two numbers entered by the user.
// Display the larger number in the main function.

#include <iostream>
using namespace std;

int &large(int &num_one, int &num_two)
{
    if (num_one > num_two)
    {
        return num_one;
    }
    else
    {
        return num_two;
    }
}

int main(){
     int num_one, num_two;

     cout << "Enter two numbers: "<<endl;
     cin >> num_one >> num_two;

     int &res = large(num_one, num_two);

     cout << "Largest: "<< res;
}