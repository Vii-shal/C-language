// given 2 numbers a and b . Find a raise to the power b .


#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int result = 1;

    for(int i=1;i<=b;i++){
        result = result*a;
    }
    cout<<result;
    return 0;
}