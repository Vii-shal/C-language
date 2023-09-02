// decimel to binery




#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int power = 1;
    int digit;
    int bin = 0;

    while (n>0){
        digit = n%2;
        bin = bin + digit*power;
        power *= 10;
        n/=2;
    }
    cout<<bin<<endl;
    return 0;
}