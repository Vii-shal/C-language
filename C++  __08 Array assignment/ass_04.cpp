// Given an integer array arr , 
// return the number of consecutive sequences(subarrays) with od  sum.


#include<iostream>
using namespace std;

int main(){
    // int arr[]={1,3,5};
    // int n=3;

    int arr[]={0,2,4};
    int n=3;
    for (int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    int count=0;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if (i==0 && arr[j]%2!=0){
                count++;
            }
            if (i!=0 && (arr[j]-arr[i-1])%2!=0){
                count++;
            }
        }
    }
    cout<<"number of consecutive sequences(subarrays) are : "<<count;
}