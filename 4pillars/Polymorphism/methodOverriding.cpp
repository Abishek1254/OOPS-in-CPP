#include<iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { 
        cout <<"Animal sound" << endl;
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

class Cow : public Animal {
public:
    void sound() {
        cout<<"Moo" << endl;
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
    // Dog d;
    // d.sound();  // Output: Bark
    // d.Animal::sound();  // Output: Animal sound

    // Animal *p=new Dog();
    // p->sound();  // Run time polymorphism 
    // //p->pet(); // This will give error as pet() is not in Animal class
    // p->display();

//     Animal* arr[3];

// arr[0] = new Dog();
// arr[1] = new Cat();
// arr[2] = new Cow();

// for(int i=0;i<3;i++)
// arr[i]->sound();

    // Dog * d = new Dog();
    // d->sound();
    // d->display();

    // Cat * c = new Cat();
    // c->sound();
    // c->display();

Base* b = new Derived();
b->fun(10);   // Derived int ✔ (override)
b->fun(5.5);   // Base int ✔ (no override, no overload)

// Derived d;
// d.fun(10);      // Derived int
// d.fun(5.5);     // Derived double ✔ (overload)

}