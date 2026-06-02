#include<iostream>
using namespace std;

// single Inheritance in C++
// class Human {
//     protected:
//     string name;
//     int age;
//     public:
//     // default constructor
//     Human() {
//         cout << "Human constructor called " << endl;
//     }
//     Human(string name, int age) {
//         cout<<"Human constructor 2 "<<endl;
//         this->name = name;
//         this->age = age;
//     }
//     void work() {
//         cout << "Human Working" << endl;
//     }
//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };
// class Student : public Human {
//     private:
//     int roll_number;
//     int fees;
//     public:
//     Student(string name, int age, int roll_number, int fees):Human(name,age) {
//         this->roll_number = roll_number;
//         this->fees = fees; 
//      }
//     // default constructor
//     Student() {
//         cout << "Student constructor" << endl;
//     }
//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Roll Number: "<<roll_number<<endl;
//         cout<<"Fees: "<<fees<<endl;
//     }
// };


// multi-level Inheritance in C++
// class Person{
//     protected:
//     string name;
//     public:
//     Person() {
//     cout<<"Person constructor "<<endl;
//     }
//     void introduce(){
//         cout<<"My name is "<<name<<endl;
//     }
// };
// class Employee : public Person{
//     protected:
//     int salary;
//     public:
//     Employee() {
//         cout<<"Employee constructor "<<endl;
//     }
//     void monthly_salary(){
//         cout<<"My salary is "<<salary<<endl;
//     }
// };
// class Manager : public Employee{
//     protected:
//     string department;
//     public:
//     Manager() {
//         cout<<"Manager constructor"<<endl;
//     }
//     Manager(string name, int salary, string department) {
//         this->name = name;
//         this->salary = salary;
//         this->department = department;
//     }
//    void work(){
//         cout<<"I am a manager in "<<department<<" department."<<endl;
//     }
// };

// multiple Inheritance in C++
// class Youtuber{
//     public:
//     int subscribers;
//     Youtuber() {
//         cout<<"Youtuber constructor"<<endl;
//     }
//     void content(){
//         cout<<"I have "<<subscribers<<" subscribers on my channel."<<endl;
//     }
// };
// class Engineer {
//     private:
//     void money() {
//         cout<<"Earning money"<<endl;
//     }
//     public:
//     string specialization;
//     Engineer() {
//         cout<<"Engineer constructor"<<endl;
//     }
//     void work() {
//         cout<<"I am an engineer specialized in "<<specialization<<endl;
//     }
// };
// class Teacher : public Youtuber, public Engineer{
//     public:
//     string name;
//     Teacher() {
//         cout<<"Teacher constructor"<<endl;
//     }
//     Teacher(string name, string specialization, int subscribers) {
//         this->name = name;
//         this->specialization = specialization;
//         this->subscribers = subscribers;
//     }
//     void showcase() {
//         cout<<"I am "<<name<<endl;
//         work(); // From Engineer class
//         content(); // From Youtuber class
//     }
// };

// hierarchical Inheritance in C++
// class Human{
//     protected:
//     string name;
//     int age;
//     public:
//     Human() {
//         cout << "Human constructor" << endl;
//     }
//     Human(string name, int age) {
//         this->name = name;
//         this->age = age;
//     }
//     void work() {
//         cout << "Working" << endl;
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };
// class Student : public Human{
//     int roll_number;
//     int fees;
//     public:
//     Student() {
//         cout<<"Student constructor "<<endl;
//     }
//     Student(int roll_number, int fees) {
//         this->roll_number = roll_number;
//         this->fees = fees; 
//      }
//      Student(string name,int age, int roll_number, int fees) : Human(name,age) {
//         this->roll_number = roll_number;
//         this->fees = fees;
//      }
//     void display(){
//         cout<<"Roll Number: "<<roll_number<<endl;
//         cout<<"Fees: "<<fees<<endl;
//     }
// };
// class Teacher : public Human{
//     string subject;
//     int salary;
//     public:
//     Teacher() {
//         cout<<"Teacher constructor "<<endl;
//     }
//     Teacher(string name, int age, string subject, int salary) : Human(name, age) {
//         this->subject = subject;
//         this->salary = salary; 
//      }
//     void display() {
//         cout<<"Subject: "<<subject<<endl;
//         cout<<"Salary: "<<salary<<endl;
//     }
// };

// hybrid Inheritance in C++
// class Student{
//     public:
//     Student() {
//         cout<<"Student constructor "<<endl;
//     }
//     void print(){
//         cout<<"I am student"<<endl;
//     }
// };
// class Male{
//     public:
//     Male() {
//         cout<<"Male constructor "<<endl;
//     }
//     void print() {
//         cout<<"I am Male"<<endl;
//     }
// };
// class Female{
//     public:
//     Female() {
//     cout<<"Female constructor "<<endl;
//     }
//     void print() {
//         cout<<"I am female"<<endl;
//     }
// };
// class Boy : public Student,public Male{
//     public:
//     void print() {
//         cout<<"I am boy"<<endl;
//     }
// };
// class Girl : public Student,public Female{
//     public:
//     void print() {
//         cout<<"I am girl"<<endl;
//     }
// };


// multi path Inheritance in C++
class Human {
public:
Human() {
    cout << "Human constructor " << endl;
}
    void work() {
        cout << "Working as a Human" << endl;
    }
};

class Engineer :virtual public Human {
    private:
    void money() {
        cout<<"Earning money"<<endl;
    }
    public:
    string specialization;
    int x=5;
    Engineer() {
        cout<<"Engineer constructor"<<endl;
    }
    void specialise() {
        cout<<"I am an engineer specialized in "<<specialization<<endl;
    }
};

// You want ONLY ONE Human object, shared by Engineer and Youtuber.

// virtual inheritance tells C++:
// If multiple paths lead to the same base class, create only ONE shared instance.”
// themost derived class (Teacher) is responsible for constructing Human.

//  In multipath inheritance, ambiguity arises due to multiple copies of base class. 
//  Virtual inheritance ensures only one shared base class object, resolving ambiguity.

class Youtuber :  virtual public Human {
    public:
    int subscribers;
    int x=10;
    Youtuber() {
        cout<<"Youtuber constructor"<<endl;
    }
    void content(){
        cout<<"I have "<<subscribers<<" subscribers on my channel."<<endl;
    }
};
class Teacher : public Engineer, public Youtuber{
    public:
    string name;
    Teacher() {
        cout<<"Teacher constructor"<<endl;
    }
    Teacher(string name, string specialization, int subscribers) {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }
    void showcase() {
        cout<<"I am "<<name<<endl;
        specialise(); // From Engineer class
        content(); // From Youtuber class
    }
};



int main() {
    // // Single Inheritance in C++
    // Student s1("Abishek", 20, 24, 1000);
    // //s1.name="Abishek"; // can't access name since it's protected in Human class
    // s1.work();  // Inherited method from Human class
    // s1.display();  // Method from Student class
    // s1.Human::display();  // Method from Human class
    // Student s2;  // Here first Human's constructor will be called then Student's constructor

    

    // Multi-level Inheritance in C++
    //Manager m;
    // Manager m1("Abishek", 500, "IT");
    // m1.work();
    // m1.introduce();
    // m1.monthly_salary();



    // Multiple Inheritance in C++
    // Teacher t1("Abishek", "Computer Science", 5000);
    // t1.showcase();
    //t1.money(); // not accessible here since money() is private
    



    // Hierarchial Inheritance in C++
    //Student s1(24, 1000);
    // Student s1("Abishek", 20, 24, 1000);

    // s1.work();  // Inherited method from Human class
    // s1.display();  // Method from Student class

    // Teacher t1("Ramesh", 40, "Maths", 50000);
    // t1.work();  // Inherited method from Human class
    // t1.display();  // Method from Teacher class





    // Hybrid Inheritance in C++
    // Girl g1;
    // g1.print();  // From girl class
    // g1.Female::print();  // From female class
    // g1.Student::print(); // From student class

    // Boy b1;
    // b1.print();  // From boy class
    // b1.Male::print(); 
    // b1.Student::print();



    // Multi path Inheritance in C++
    // Error: Ambiguous — compiler doesn't know whether
    // //to call work() from Engineer::Human or Youtuber::Human
    Teacher t;
    //t.work(); // Error: Ambiguous
    // cout<<t.Youtuber::x<<endl;
    // cout<<t.Engineer::x;

    // temporary fix using explicitly specifying the path
    // t.Engineer::work();
    // t.Youtuber::work();

    // observe the constructor behaviours without virtual and with virtual also

}