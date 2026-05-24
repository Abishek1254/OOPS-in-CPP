#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    const string name;
    const int age;

public:
    // Constructor to initialize data members
    Person(string n, int a) : name(n), age(a) {}

    // Getters only — no setters
    const string getName() { 
        return name; 
    }
    const int getAge() { 
        return age; 
    }

    // "Modifier" returns a new object instead of changing current one
    const Person withAge(int newAge) {
        return Person(name, newAge); // new object
    }
};

int main() {
    Person p1("Alice", 20);
    Person p2 = p1.withAge(25); // creates new object

    cout << p1.getName() << " is " << p1.getAge() << endl;
    cout << p2.getName() << " is " << p2.getAge() << endl;
}
