// Given a number num and a value k . Print k multiples of num. 
// eg. input: num=12 ,k=5
//     output: 12 , 24 , 36 , 48 , 60

#include<iostream>
using namespace std;

void f(int num,int k){
    // base case 
    if (k<1)  return;
    // assumption
    f(num,k-1);
    // self work 
    cout<<num*k<<"  ";
}

int main(){
    f(12,5);
    return 0;
}