#include<iostream>
using namespace std;

int main(){
    int x=12;
    float y=0;
    // cout<<&x<<"  "<<&y;        // adress of operator 


    // create a pointer that can store adress of x;
    // as x is an integer variable , so we need a pointer 
    // that can store adress of integer type
    int *ptr=&x;
    cout<<ptr<<endl;

    // create a pointer that can store adress of y;
    // as y is an float variable , so we need a pointer 
    // that can store adress of float type
    float *ptr2=&y;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    cout<<&ptr2 <<endl;


    // updsating x with pointer 
    *ptr=69;
    cout<<*ptr<<endl;
    return 0;
}