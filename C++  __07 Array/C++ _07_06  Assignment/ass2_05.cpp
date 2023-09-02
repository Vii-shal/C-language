
// Given a vector arr[] sorted in increasing order of n size and an integer x . 
// find the number of unique pairs that exist in the array whose absolute sum is exactly x.

// input: [1,2,3,4,6] x=7
// output: 2
// explaination:  1,6 and 3,4 sum to 7;

// input: [3,1,3,5,3] x=6
// output: 2
// explaination:  3,3 and 1,5 sum to 6;

// input: [2,2,2,2] x=4
// output: 2
// explaination:  2,2 and 2,2 sum to 4;





#include<iostream>
using namespace std;

int main(){
    int arr[]={2,2,2,2};int n=4;
    int x;cin>>x;
    int count=0;

    int l=0;int r=n-1;
    while(l<r){
        if (arr[l]+arr[r]==x){
            // arr[l]=arr[r]=-999;
            // for (int i=0;i<5;i++){
            //     if (arr[i]==arr[l] || arr[i]==arr[r]){
            //         arr[i]=-999;
            //     }
            // }
            l++;
            r--;
            count++;
        }
        else if (arr[l]+arr[r] < x){
            l++;
        }
        else{
            r--;
        }
    }
    cout<<"ans id : "<<count;
}
