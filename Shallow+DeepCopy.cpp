#include<iostream>
using namespace std;

// class A {
//     public:
//     int *ptr;

//     A(int x) {
//         ptr= new int(x);
//     }
// };


class A{
    public:
    int *ptr;

    A(int x) {
        ptr= new int(x);
    }

    A(const A &a) {
        ptr= new int( *(a.ptr) ); // Deep copy- creating a new memory location and copying the value
    }
};

int main() {
    A a1(10);
    cout<<"Value of a1.ptr : "<<*(a1.ptr)<<endl;

    A a2(a1); // default copy constructor- shallow copy
    cout<<"Value of a2.ptr : "<<*(a2.ptr)<<endl;

    // Modifying a2.ptr
    *(a2.ptr)=20;
    cout<<"Value of a1.ptr after modifying a2.ptr : "<<*(a1.ptr) <<endl; // This will also change a1.ptr due to shallow copy
    cout<<"Value of a2.ptr after modifying a2.ptr : "<<*(a2.ptr)<<endl;
}