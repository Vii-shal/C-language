
// pass by value

#include<iostream>
using namespace std;

int change(int z){
    z=100;
    // return z;
    
}
int main(){
    int a=5;
    cout<<change(a);
    cout<<a;
    return 0;
}