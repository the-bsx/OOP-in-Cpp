// 6. Scope and Storage Class
//  Write a C++ program to demonstrate the use of auto, static, and extern storage classes. Show
// how a static variable retains its value between function calls.

#include<iostream>
using namespace std;

int global_value = 100;

 int autofn(){
    int num = 10; // but default it is auto int num = 10
    num++ ;

    cout <<"Auto value: " << num << endl;;
 }

 int staticfn() {
    static int count = 0;
    count ++ ;
    cout << "Static value : " << count << endl;
 }

 int externfn() {
    extern int global_value;
    global_value += 5;
    cout << "Global value: " << global_value<< endl;
 }

 int main() {
    cout << "Auto :" <<endl;
    autofn();
    autofn();

    cout << "Static :" <<endl;
    staticfn();
    staticfn();

    cout << "Extern: "<< endl;
    externfn();
    externfn();

    return 0;
 }