// 4. Namespace
//  Write a C++ program that uses two different namespaces containing variables with the
// same name. Demonstrate how to access these variables using the scope resolution
// operator.

#include<iostream>

using namespace std;

// first namespace
namespace user {
    int id = 123;
}
// second namespace
namespace student {
    int id = 456;
}

int main() {

    cout<< "Namespace example"<< endl;
    cout<< "user id:" << user::id <<endl;
    cout << "student id: " << student::id << endl;

    return 0;
}