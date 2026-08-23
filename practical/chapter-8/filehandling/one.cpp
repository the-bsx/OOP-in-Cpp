// 1. Stream Class Hierarchy Explanation and Demonstration
// Write a C++ program to:
//  Create a simple text file and write some data to it using ofstream.
//  Read the data back using ifstream.
// Also, draw and explain the stream class hierarchy showing the relationship between ios, istream, ostream,
// ifstream, ofstream, and fstream using comments or diagrams in your program.

#include<iostream>
#include<fstream>
using namespace std;

int main() {

    ofstream outFile("data.txt");
    if(!outFile) {
        cout << "Error: could not create file"<<endl;
        return 1;
    }
    outFile<< "Hello, this is a text file"<<endl;
    outFile<< "This data is wrriten using ofstream"<<endl;
    
    outFile.close();

    ifstream inFile("data.txt");
    if(!inFile) {
        cout << "Error: could not open file" <<endl;
        return 1;
    }
    string line;
    cout << "data reading from file"<<endl;
    while(getline(inFile, line)) {
        cout << line <<endl;
    }

    inFile.close();

    return 0;
}