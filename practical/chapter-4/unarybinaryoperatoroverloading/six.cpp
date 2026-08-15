// 6. Overloading Plus Operator for String Concatenation
// Write a C++ program to create a class MyString that:
//  Stores a string using a character array.
//  Overloads the ‘+’ operator to concatenate two strings.
//  Display the concatenated result.


#include<iostream>
#include<string>
#include<cstring>
using namespace std;


class MyString {
    private:
        char str[100];
    public:
        MyString(const char* s = ""){
            strcpy(str, s);
        }
        MyString operator+(const MyString& s) {
            MyString temp;
            strcpy(temp.str, str);
            strcat(temp.str, s.str);
            return temp;
        }
        void display() const {
            cout << str<< endl;
        }
};

int main() {
    MyString s1("Hello ");
    MyString s2("World!");
    MyString s3 = s1 + s2;

    s3.display(); // expected output: Hello world!

    return 0;
}