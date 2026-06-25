// Namespace is used to avoid naming conflicts
// we can create our own namespaces too


//* syntax
 // namespace name {
 // declarations             // we can declare vairables as well as functions too
 //}


//  examples
#include<iostream>

namespace myNameSpace {
    int count = 20;
}
namespace myNameSpace2 {
    int count = 10;
}

int main() {
    // here both the variables are count 
    std::cout<< myNameSpace::count; // output  is 20
    std::cout<< myNameSpace2::count; // output is 10

}