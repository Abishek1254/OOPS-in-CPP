#include<iostream>
using namespace std;

class Animal {
public:
    void sound() { 
        cout <<"Animal" << endl;
    }
    void display() {
        cout<<"I am animal"<<endl;
    }
};

class Dog : public Animal {
public:
    void sound()  { 
        cout<<"Bark" << endl;
    }

    void pet() {
        cout<<"I am a pet dog"<<endl;
    }
    
};
class Cat : public Animal {
public:
    void sound(){ 
        cout<<"Meow" << endl;
    }
};




// Overriding vs Overloading vs Hiding
class Base {
public:
    virtual void fun(int x) {
        cout << "Base int\n";
    }
};

class Derived : public Base {
public:
    void fun(int x) override {
        cout << "Derived int\n";
    }

    void fun(double x) {
        cout << "Derived double\n";
    }
};

int main() {
    // method Overriding
    // Animal *p=new Dog();
    // p->sound();  // Run time polymorphism 
    // //p->pet(); // This will give error as pet() is not in Animal class
    // p->display();

    // Dog * d = new Dog();
    // d->sound();
    // d->display();

    // Cat * c = new Cat();
    // c->sound();
    // c->display();

Base* b = new Derived();
b->fun(10);     // Derived int ✔ (override)

Derived d;
d.fun(10);      // Derived int
d.fun(5.5);     // Derived double ✔ (overload)

}