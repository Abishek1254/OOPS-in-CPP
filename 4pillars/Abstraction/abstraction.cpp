#include <iostream>
using namespace std;

// Abstract class (contains a pure virtual function)
// Shape is an abstract class (because it has pure virtual functions).
// class Shape {
// public:

//     virtual void draw() {
//         cout<<"Drawing Shape"<<endl;
//     }
//     // Pure virtual function = 0 means no implementation here and must be overridden in the base class
//     virtual double area() =0;
// };

// // Derived class Circle
// class Circle : public Shape {
// private:
// double radius;

// public:
//     Circle(double r) {
//         radius = r;
//     }

//     void draw() override {
//         cout << "Drawing a Circle" << endl;
//     }

//     double area() override {
//         return 3.14 * radius * radius;
//     }
// };

// // Derived class Rectangle
// class Rectangle : public Shape {
// private:
//     double length, width;
// public:
//     Rectangle(double l, double w) {
//         length = l;
//         width = w;
//     }

//     void draw() override {
//         cout << "Drawing a Rectangle" << endl;
//     }

//     double area() override {
//         return length * width;
//     }
// };

// Circle and Rectangle inherit from Shape and provide their own implementations.
// The user only knows they are working with a Shape and calling draw() or area(), 
// but they don’t care how it’s implemented internally.





// If a derived class does NOT implement all pure virtual functions → it remains abstract.
// class A {
// public:
//     virtual void f() = 0;
//     virtual void g() = 0;
// };

// class B : public A {
// public:
//     void f() override {}
// };




// class Vehicle {
// public:
//     virtual void start() = 0;   // pure virtual
//     virtual int wheels() = 0;

//     void fuel() {
//         cout << "Uses fuel\n";
//     }

//     virtual ~Vehicle() {}
// };

// class Bike : public Vehicle {
// public:
//     void start() override {
//         cout << "Bike started\n";
//     }

//     int wheels() override {
//         return 2;
//     }
// };

// class Car : public Vehicle {
// public:
//     void start() override {
//         cout << "Car started\n";
//     }

//     int wheels() override {
//         return 4;
//     }
// };

//“A class becomes abstract if it has at least one pure virtual function.”
//“Pure virtual functions enforce implementation in derived classes.”
//“Abstract classes cannot be instantiated but can be referenced via pointers.”
//“Always use virtual destructors in abstract base classes.”


// Interface-like Class in C++
class Flyable {
public:
    virtual void fly() = 0;
    virtual ~Flyable() {}
};

class Swimmable {
public:
    virtual void swim() = 0;
    virtual ~Swimmable() {}
};


// Class Implementing the Interface
class Bird : public Flyable {
public:
    void fly() override {
        cout << "Bird flying\n";
    }
};


// C++ allows a class to implement multiple interfaces easily:
class Duck : public Flyable, public Swimmable {
public:
    void fly() override {
        cout << "Duck flying\n";
    }

    void swim() override {
        cout << "Duck swimming\n";
    }
};



int main() {
    // Shape* s1 = new Circle(5);
    // Shape* s2 = new Rectangle(4, 6);

    // s1->draw();
    // cout << "Area: " << s1->area() << endl;

    // s2->draw();
    // cout << "Area: " << s2->area() << endl;

    // delete s1;
    // delete s2;





//    B b; //❌ ERROR — still abstract





//    Vehicle* v1 = new Bike();
//    Vehicle* v2 = new Car();

//     v1->start();  // Bike started
//     v2->start();  // Car started

//     delete v1;
//     delete v2;





Flyable* f = new Bird();
f->fly();   // Bird flying
//✔ Runtime polymorphism
//✔ Interface behavior achieved

Duck d;
d.fly();   // Duck flying
d.swim();  // Duck swimming

}
