// 3. Default Argument
//  Write a C++ program that calculates the volume of a box using a function. The function should
// have default arguments for height and width.

#include<iostream>

using namespace std;

// function with default arguments
 float volume(float length, float width = 2, float height = 3) {
    return length * width * height;
 }

 int main() {

    // only length is provided
    cout << "Volume (only lenght) :" << volume(5) << endl;

    // lenght and width are provided
    cout << "Volume (only length and width) :" << volume(5, 1) << endl;

    // length, width, height are provided
    cout << "Volume (length, width, height) :" << volume(5, 1, 1) << endl;

 }

