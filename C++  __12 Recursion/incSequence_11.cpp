#include<iostream>
using namespace std;

void f(int n){
    if (n<1){
        return;
    }
    f(n-1);
    cout<<n<<endl;
    
    
}

int main(){
    int n=4;
    f(n);
}