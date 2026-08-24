#include <iostream>

using namespace std;
int& getRef(int &x)
{
    return x;
}
int main()
{
    int a = 10;
    getRef(a) = 20; // modify a through returned reference
    cout << "a: " << a << endl;
    return 0;
}