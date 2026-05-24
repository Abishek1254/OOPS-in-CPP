#include<iostream>
using namespace std;

class Customer {
    public:
    string name;
    int account_no;
    int balance;
    int *p;
    
    // Default constructor
    Customer() {
        cout<<"Constructor called!"<<endl;
    }

    Customer(string name) {
        this->name = name;  
        cout<<"Constructor : "<<name<<endl;
    }

    // Parameterized constructor1
    Customer(string n, int acc_no, int bal) {
        name = n;
        account_no = acc_no;
        balance = bal;
        p = new int; 
        *p = 100;
    }
    // Parameterized constructor-2- 
    // using 'this' pointer to differentiate between data members and parameters
    Customer(string name, int account_no){
        this->name = name;  
        this->account_no = account_no;
        balance = 0; // default balance
    }

    // // inline constructor declaratrion
    // Customer(int acc_no, int bal) ;
    //  void display();


    //  // custom copy constructor
    // Customer(const Customer &c){
    //     cout<<"\nCustom Copy constructor called!"<<endl;
    //     name = c.name;
    //     account_no = c.account_no;
    //     balance = c.balance;
        
    //     // shallow copy- copying address of p
    //     this->p=c.p;
    //     // deep copy- copying value of p
    //     this->p= new int(*c.p);
    // }

    // // ~Customer() {
    // //     delete p; // Free the allocated memory
    // //     cout<<"Destructor called!"<<endl;
    // // }

    // ~Customer(){
    //     cout<<"Destructor : "<<name<<endl;
    // }
};

// inline constructor definition -outside the class
// inline Customer::Customer(int acc_no, int bal){
//     cout<<"Inline constructor called!"<<endl;
//     account_no = acc_no;
//     balance = bal;
//     name = "Unknown"; // default name
// }

// inline void Customer::display() {
//     cout << "Account number : " << account_no << ", Name: " << name << endl;
// }

int main() {
    // using default constructor
        Customer c1("Abishek", 123456, 5000);
        cout<<"Customer details : "<<endl;
        cout<<"Name : "<<c1.name<<endl;
        cout<<"Account No : "<<c1.account_no<<endl;
        cout<<"Balance : "<<c1.balance<<endl;
    
    // using simple parameterised constuctor
    // Customer c2("Abishek");
    // cout<<"Customer details : "<<endl;
    // cout<<"Name : "<<c2.name<<endl;
    // cout<<"Account No : "<<c2.account_no<<endl;
    // cout<<"Balance : "<<c2.balance<<endl;

    
    
    // Using parameterized constructor-1
    // Customer c1("Abishek", 123456, 5000); 
    // cout<<"Customer details : "<<endl;
    // cout<<"Name : "<<c1.name<<endl;
    // cout<<"Account No : "<<c1.account_no<<endl;
    // cout<<"Balance : "<<c1.balance<<endl;

    // Using parameterised constructor 2
    // Customer c2("Abishek",123,1000); 
    // cout<<"Customer details : "<<endl;
    // cout<<"Name : "<<c2.name<<endl;
    // cout<<"Account No : "<<c2.account_no<<endl;
    // cout<<"Balance : "<<c2.balance<<endl;
    // //cout<<"Data : "<<*(c2.data)<<endl;
    
    Customer c2=c1;
    cout<<"Customer details of c2 (copied from c1) : "<<endl;
    cout<<"Name : "<<c2.name<<endl;
    cout<<"Account No : "<<c2.account_no<<endl;
    cout<<"Balance : "<<c2.balance<<endl;
    //default copy constructor 
    // Customer c3=c2;  //Copying c2 to c3
    // cout<<"Customer details of c3 (copied from c2) : "<<endl;
    // cout<<"Account No : "<<c3.account_no<<endl;
    // cout<<"Balance : "<<c3.balance<<endl;
    // cout<<"Name : "<<c3.name<<endl;

    // custom  copy constructor
    // Customer c4(c2);
    // cout<<"Customer details of c4 (copied from c2) : "<<endl;
    // cout<<"Account No : "<<c4.account_no<<endl;
    // cout<<"Balance : "<<c4.balance<<endl;
    // cout<<"Name : "<<c4.name<<endl;

    // cout<<*(c2.p)<<endl;
    // cout<<*(c4.p)<<endl;
    // *(c2.p)=200;
    // cout<<*(c4.p)<<endl;


    // constructor and destructor call order
    //Customer a("1"),b("2"),c("3");
    //cout<<endl;
    
}