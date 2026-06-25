// before understanding inline function better to know how normal  function works  under compilation

// when the normal function is called it has to :----- 
// 1. push the function arguments and return address into the stack
// 2. jump to where the function is located inside the memory
// 3. execute the function
// 4. jump back to where the function is called from
// 5. clean up the stack

// normal function call is useful for large and complex programs but for tiny function like square(x) 
// the overhead of jumping back and forth can consume more time than acutal processing
// so for those simple and short function inline function is used

 // ------------------ example--------------------------------
 #include<iostream>
 using namespace std;

 inline int square(int x) {
    return x * x;
 }
 int main() {
    int a = square(5); // it works as  int a = 5 * 5
    cout<< a;
 }

 // how inline function works

 // instead of jumping to square(x) , compiler just write the code as you type directly
 // int main() {
 // int a = 5 * 5; // compiler substitutes this directly — no function call happens
 // cout << a;
 //} 

