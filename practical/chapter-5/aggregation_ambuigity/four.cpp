// 4. Aggregation Example
// Write a C++ program to demonstrate aggregation by creating:
//  A class Address with street, city, and zip code.
//  A class Student that has an Address object as a member (Student has-a Address).
//  Show how this is different from inheritance.

#include<iostream>
using namespace std;

class Address {
    private:
        string street;
        string city;
        int zipcode;
    
    public:
       Address(string s, string c, int z) {
            street = s;
            city = c;
            zipcode = z;
       }
       void displayAddress() {
        cout << "Street: "<< street<<endl;
        cout <<"City: "<< city<< endl;
        cout <<"Zip code: "<<zipcode<< endl;
       }
};

class Student {
    private:    
        string name;
        Address address;

    public:
        Student(string n, string s, string c, int z): address(s, c, z) {
            name = n;
        }

        void displayStudent() {
            cout << "Name: "<< name<<endl;
            address.displayAddress();
        }
};

int main() {
    Student student("Bishal", "Diamond Marg", "Lalitpur", 44700);
    student.displayStudent();

    return 0;
}