// 3. Detecting End of File (EOF)
// Write a C++ program to:
//  Read and display the content of a text file until the end of file (EOF) is reached.
//  Use the eof() function or proper stream condition checking to detect EOF.

#include<iostream>
#include<fstream>
using namespace std;

int main() {

    ifstream inFile("data.txt");
    if(!inFile) {
        cout << "Error: unable to open file to read"<<endl;
        return 1;
    }
    string line;
    cout <<"File content: "<<endl;
    while(getline(inFile, line)){
        cout << line<< endl;
    }
    if(inFile.eof()) {
        cout <<"\nEnd of file reached"<<endl;
    }

    return 0;

}