// 3. Preprocessor Directives
//  Write a C++ program to calculate the area of a circle. Use a preprocessor directive to
// define the value of π (pi). Include header files using #include and demonstrate conditional
// compilation using #ifdef and #endif.

#include<iostream>


using namespace std;

//o define the value of PI
#define PI 3.14

int main() {
    float radius, area;

    cout << "Enter the radius of the circle" << endl;
    cin >> radius;
    

    #ifdef PI
    area = PI * radius * radius;
    #endif

    cout << "Area of circle is: " << area << endl;

    return 0;

}

