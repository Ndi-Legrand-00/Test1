#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    int num;
    cout << "Enter number:" << endl;
    cin >> num;
    cout << "Multiplication table of" << num<<"is:\n"<<endl;
    for(int i=0; i<=13; i++) {
        cout <<num<<"×"<<i<<"="<<num*i <<"\n"<<endl;
    }
    return 0;
}