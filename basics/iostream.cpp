// input output stream

// A stream in C++ is an abstraction that represents a sequence of data flowing between a program and
// an input/output device (such as a keyboard, screen, file, or network).

// An input stream is a stream that allows data to flow into a program from a source 
// — for example, reading from the keyboard using cin.

// An output stream is a stream that allows data to flow out of a program to a destination
// — for example, displaying data on the screen using cout.

 // important to knwo
//  << is insertion operator
//  >> is extraction operator
// example
#include<iostream>
using namespace std;
int main() {
    int age;
    cout<< "Enter your age"<<endl;
    cin>> age;
    cout<< "Your age is:"<< age; 
}

// cascading of input output operator means taking multiple input in a single line or display multiple output in a single line
//  example
// cin>> num_one >> num_two
// cout<<num_one << num_two
