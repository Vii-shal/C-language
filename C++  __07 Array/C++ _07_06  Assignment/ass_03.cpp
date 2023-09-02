// Given an integer array and its size , reverse the array and print it ,

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // int n;cin>>n;
    // int arr[n];
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // for (int i=n-1;i>=0;i--){
    //     cout<<arr[i];
    // }
    // return 0;

    int n;cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}