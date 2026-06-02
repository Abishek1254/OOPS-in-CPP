#include <iostream>
using namespace std;

// without encapsulation
// class Customer {
// public:
//     string name;
//     int age;
// };

// int main() {

//     Customer c;

//     c.name = "Abish";
//     c.age = -50;   // Invalid but allowed

//     cout << c.age;
// }







// #include <iostream>
// using namespace std;

// class Customer {

// private:
//     string name;
//     int age;

// public:

//     void setAge(int a) {

//         if(a >= 0)
//             age = a;
//         else
//             cout << "Invalid age\n";
//     }

//     int getAge() {
//         return age;
//     }
// };

// int main() {

//     Customer c;

//     c.setAge(21);

//     cout << c.getAge();
// }



#include <iostream>
using namespace std;

class BankAccount {

private:
    double balance;

public:

    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {

        if(amount > 0)
            balance += amount;
    }

    void withdraw(double amount) {

        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }

    double getBalance() {
        return balance;
    }
};

int main() {

    BankAccount acc;
    acc.deposit(5000);
    acc.withdraw(2000);

    cout << acc.getBalance();
}