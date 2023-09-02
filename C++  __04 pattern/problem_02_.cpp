// find sum of digits in a given number

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digit;
    int sum=0;

    while(n>0){
        digit = n%10;
        sum = sum +digit;
        n/=10;
    }
    cout<<sum;
    return 0;
}