// Given two numbers x and y .Find the greatest common division (GCD) of x and y using recursion .

#include<iostream>
using namespace std;

int f(int x,int y){
    if (y==0) return x;
    return x>y ? f(y,x%y) : f(x,y%x);
}


int main(){
// -----------------------------------------------------------------------------------
    // iterative method 

    // int x, y;
    // cin>>x>>y;
    // int z=min(x,y);
    
    // for (int k=z;k>0;k--){
    //     if (x%k==0 and y%k==0){
    //         cout<<k;
    //         break;
    //     }
    // }
// ----------------------------------------------------------------------------------
    
    cout<<f(12,20)<<endl;
    cout<<f(40,8)<<endl;
    cout<<f(9,4);

}