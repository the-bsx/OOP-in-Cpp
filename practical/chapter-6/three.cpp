// 3. Virtual Functions and Dynamic Polymorphism
// Write a C++ program to:
// Create a base class Animal with a virtual function sound().
// Derive classes Dog and Cat that override the sound() function.
// Demonstrate dynamic polymorphism by using a base class pointer to call the appropriate
// overridden function at runtime.

#include<iostream>
using namespace std;

class Animal {
    public: 
        virtual  void display(){
            cout << "Animal makes sound"<<endl;
        }
};

class Dog: public Animal {
    public:
        void display() override {
            cout << "Dog barks"<<endl;
        }
};

class Cat: public Animal {
    public:
        void display() override{
            cout << "Cat meows"<<endl;
        }
};

int main() {
    Animal* animalPtr;

    Dog dog;
    Cat cat;

    cout <<"Pointer to dog..."<<endl;
    animalPtr = &dog;
        animalPtr->display();
    cout <<"Pointer to cat..."<<endl;
    animalPtr = &cat;
    animalPtr->display();

    return 0;
}