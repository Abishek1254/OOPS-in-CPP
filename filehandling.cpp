#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    // open the file
    // ofstream fout;
    // fout.open("sample.txt");

    // //write in it
    // fout<<"This is first line";
    // fout.close();
   
    // read from the file
    // ifstream fin;
    // fin.open("sample.txt");
    // char c;
    // fin>>c;
    
    // while(!fin.eof()) { // here eof() is used to check end of file
    //     cout<<c;
    //     fin>>c;
    // } // here space is not printed

    // fin.get(c);
    // while( fin.eof() == 0 ) { // here eof() is used to check end of file
    //     cout<<c;
    //     fin.get(c);
    // } // here space is printed


    // take a vector input from user and store it in a file and also store the sorted vector in the same file
    // vector<int> v(5);
    // cout<<"Enter 5 integers in vector: "<<endl;
    // for(int i=0;i<5;i++) {
    //     cin>>v[i];
    // }
    
    // ofstream fout;
    // fout.open("vector.txt");
    // fout<<"Original vector is: ";
    // for (int i=0;i<5;i++) {
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
    // ofstream fout;
    // fout.open("tmp.txt"); 
    // fout<<"Hello,Abishek"<<endl;
    // fout<<"Welcome,to C++ programming"<<endl;
    // fout<<"File,handling in C++"<<endl;
    // fout.close();

    // ifstream fin;
    // fin.open("tmp.txt");
    // string line;
    // while(getline(fin,line,',')) { // here ',' is used as a delimiter
    //     cout<<line<<endl;
    // }

    // HW 
    ofstream fout;
    fout.open("hw.txt");
    fout<<"1 5 3 11 6 -2"<<endl;

    ifstream fin;
    fin.open("hw.txt");
    vector<int> v;
    int x;
    while(fin>>x) {
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    ofstream fout2;
    fout2.open("hw.txt");
    for(int i=0;i<v.size();i++) {
        fout2<<v[i]<<" ";
    }





}