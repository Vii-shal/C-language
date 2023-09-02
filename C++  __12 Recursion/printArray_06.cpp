// print array recursively

#include<iostream>
using namespace std;

void f(int *arr,int i,int n){ 
    // base case 
    if (i==n)  return;
    // self work 
    cout<<arr[i]<<endl;
    // asuumption
    f(arr,++i,n);
    
}

int main(){
    int arr[]={1,2,3,4,5};
    f(arr,0,5);
}