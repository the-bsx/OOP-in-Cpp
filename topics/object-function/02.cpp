//* pass by Reference
// any changes in object inside the show function will directly change the User
//* consturctor is not being invoked when pass by reference

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
    void display()
    {
        cout << id << ", " << name << endl;
    }
};

void show(User &obj)
{
    obj.setId(67);
}

int main()
{
    User student(69, "Example");
    student.display(); // 69, Example
    show(student);
    student.display(); // 67, Example
}