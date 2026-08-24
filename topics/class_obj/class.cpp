// class is a user defined data_type that groups together data (varibales) and functions into a single unit
#include<iostream>
#include<string>

 using namespace std;
class student {
    private:
    int rollNumber;
    string name;

    public:
        void setData(int r, string n) {
            rollNumber = r;
            name = n;
        }
        void display() {
            cout << "Roll NUmber: " << rollNumber<< endl;
            cout << "Name: "<< name;
        }
};

int main() {

    student s1;
    // we cannot access the data members( variables such as rollNumber and name) directly using object s1
    // but we can use member functions like setData() and display() to access and modify them
    // -----------------------------
    // s1.rollNumber  = 10 // it will throw an error 
    // s1.name = "Bishal" // error 
    // so we do like this 
    s1.setData(1, "Bishal");
    s1.display();
}