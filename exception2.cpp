#include<iostream>
#include<exception>
using namespace std;

// the inbuilt and runtime_error exception classes in C++ standard library will be somewhat like this 
// class exception{
//     protected:
//     string msg;

//     public:
//    exception(string msg){
//         this->msg = msg;
//     }

//     string what() {
//         return msg;
//     }
// };


// class runtime_error : public exception {

//     public:
//     runtime_error(const string &msg): exception(msg) ;
// };


int main() {
    // Example 1: Division by zero
    // int a,b;
    // cout<<"Enter two integers: ";
    // cin>>a>>b;
    // try {
    //     if(b==0)
    //     throw "Division by zero !!";

    //     cout<<"Result: "<<a/b<<endl;
    // }
    // catch(const char* msg) {
    //     cout<<"Exception occurred at line 38 : "<<msg<<endl;
    // }
    


    // Example 2: Memory allocation failure
    try {
       int n=1000000000;
       int *arr= new int[n]; // Trying to allocate a v.large array
       delete[] arr;
    }
    catch (const bad_alloc &e) {
        cout << "Exception ocurred at line 53 : " << e.what() << endl;
    }
    catch(const runtime_error& e) {
        cout <<"Exception ocurred at line 50 : " <<e.what() << endl;
    }
    catch(...) {
        cout << "Some other exception occurred." << endl;
    }


}