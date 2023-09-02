// Given two arrays a[] and b[] of same size. Your task is to find the minimum sum of two elements 
// such that they belong to different arrays and are not at the same index. 

#include<iostream>
using namespace std;

int minSum(int a[],int b[],int n){
    int min_a=INT16_MAX;
    int min_b=INT16_MAX;
    int min_2a=INT16_MAX;
    int min_2b=INT16_MAX;
    int index_A;
    int index_B;


    for (int i=0;i<n;i++){
        if (a[i]<min_a){
            min_a=a[i];
            index_A=i;
        }
        else if (a[i]<min_2a){
            min_2a=a[i];
        }

        if (a[i]<min_b){
            min_b=b[i];
            index_B=i;
        }
        else if (b[i]<min_2b){
            min_2b=b[i];
        }
    }

    if (index_A != index_B){
        return min_a+min_b;
    }
    else{
        return min(min_2a+min_b , min_a+min_2b);
    }
}


int main(){
    int n;cin>>n;
    int a[n];
    int b[n];

    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<minSum(a,b,n)<<endl;
    return 0;
}