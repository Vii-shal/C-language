// Given an integer array arr consiting of 0's and 1's only .
// Return the max length of sequence which contains equal numbers of 0 and 1.

#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,1,0,1,1,1};
    int n=7;

    int sum1=0 ,sum0=0;
    for (int i=0;i<n;i++){
        if (arr[i]==0){
            sum0++;
        }
        else{
            sum1++;
        }
    }
    int ans = min(sum0,sum1);
    cout<<"max length of sequence is : "<<2*ans<<endl;
    for (int i=0;i<2*ans;i++){
        cout<<arr[i]<<"  ";
    }
}