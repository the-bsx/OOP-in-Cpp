// 2. Reading and Writing Text Files
// Write a C++ program to:
//  Create and write data (name and age) of multiple persons into a text file using ofstream.
//  Read the data back from the file using ifstream and display it on the console.

#include<iostream>
#include<fstream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of person: ";
    cin >> n;

    ofstream outFile("person.txt");
    if(!outFile) {
        cout <<"Error: unable to open file to write"<<endl;
        return 1;
    }

    for(int i = 0; i < n; i++) {
        string name;
        int age;

        cout << "\nEnter name: ";
        cin >> name;
        cout <<"\nEnter age: ";
        cin >>age;

        outFile << name <<" "<< age << endl;
    }
    outFile.close();

    // to read file
    ifstream inFile("person.txt");
    
    if(!inFile) {
        cout << "Error: unable to open file to read"<<endl;
        return 1;
    }

    string name;
    int age;
    while(inFile >> name >> age) {
        cout << "Name: "<< name <<"  Age: "<<age<<endl;
    }
    inFile.close();

    return 0;
}