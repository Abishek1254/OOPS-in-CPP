#include<iostream>
using namespace std;

class Customer {
    public: 
    string name; 
    int account_no;
    int balance;

    static const int maxcustomers=5;
     
    static int total_balance; // static member to keep track of total balance
    static int customer_count; // Static member to keep track of customer count
    
    public:
    // static member function to display customer count and total balance
    static void displayStatic() {
        cout << "Total customers: " << customer_count << endl;
        cout << "Total balance: " << total_balance << endl;
    }
    
    // Parameterized constructor1
    Customer(string n, int acc_no, int bal){
        if(customer_count+1 > maxcustomers) {
            cout<<"Max Customers limit reached !!"<<endl;
            return ;
        }
        name = n;
        account_no = acc_no;
        balance = bal;
        customer_count++; // Increment count when a new customer is created
        total_balance += bal;// Update total balance
    }

    void deposit (int amount) { 
        if(amount>0) {
        balance += amount;
        total_balance += amount; // Update total balance
        }
        else
        cout << "Deposit amount must be positive !" << endl;
    }

    void withdraw(int amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            total_balance -= amount; // Update total balance
        } 
        else 
        cout << "Insufficient balance or invalid withdrawal amount!" << endl;
    }

};
int Customer::customer_count = 0; // Initialize static member
int Customer::total_balance = 0; // Initialize static member


int main() {
    Customer c1("Alice", 101, 1000);
    Customer c2("Bob", 102, 3000);
    Customer c3("Charlie", 103, 2000);
    Customer c4("Diana", 104, 4000);

    // accessing static member using directly without using object
    //cout << "Accessing static member directly: " << Customer::customer_count << endl;

    //Customer:: displayStatic(); // Call static member function to display count and total balance

    // c1.deposit(500);
    // c2.withdraw(1000);
    // c3.deposit(200);

    //Customer:: displayStatic(); // Call static member function to display count and total balance

}