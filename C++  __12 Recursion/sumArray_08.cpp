// sum of all elements of an array  

#include<iostream>
using namespace std;

int f(int *arr,int i,int n){
    if (i==n-1)  return arr[i];
    int sum=0;
    return arr[i] + f(arr,++i,n);
}

int main(){
    int arr[]={1,2,3,4,5};
    cout<<f(arr,0,5);
}
