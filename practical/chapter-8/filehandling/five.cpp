// 5. Reading and Writing Binary Files
// Write a C++ program to:
//  Create a class Student with data members: name, roll number, and marks.
//  Write the student data into a binary file using write().
//  Read the data back from the binary file using read() and display it.

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Student{
    public:
        char name[50];
        int roll;
        float marks;
};

int main() {
    Student s1;
    cout << "Enter name: ";
    cin.getline( s1.name, 50);
    cout << "Enter roll number: ";
    cin >> s1.roll;
    cout << "Enter marks: ";
    cin >> s1.marks;

    ofstream file("student.dat", ios::binary);
    if(!file) {
        cout << "Error: unable to open file to write"<<endl;
        return 1;
    }

    file.write((char*)&s1, sizeof(s1));

    file.close();
    cout << "Student data written successfully...\n\n"<<endl;

    Student s2;
    ifstream inFile("student.dat", ios::binary);

    if(!inFile) {
        cout << "Error: unable to open file to read"<<endl;
        return 1;
    }

    inFile.read((char*)&s2, sizeof(s2));

    inFile.close();

    cout <<"---Student data from file--- \n\n";
    cout << "Name: "<<s2.name<<endl;
    cout <<"Roll number: "<< s2.roll<< endl;
    cout <<"Marks: "<< s2.marks<<endl;

    return 0;
}