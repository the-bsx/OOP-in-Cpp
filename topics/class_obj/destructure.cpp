
//! destructure is important when we have to cleanup the resoucres object was using 
// let say when  allocating dynamic memory , we have to free that resources too for this we can use destructure to 
// clean the allocated memory automatically when the created object goes out of scope
// -----------------EXAMPLE--------------------------------------------------------

#include<iostream>
using namespace std;

class Buffer {
    private:
        int *data;
        int sum = 0;
    public:
        Buffer(int size) {
            data = new int[size];  // resource acquired in constructor
            cout << "Memory allocated" << endl;
        }
        void setData() {
            cout << "Enter 5 numbers to find the total sum" << endl;
            for(int i = 0; i <5; i++) {
                cin >> data[i];   
            }
        }
        
        void display() {
            cout << "sum of given numbers is" << endl;
            for(int i = 0; i< 5; i++) {
                sum += data[i];
            }
            cout<< sum << endl;
        }
    ~Buffer() {
        delete[] data;
        cout << "Memmory freed"<< endl;
    }
};

int main() {
    Buffer b(5);
    b.setData();
    b.display();

}