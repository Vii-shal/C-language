// Given an integer , find out the sum of digits using recursion .

#include<iostream>
using namespace std;

int sum(int n){
    if (n<=9  && n>=0) return 0;
    return n%10 + sum(n/10);
}

int main(){
    int ans = sum(5591884); 
    cout<<ans;
}


// d = number of digits ( ie. 2341 ,d=4)
// time  complexity --->  O(d)
// space  complexity --->  O(d)