// Given a number n . Find the sum of natural numbers till n but with alternate signs. 
// that means if n=5  ,then sum = 1-2+3-4+5 = 3

#include<iostream>
using namespace std;
    
int sum=0;     // global variable

int f(int n){
    if (n<1) return 0;
    // f(n-1);
    // if (n%2==0){
    //     sum -= n;
    // }
    // else{
    //     sum += n;
    // }
    // return sum;

     return f(n-1) + (n%2==0 ? -n : +n);
}

int main(){
    cout<<f(10);
    return 0;

}