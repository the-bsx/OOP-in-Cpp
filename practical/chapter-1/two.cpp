// 2. Data Types and Type Conversion
//  Write a C++ program to input an integer, a float, and a character from the user. Display
// their values and sizes using the sizeof operator. Also, perform implicit and explicit type
// conversions between the integer and float.


#include<iostream>

using namespace std;

int main() {

    int intValue;
    float floatValue;
    char charValue;

    // taking input
    cout<< "Enter the integer value" << endl;
    cin >> intValue;

    cout<< "Enter the float value" << endl;
    cin >> floatValue;

    cout<< "Enter the char value"<< endl ;
    cin >> charValue;

    // display values
    cout << "Integer value: "<< intValue<< endl;
    cout << "Float value: " << floatValue << endl;
    cout << "Character value: " << charValue << endl;
 
    // display sizes
    cout << "size of int: "<< sizeof(intValue) << endl;
    cout << "size of float: " << sizeof(floatValue) <<endl;
    cout << "size of character: " <<sizeof(charValue) << endl;

      // Implicit type conversion (int -> float)
      float res = intValue + floatValue ;
      cout << "int + float (implicit conversion)" << res <<endl;

      // Explict type conversion
      int res2 = (int)floatValue;
      cout<< "Explict conversion of float into int "<< res2;

      return 0;
}