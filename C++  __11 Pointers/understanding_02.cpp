#include<iostream>
using namespace std;

int main(){
    int x,y;       // declare x and y , so x,y has a garbage value

    cin>>x>>y;     //taking input of x and y

    int *ptrx = &x;  // &x fetches adress of x and then store it in pytrx
    int *ptry = &y;  // &y fetches adress of y and then store it in pytry

    int result;      // declare result so it has garbage value

    int *ptr_result = &result;

    // *ptrx ---> 10
    // *ptry ---> 20
    // *ptrx + *ptry ---> 30
    // *ptr_result = 30  ; we store 30 on the adress stored in *ptr_result 
    // result ---> 30

    *ptr_result = *ptry + *ptrx;

    cout<<*ptr_result<<endl;
    cout<<result<<endl;

}