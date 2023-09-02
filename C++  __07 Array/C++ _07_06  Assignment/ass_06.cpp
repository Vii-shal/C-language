// Given an integer array containing n elements . Find the element in the array 
// for which all the elements to its left are smaller than it and 
// all the elements to the right of it are larger than it .
// eg. arr = { 1 , 6 , 5 , 7 , 10 , 8 , 9 }      --->  ans = 7
//     arr = { 5 , 6 , 2 , 8 , 10 , 9 }          --->  ans = 8



#include<iostream>
using namespace std;

int midd(int arr[],int n){
    int max[n];
    int min[n];
    int big=arr[0];
    int small=arr[n-1];
    int ele=-1;
    for(int i=0;i<n;i++){
        if (big<arr[i]){
            big=arr[i];
        }
        max[i]=big;
    }
    for (int i=n-1;i>=0;i--){
        if (small>arr[i]){
            small=arr[i];
        }
        min[i]=small;
    }
    for (int i=0;i<n;i++){
        if (i!=0 && i!=n-1){
            if (min[i]==max[i]){
                ele = min[i];
                break;
            }
        }
    }
    return ele;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<midd(arr,n);
    return 0;
}