#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    // use of ofstream - Output File Stream
    //Used to write data into a file.
    // Open file for writing. //If file doesn't exist: it will be created. 
    // If file already exists: it will be overwritten.
//    ofstream fout("op.txt"); 
//  if(!fout) { // this will check if file is opened successfully or not
//         cout<<"Error in opening file"<<endl;
//         return -1;
//     }
//    fout<<"This is first line ";
//    fout<<"This is second line"<<endl;
//    fout.close();
   



    // read from the file
    // input File Stream -> Used to read from file.
   // ifstream fin("data.txt");
//    ifstream fin;
//    fin.open("data.txt");
//     string s;
//     int n;
//     fin>>s; // this will read only first word from the file
//     fin>>n; // this will read the first integer from the file
//     cout<<"Name : "<<s<<endl;
//     cout<<"Age : "<<n<<endl;


   

    // HW 
    // ofstream fout;
    // fout.open("hw.txt");
    // fout<<"1 5 3 11 6 -2"<<endl;

    // ifstream fin;
    // fin.open("hw.txt");
    // vector<int> v;
    // int x;
    // while(fin>>x) {
    //     v.push_back(x);
    // }
    // sort(v.begin(),v.end());

    // ofstream fout2;
    // fout2.open("hw.txt");
    // for(int i=0;i<v.size();i++) {
    //     fout2<<v[i]<<" ";
    // }

}