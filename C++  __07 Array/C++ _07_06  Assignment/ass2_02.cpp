// Given a vector arr[] sorted in increasing order of n size and an integer x,
// find if there exists a pair in the array whose sum is exactly x .
// not good way.

#include<iostream>
using namespace std;

bool pairSum(int arr[],int n , int x){
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if (arr[i+1]+arr[j] == x){
                return true;
                break;
            }
        }
    }
    return false;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter x";
    int x;cin>>x;
    int ans = pairSum(arr,n,x);
    cout<<ans<<endl;
    return 0;
}