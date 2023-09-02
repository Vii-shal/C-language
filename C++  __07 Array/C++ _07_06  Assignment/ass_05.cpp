// Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) .
//  Find and return the only number of the range that is not present in the array .
// eg. {0,3,1}
//     missing = 2
//     as range is [0,3]


#include<iostream>
using namespace std;

int val(int a[],int n){
    int sum=0;
    int missing=-1;
    for (int i=0;i<n;i++){
        sum+=a[i];
    }
    int rangeSum=(n)*(n+1)/2;
    missing = rangeSum - sum;
    return missing;
}

int main(){
    int n;cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<val(a,n)<<endl;
    return 0;
}