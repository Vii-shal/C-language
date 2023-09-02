// Given an array of integers , print the sums of all subsets in it . Output sums can be printed in any order .
// eg input : arr[]={2,4,5}
//    output : 0  2  4  5  6  7  9  11
//    as subsets are --> {2} , {4} , {5} , {2,4} , {2,5} , {4,5} , {2,4,5}


#include<iostream>
#include<vector>
using namespace std;

void f(int *arr, int n , int i, int sum, vector<int> &result){
    if (i==n){
        result.push_back(sum);
        return ;
    }
    f(arr,n,i+1,sum + arr[i],result);
    f(arr,n,i+1,sum,result);

}

int main(){
    int arr[]={2,4,5};
    int n=3;
    vector<int> result;
    f(arr,n,0,0,result);

    for (int i=0;i<result.size();i++){
        cout<<result[i]<<"  ";
    }

}