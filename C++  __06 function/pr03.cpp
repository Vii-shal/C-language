#include<iostream>
using namespace std;

void vote(int age){
    if(age>=18){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

int main(){
    int age;
    cin>>age;
    vote(age);
    return 0;
}