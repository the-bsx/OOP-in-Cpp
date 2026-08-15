// 2. Overloading Post-Increment Operator (Unary)
// Write a C++ program to create a class Counter that:
//  Stores a count value.
//  Overloads the post-increment operator (obj++) using a member function to increase the count.
//  Clearly differentiate and display the behavior of pre-increment and post-increment.

// 1. Overloading Pre-Increment Operator (Unary)
// Write a C++ program to create a class Counter that:
//  Stores a count value.
//  Overloads the pre-increment operator (++obj) using a member function to increase the count
// by 1.
// Display the count before and after incrementing.


#include<iostream>
using namespace std;

class Counter {
    private :
        int count;
    public:
        Counter(int c = 0) {
            count = c;
        }

        Counter operator++(int){
            Counter temp = *this;
            count++;
            return temp;
        }
        void display() {
            cout << "Count: "<< count<<endl;
        }
};

int main() {
    Counter c1(5);
    cout <<"Before increment: ";
    c1.display();

    c1++;
    
    cout <<"After increment: ";
    c1.display();
}