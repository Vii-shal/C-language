#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if (num%3==0 || num%5==0){
        cout<<"numis div by 3or5"<<endl;
    }
    else{
        cout<<"not";
    }
    return 0;
}