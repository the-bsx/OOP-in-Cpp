// 4. File Pointers: Reading and Writing Position
// Write a C++ program to:
//  Write data to a file.
//  Display the current position of the write pointer using tellp().
//  Move the write pointer using seekp() and overwrite part of the file.
//  Read the file using tellg() to display the read pointer position and use seekg() to reposition the
// read pointer.

#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::trunc);

    if(!file) {
        cout <<"Error: unable to open file to write"<<endl;
        return 1;
    }
    file << "Hello world!";
    
    cout <<"Write pointer position: ";
    cout << file.tellp()<<endl;

    // move write pointer to position 6
    file.seekp(6);
    cout << "write pointer after seekp(6): "<<file.tellp() <<endl;
    file<< " C++ ";

    // reading the file
    file.seekg(0);

    cout <<"Read pointer position: " <<file.tellg()<<endl;

    char ch;
    cout <<"File content: ";
    while(file.get(ch)) {
        cout << ch;
    }

    file.clear();
    file.seekg(6);
    cout << "\n\nRead pointer after seekg(6): "
         << file.tellg() << endl;
        cout << "Content from position 6: ";

    while (file.get(ch)) {
        cout << ch;
    }

    file.close();


    return 0;
}