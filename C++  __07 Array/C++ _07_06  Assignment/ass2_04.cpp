// Given a vector arr[] sorted in increasing order of n size and an integer x , 
// Find if there exists a pair in the array whose subtraction is exactly x .


#include<iostream>
using namespace std;

int main(){
    int arr[]={5,10,15,20,26};
    int n=5;
    int x=10;
    int l=0;
    int r=n-1;

    bool ans = false;

    while (l<r){
        if (arr[r]-arr[l]==x){
            ans=true;
            break;
        }
        else if (arr[r]-arr[l]>x){
            l++;
        }
        else{
            r--;
        }
    }
    if (ans==true){
        cout<<"yes";
    }
    else {
        cout<<"no";
    }

}