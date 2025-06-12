//PYRAMID
#include<iostream>
using namespace std;
int main() {
    int ruang,baris=5;
    cout<<"PYRAMID\n\n";
    for(int i=1,k=0; i<=baris; ++i,k=0) {
        for(ruang=1; ruang<=baris-1; ++ruang) {
            cout<<" ";
        }
        while(k!=2*i-1) {
            cout<<"*";
            ++k;
        }
        cout<<endl;
    }

    return 0;
}