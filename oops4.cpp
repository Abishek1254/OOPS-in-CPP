#include<iostream>
using namespace std;

// Access Specifiers in C++
//     class Human {
//     private:
//     int weight;

//     protected:
//     int age;

//     public:
//     int height;
    
//     void setHuman(int h, int w, int a) {
//         height=h;
//         weight=w;
//         age=a;
//     }

//     void getHuman() {
//         cout<<"Height : "<<this->height<<endl;
//         cout<<"Weight : "<<this->weight<<endl;
//         cout<<"Age : "<<this->age<<endl;
//     }
// };


// Inheritance in C++
class Human {
    protected:
    string name;
    int age;
    int weight;

    Human() {
        cout<<"Human constructor called "<<endl;
    }

};

class Student : protected Human {
    int roll_number;
    int fees;
    
    public:
    void setStudent(int r, int f){
        roll_number=r;
        fees=f;
    }
    
    void display() {
        cout<<"Roll Number: "<<roll_number<<endl;
        cout<<"Fees: "<<fees<<endl;
    }
};

int main() {
    // Access Specifiers in C++
    // Human h1;
    // // h1.height=170;   // allowed
    // // h1.weight=70;   // not allowed as weight is private
    // // h1.age=20;      // not allowed as age is protected

    // h1.setHuman(170,70,20);  // allowed as setHuman is public
    // //cout<<"Height: "<<h1.height<<endl;
    // h1.getHuman();




    // Inheritance in C++
    Student s1;
    s1.setStudent(101,50000); 
    s1.display();

   
}