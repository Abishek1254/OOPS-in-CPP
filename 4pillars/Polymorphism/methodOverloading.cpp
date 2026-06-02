#include<iostream>
using namespace std;

// class Area {
//     public:
//     // Function Overloading
//     void calculateArea(int r) {
//     cout<< "Area of circle: "<<3.14*r*r<<endl; 
//     }
//     void calculateArea(int l, int b) {
//         cout<< "Area of rectangle: "<<l*b<<endl; 
//     }
    // void calculateArea(int a, int b, int h) {
    //     cout<< "Area of trapezium: "<<0.5*(a+b)*h<<endl; 
    // }

    // void calculateArea(double s,int b){
    //     cout<< "Area of square: "<<s*s<<endl; 
    // }
    // void calculateArea(int b,double s){
    //     cout<< "Area of triangle: "<<0.5*b*s<<endl;
    // }

    // void fun1(int a, string s) {
    //     cout<<"Integer is "<<a<<" and string is "<<s<<endl;
    //     cout<<"String is "<<s<<" and integer is "<<a<<endl;
    //     return 0;
    // }


    // void fun2(string s, int a) {
    //     cout<<"String is "<<s<<" and integer is "<<a<<endl;
    //     cout<<"Integer is "<<a<<" and string is "<<s<<endl;
    // }
//};



//Overloading + for Complex Numbers
class complex{
    private:
    int real;
    int img;

    public:
    complex() {
        real=0;
        img=0;
    }

    complex(int r, int i) {
        this->real=r;
        this->img=i;
    }

    complex operator + (complex&c) {
        complex ans;
        ans.real= this->real+c.real;
        ans.img=this->img+ c.img;
        return ans;
    }

    void display() {
        cout<<"Complex number is "<<real<<" + "<<img<<"i"<<endl;
    }
};

// //Overloading == for Comparison
// class point {
//     int x,y;
//     public:
//     point(int x, int y){
//         this->x=x;
//         this->y=y;
//     }
//     bool operator == (point &p) {
//         if(x==p.x && y==p.y)
//         return true;

//         return false;
//     }
//     void display(){
//         cout<<"Point is ("<<x<<","<<y<<")"<<endl;
//     }
// };


class Point{
    private:
    int x,y;

    public:
    Point(int x,int y) {
        this->x=x;
        this->y=y;
    }

    bool operator == (Point &p) {
        if(this->x==p.x && this->y==p.y)
        return true;

        return false;
    }
};


int main() {
    // method overloading
    //Area a1,a2,a3;
    // a1.calculateArea(5);
    // a2.calculateArea(5,10);
    // a3.calculateArea(2,3,4);

    // a1.fun1(5,"Hello");
    // a2.fun2("World",10);


    // Area a4,a5;
    // Area a4,a5;
    // a4.calculateArea(1.2,1.1);
    // a5.calculateArea(1.2,1.3);


    // operator Overloading for + for Complex Numbers
    complex c1(2,2);
    complex c2(5,3);
    complex c3=c1 + c2;
    c3.display();

    // Overloading == for Comparison
    Point p1(2,3);
    Point p2(2,3);
    if(p1==p2)
    cout<<"Points are equal"<<endl;
    else
    cout<<"Points are not equal"<<endl;
    
    return 0;

}