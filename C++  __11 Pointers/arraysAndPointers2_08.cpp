#include<iostream>
using namespace std;

int main(){
    int a[3]={11,12,13};
    int (*ptr)[3] = &a;
    cout<<ptr<<"  "<<a<<"  "<<*ptr<<"  "<<*a;
}