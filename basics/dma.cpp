// Dynamic memory allocation is the process of allocating memory to a variable at 
// (while the program is executing), rather than at compile time.

// The new operator
// Definition: new allocates memory on the heap and returns a pointer to that memory.

// The delete operator
// Definition: delete frees memory that was previously allocated using new, returning it back to the system.

// ---------- example -------------
#include<iostream>
using namespace std;
int main() {
    int* p = new int;  // allocates memory for one int (uninitialized)
    *p = 69;
    cout << *p << endl;
    delete p;       // free the allocated memory

    int* num = new int(67); // allocate memory for one int and assigh the value  67 to it
    cout << *num;
    delete num;
}
