#include<iostream>
using namespace std;

class Customer{
     
    string name; 
    int account_no;
    int balance;
    
    public:
    Customer(string n, int acc_no, int bal){
        name = n;
        account_no = acc_no;
        balance = bal;
    }

    void deposit(int amount) { 
        if(amount>0) {
        balance += amount;
        cout<< "Deposited: " << amount << " Rs, New Balance: " << balance <<" Rs "<< endl;
        }
        else
        throw runtime_error("Deposit amount must be positive !") ;
    }

    void withdraw(int amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout<< "Withdrawn: " << amount << " Rs , New Balance: " << balance << "Rs"<< endl;
        } 
        else if( amount <= 0 ) 
        throw runtime_error("Withdrawal amount must be positive !") ;
        
        else 
        throw runtime_error("Insufficient balance in your account !") ;
    }

};

int main() {
    Customer c1("Alice", 100, 0);
    try{
    c1.deposit(500);  // Valid deposit
    c1.withdraw(-3); // Invalid withdrawal
    c1.withdraw(200); // Valid withdrawal
    }

    catch(const runtime_error &e){
        cout <<"Exception ocurred : " <<e.what() << endl;
    }

}