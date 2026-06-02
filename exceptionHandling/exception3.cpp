#include<iostream>
#include<exception>
using namespace std;

// Custom exception classes defined here
class InvalidAmountError: public runtime_error {
    public:
    InvalidAmountError(const string& msg) : runtime_error(msg) {}
};

class InsufficientBalanceError: public runtime_error {
    public:
    InsufficientBalanceError(const string &msg) : runtime_error(msg) {}
};

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
        throw InvalidAmountError("Deposit amount must be positive !") ;
    }

    void withdraw(int amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout<< "Withdrawn: " << amount << " Rs , New Balance: " << balance << "Rs"<< endl;
        } 
        else if( amount <= 0 ) {
            throw InvalidAmountError("Withdrawal amount must be positive !") ;
        }
        else 
        throw InsufficientBalanceError("Insufficient balance in your account !") ;
    }
};


int main() { 
    Customer c1("Alice", 100, 0);
    try{
    c1.deposit(500);  // Valid deposit
    c1.withdraw(100); 
    c1.withdraw(500);
    }

    catch(const InvalidAmountError& e) {
        cout <<"Invalid Amount Exception ocurred : " <<e.what() << endl;
    }
    catch(const InsufficientBalanceError& e) {
        cout <<"Insufficient balance exception ocurred : " <<e.what() << endl;
    }
    catch(const runtime_error& e) {
        cout <<"Some other runtime error ocurred : " <<e.what() << endl;
    }
    catch(...){
        cout <<"Some other miscellaneous exception ocurred "<< endl;
    }

}