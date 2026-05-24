#include<iostream>
using namespace std;

class NegativeAgeException : public runtime_error {
    public:
    NegativeAgeException(const string &msg) : runtime_error(msg) {}
};

class Person{
    private:
    string name;
    int age;

    public:
    void setData(string n, int a){
        name = n;
        if(a<=0) 
        throw NegativeAgeException("Age must be positive !");

        age = a;
    }

    void display(){
        cout<<"Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1;
    try{
    p1.setData("Bob", -5); // Invalid age
    p1.display();
    }
    catch(const NegativeAgeException& e){ 
        cout << "NegativeAgeException Ocurred at line 31: " << e.what() << endl;
    }
}