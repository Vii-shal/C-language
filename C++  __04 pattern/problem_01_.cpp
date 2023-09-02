// count the number of digits for a given number



#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digit , count=0;

    while (n>0){
        digit = n%10;
        n/=10;
        count++;
    }
    cout<<count;
    return 0;
    
}