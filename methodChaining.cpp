#include <iostream>
using namespace std;

// Method chaining means calling multiple member functions in one statement,
// where each function returns the same object, so the next function can be called on it.
//The key idea: return the current object using this.

// Method chaining works by returning the current object (*this) from member functions so 
// multiple functions can be called in one statement.

class Number {
    int x;

public:
    Number() {
        x = 0;
    }

    Number& add(int v) {
        x += v;
        return *this;   // return current object
    }

    Number& multiply(int v) {
        x *= v;
        return *this;   // return current object
    }

    void show() {
        cout << x << endl;
    }
};


// this is a pointer to the current object
// so *this means the object itself , Returning *this lets the next function run on the same object.

int main() {
    // Number num1;
    // Number num2= num1.add(5);
    // Number num3= num2.multiply(3);
    // Number num4= num3.add(2);
    // Number num5= num4.add(4);
    // num1.show();
    // num2.show();
    // num3.show();
    // num4.show();
    // num5.show();

    Number obj;
    obj.add(5).multiply(3).add(2).add(4);  // method chaining
    obj.show();

}