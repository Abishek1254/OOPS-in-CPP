#include<iostream>
using namespace std;

class Customer{
    private:
    string name;
    int account_no;
    int balance;

    public:
    Customer(string name, int account_no, int balance){
        this->name = name;
        this->account_no = account_no;
        this->balance = balance;
    }

    void deposit(int amount) {
        if (amount>0) {
            balance+=amount;
            cout<<"Deposited : "<<amount<<" Rs, "<<"New Balance : "<<balance<<" Rs"<<endl;
        }
        else
        throw "Deposit amount must be positive!";
    }

    void withdraw(int amount) {
        if(amount>0 && amount<=balance) {
            balance-=amount;
            cout<<"Withdrawn : "<<amount<<" Rs, "<<"New Balance : "<<balance<<" Rs"<<endl;
        } 

        else if(amount<=0)
        throw "Withdrawal amount must be positive!";
        
        else
        throw "Insufficient balance for withdrawal!";   
    }
};


int main() {
    Customer c1("Alice", 100, 0);
    try{
    c1.deposit(500);  // Valid deposit
    c1.withdraw(-3); // Invalid withdrawal
    c1.withdraw(200); // Valid withdrawal
    }
    
    catch(const runtime_error& e){
        cout <<"Runtime Exception ocurred : " <<e.what() << endl;
    }
    catch(const bad_alloc& e){
        cout <<"Bad Alloc Exception ocurred : " <<e.what() << endl;
    }
    catch (const char *msg) {
        cout<<"Exception ocurred : "<<msg<<endl;
    }
    catch(...){
        cout <<"Some other Exception ocurred : " << endl;
    }


}