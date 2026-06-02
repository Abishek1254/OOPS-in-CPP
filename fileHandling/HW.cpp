#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
    ofstream fout("z1.txt");
    fout<<"5 4 3 2 1"<<endl;

    ifstream fin("z1.txt");
    int x;
    vector<int> v;

    while(fin>>x) {
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    ofstream fout2("z1.txt");
    fout2<<"Sorted vector is: ";
    for(int i=0;i<v.size();i++) {
        fout2<<v[i]<<" ";
    }
    

}