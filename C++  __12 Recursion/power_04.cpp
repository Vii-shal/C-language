// Given two numbers p & q , find the value p^q using a recursive function .

#include<iostream>
using namespace std;

int pow(int p,int q){
    if (q==0)  return 1;
    return p*pow(p,q-1);
}

int main(){
    int ans = pow(5,3);
    cout<<ans;
}


// time complexity ---> O(q)
// space complexity ---> O(q)