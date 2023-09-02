// Given am array and two integers l and r.
// find the sum of elements between the index l and r. 
// both l and r inclusive.

#include<iostream>
using namespace std;

void sum(int arr[],int l,int r){
    int sum=0;
    for (int i=l;i<=r;i++){
        sum+=arr[i];
    }
    cout<<sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int l,r;
    cin>>l>>r;
    sum(arr,l,r);
}