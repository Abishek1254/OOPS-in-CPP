// // 1. Simple abstraction achieved using a class
// #include <iostream>
// using namespace std;

// class Car {

// public:
//     void start() {
//         fuelInjection();
//         ignition();
//         cout << "Car Started\n";
//     }

// private:
//     void fuelInjection() {
//         cout << "Injecting Fuel\n";
//     }

//     void ignition() {
//         cout << "Spark Generated\n";
//     }
// };

// int main() {
//     Car c;
//     c.start();
//}







// #include <iostream>
// using namespace std;

// class Shape {

// public:
//     virtual void area() = 0;
// };

// class Circle : public Shape {

// public:

//     void area() {
//         cout << "Area of Circle\n";
//     }
// };

// int main() {

//     Circle c;

//     c.area();
// }




#include <iostream>
using namespace std;

class Vehicle {
public:

    virtual void startEngine() = 0;
};

class Car : public Vehicle {
public:

    void startEngine() {
        cout << "Car Engine Started\n";
    }
};

class Bike : public Vehicle {

public:

    void startEngine() {
        cout << "Bike Engine Started\n";
    }
};

int main() {

    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();

    v1->startEngine();
    v2->startEngine();

    delete v1;
    delete v2;
}