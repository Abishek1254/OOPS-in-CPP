#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    // ifstream fin;
    // char c;
    // fin.open("op.txt");

    //  while(!fin.eof()) { // here eof() is used to check end of file
    //     cout<<c;
    //     fin>>c;
    // } // here space is not printed , it ignores space and moves to next character

    // fin.get(c);
    // while( !fin.eof() ) { // here eof() is used to check end of file
    //     cout<<c;
    //     fin.get(c);
    // } // here space is printed


    // take a vector input from user and store it in a file and also store the sorted vector in the same file
    // vector<int> v(5);
    // cout<<"Enter 5 integers in vector: "<<endl;
    // for(int i=0;i<5;i++) {
    //     cin>>v[i];
    // }
    
    // ofstream fout("vector.txt", ios::trunc); // here ios::trunc is used to overwrite the file;
    // fout<<"Original vector is: ";
    // for (int i=0; i<5; i++) {
    //     fout<<v[i]<<" ";
    // }
    // fout<<endl;
    // sort(v.begin(),v.end());
    // fout<<"Sorted vector is: ";
    // for (int i=0; i<5; i++) {
    //     fout<<v[i]<<" ";
    // }
    // fout.close();

    // read a file line by line and print it on console
    ofstream fout;
    fout.open("tmp.txt"); 
    fout<<"Hello,Abishek"<<endl;
    fout<<"Welcome,to C++ programming"<<endl;
    fout<<"File,handling in C++"<<endl;
    fout.close();

    ifstream fin;
    fin.open("tmp.txt");
    string line;
    // default delimiter for getline is '\n' but here we are using ',' as delimiter
    while( getline(fin,line,',')) {
        cout<<line<<endl;
    }
    fin.close();
    
}