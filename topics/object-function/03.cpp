//* pass by const reference

// it is useful when the function can only read the the data and we don't want reading function be able to modify the data
// better than pass by value cause it doesn't make copies but prevent from modifying

#include <iostream>
using namespace std;

class User
{
private:
    int id;
    string name;

public:
    User(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    User(User &obj)
    {
        id = obj.id;
        name = obj.name;
        cout << "copy constructor called";
    }
    void setId(int newId)
    {
        this->id = newId;
    }
    void display() const
    {
        cout << id << ", " << name << endl;
    }
};

void show(const User &obj)
{
    obj.display();
}

int main()
{
    User student(69, "Example");
    show(student);
}