//* returning object by function

#include<iostream>
using namespace std;

class User{
    private:
        int id;
        string name;
    public:
        User(int id, string name) {
            this->id = id;
            this->name = name;
        }  
        
        void display() {
            cout << id << ", " << name << endl;
        }
};

User createUser() {
    User temp(69, "example");
    return temp;
}

int main() {
    User obj = createUser();
    obj.display();
}