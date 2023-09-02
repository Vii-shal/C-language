#include<iostream>
using namespace std;

int main(){
    int x=9;
    int y=2;
    int *ptr = &x;

    // ptr = 5 ;     // we cant do this as ptr only stores adress nothing else

    // *ptr = &y ;   // this wont work as we cannot store adress in an int bucket

    // cout<<&ptr;   // print adress of ptr bucket
}