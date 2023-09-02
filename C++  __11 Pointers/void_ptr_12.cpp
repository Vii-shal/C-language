#include<iostream>
using namespace std;

int main(){
    float f = 10.2;
    int x = 10;
    void *ptr = &f;
    ptr = &x;

    // cout<<*ptr;         // runtime error , as ptr is fix to particular data-type

    int *integerPointer = (int *)ptr;        // typecasting
    cout<<*integerPointer<<"\n";           
    return 0;
}