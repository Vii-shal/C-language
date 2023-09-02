#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int swap;
    int sum;
    cin>>a;
    cin>>b;
    swap = a;
    a=b;
    b=swap;
    cout<<"value of a is : "<<a<<endl;
    cout<<"value of b is : "<<b<<endl;
    sum = a+b;
    cout<<"sum is : "<<sum<<endl;

}