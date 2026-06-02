# include<iostream>
using namespace std;

class A {
public:
    int x;

    void set(int x) {
        this->x = x;
    }
};


// return the current object (method chaining) 
class B {
public:
    int x;

    B& set(int x) {
        this->x = x;
        // *this means the current object itself.
        return *this;
    }
};

int main() {
// internally it behaves like this - set(&obj, 10)
// so inside the function - this = &obj
// therefore this->x
// means -obj.x
A obj;
obj.set(10);

B ob;
ob.set(5).set(10).set(15).set(20);
cout<<ob.x;


}