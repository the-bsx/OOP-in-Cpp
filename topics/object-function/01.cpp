//*  object pass by value(copy) in function
//* copy constructor is called when object is pass by value

#include <iostream>
using namespace std;

class user
{
private:
    int id;
    string name;

public:
    user(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    user( user& u2){
        id = u2.id;
        name = u2.name;
        cout<<" copy constructor called"<<endl;
    }
    void setId(int newId)
    {
        this->id = newId;
    }

    void display()
    {
        cout << id << ", " << name<<endl;
    }
};

void show(user u)
{
    u.setId(67);
    u.display();
}

int main()
{
    user user_one(69, "example");

    show(user_one); // 67, example

    user_one.display(); // 69, example
}