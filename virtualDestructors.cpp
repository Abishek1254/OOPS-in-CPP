# include<iostream>
using namespace std;

// class Shape {
// public:
//     virtual void draw() = 0;   // pure virtual function

//     ~Shape() {
//         cout << "Shape destroyed\n";
//     }
// };

// class Circle : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing a Circle\n";
//     }
//     ~Circle() {
//         cout << "Circle destroyed\n";
//     }
// };

// # What happens?
// Since s is a Shape*, C++ looks at the destructor of Shape.
// Because the destructor is not virtual, only:
// ~Shape() is called.
// ~Circle() is skipped.
// Output: Shape destroyed
// This is undefined behavior according to the C++ standard and often causes resource leaks.
// Imagine Circle owns:
// int* arr = new int[1000];
// If ~Circle() never runs, that memory is leaked.


class Shape {
public:
    virtual void draw() = 0;

    virtual ~Shape() {
        cout << "Shape destroyed\n";
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle\n";
    }
    ~Circle() {
        cout << "Circle destroyed\n";
    }
};

// Output:
// Circle destroyed
// Shape destroyed
// The destruction happens from derived to base:
// ~Circle()
// ~Shape()
// which is exactly what we want.

int main() {

    Shape* s = new Circle();
    delete s;

    // Rule of Thumb
//If a class has any virtual function, 
//its destructor should usually be virtual too.

// Virtual destructors are used in abstract base classes to 
//ensure that when an object of a derived class is deleted 
//through a base-class pointer, both the derived and base destructors 
//are called correctly. Without a virtual destructor, 
//deleting through a base pointer results in undefined behavior
// and may cause resource leaks because the derived destructor is 
//not executed.

}