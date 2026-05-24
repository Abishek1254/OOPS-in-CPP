#include<iostream>
using namespace std;

class Area {
    public:
    // Function Overloading
    void calculateArea(int r) {
    cout<< "Area of circle: "<<3.14*r*r<<endl; 
    }
    void calculateArea(int l, int b) {
        cout<< "Area of rectangle: "<<l*b<<endl; 
    }
    void calculateArea(int a, int b, int h) {
        cout<< "Area of trapezium: "<<0.5*(a+b)*h<<endl; 
    }

    // void calculateArea(double s,int b){
    //     cout<< "Area of square: "<<s*s<<endl; 
    // }
    // void calculateArea(int b,double s){
    //     cout<< "Area of triangle: "<<0.5*b*s<<endl;
    // }
};

//Overloading + for Complex Numbers
class complex {
    int real,img;
    public:
    complex() {
        real=0;
        img=0;
    }
    complex(int real, int img) {
        this->real = real;
        this->img = img;
    }

    // Operator overloading for + operator
    complex operator + (complex& c) {
        complex ans;
        ans.real=real+c.real;
        ans.img=img+c.img;
        return ans;
    }
    void display() {
        cout<< "Result is : " <<real<<" + "<<img<<"i"<<endl;
    }
};

//Overloading == for Comparison
class point {
    int x,y;
    public:
    point(int x, int y){
        this->x=x;
        this->y=y;
    }
    bool operator == (point &p) {
        if(x==p.x && y==p.y)
        return true;

        return false;
    }
    void display(){
        cout<<"Point is ("<<x<<","<<y<<")"<<endl;
    }
};


int  main() {
    // method overloading
    // Area a1,a2,a3;
    // a1.calculateArea(5);
    // a2.calculateArea(5,10);
    // a3.calculateArea(2,3,4);

    // Area a4,a5;
    // a4.calculateArea(1.2,1.1);
    // a5.calculateArea(1.2,1.3);


    // operator Overloading for + for Complex Numbers
    // complex c1(3,4);
    // complex c2(5,6);
    // complex c3=c1 + c2;
    // c3.display();

    // Overloading == for Comparison
    point p1(2,3);
    point p2(2,4);
    if(p1==p2) {
        cout<<"Points are equal"<<endl;
    } 
    else {
        cout<<"Points are not equal"<<endl;
    }
    
    return 0;

}