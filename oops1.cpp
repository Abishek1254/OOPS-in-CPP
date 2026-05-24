#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll_no;
    int age;
    string grade;
};

// Class definition
//class Student {
// private:
//     string name;   // private data member
//     int age;

// public:
//     // Setter for name
//     void setName(string s) {
//         name = s;
//     }
//     // Getter for name
//     string getName() {
//         return name;
//     }
//     // Setter for age
//     void setAge(int a) {
//         if (a >0)   // validation (example of data hiding)
//         age = a;

//         else
//         cout << "Invalid age!" << endl;
//     }
//     // Getter for age
//     int getAge() {
//         return age;
//     }
// };

//  c c c c ch d p p 
class random{
    
    char c;
    //int b ;
    //char c2;
    int b;
    char c2;
    double e;
    // char c3;
};


int main() {
    // Basic object creation and member access
    // Student s1;
    // s1.name="Abishek";
    // s1.roll_no=24;
    // s1.age=20;
    // s1.grade="A+";

    // cout<<"Student details : "<<endl;
    // cout<<"Name : "<<s1.name<<endl;
    // cout<<"Roll No : "<<s1.roll_no<<endl;
    // cout<<"Age : "<<s1.age<<endl;
    // cout<<"Grade : "<<s1.grade<<endl;

    // accessing private members using getter and setter functions
    // Student s1;
    // s1.setName("Abishek");
    // s1.setAge(20);
    // cout << "Student details : " << endl;
    // cout << "Name : " << s1.getName() << endl;
    // cout << "Age : " << s1.getAge() << endl;


    // size of objects
    // random r1;
    // cout<<"Size of object r1 is : "<<sizeof(r1)<<endl;

    // creating objects dynamically
    Student* s2 = new Student; // dynamic memory allocation
    // (*s2).name = "Abishek";
    // (*s2).roll_no = 24;
    // (*s2).age = 20;
    // (*s2).grade = "A+";

    // arrow operator
    s2->name = "Abishek";
    s2->roll_no = 24;
    s2->age = 20;
    s2->grade = "A+";

    cout << "Student details : " << endl;
    cout << "Name : " << s2->name << endl;
    cout << "Roll No : " << s2->roll_no << endl;
    cout << "Age : " << s2->age << endl;
    cout << "Grade : " << s2->grade << endl;
}