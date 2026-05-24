#include <iostream>
using namespace std;

class A {
private:
    int x = 10;

    friend class B;
};

class B {
public:
    void show(A obj) {
        cout << " I am accessing private member of A : " <<obj.x << endl;   // accessing private member of A
    }
};

int main() {
    A a;
    B b;
    b.show(a);
}

//1.  Friendship is not mutual- If B is friend of A:
// B → can access A
// A → cannot access B automatically

// 2. Friendship is not inherited
// if class B is friend of A and class C : public B
// then C is NOT friend of A.

// 3. Friendship is not transitive if 
// A → friend of B
// B → friend of C 
// It does NOT mean
// A → friend of C

// 4.Friend classes are used when two classes are tightly related.